/*
 * Copyright (c) 2010-2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
 * @defgroup diag_ddr_test DDR Test
 */

/*!
 * @file ddr_test.c
 * @brief DDR test driver
 *
 * @ingroup diag_ddr_test
 */

#include "obds.h"

// TODO: PUT #DEFINES WHERE THEY GO
/*
* Note, this file depends that in the SoC header file, CSD0_BASE_ADDR
* CSD1_BASE_ADDR are properly defined.
*/
#if defined(CHIP_MX6SL)
#define CSD0_BASE_ADDR      MMDC0_ARB_BASE_ADDR
#define CSD1_BASE_ADDR      MMDC1_ARB_BASE_ADDR
#else
#define MMDC0_BASE_ADDR			0x10000000
#if defined (BOARD_SABRE_AI)
#define MMDC1_BASE_ADDR			0x90000000
#else
#define MMDC1_BASE_ADDR			NULL
#endif
#define CSD0_BASE_ADDR      MMDC0_BASE_ADDR
#define CSD1_BASE_ADDR      MMDC1_BASE_ADDR
#endif

static const char * const test_name = "DDR Test";

/*!
 * Run the DDR test.
 *
 * @return      TEST_PASSED or TEST_FAILED
 */
menu_action_t ddr_test(const menu_context_t* context, void* param)
{
	//
	// TODO: Get DDR density and nnumber of chip selects from DDR driver?
	//
	const uint32_t ddr_density = 1024 * 1024 * 1024;
	const uint32_t ddr_num_of_cs = 1;

	unsigned int failCount = 0;
    unsigned int i;
    unsigned int *mem_src;
    unsigned int *ps;
    int bank_size = ddr_density / 8;

//	const char* indent = menu_get_indent(context);

    if ( prompt_run_test(test_name, NULL) != TEST_CONTINUE )
    {
    	*(test_return_t*)param = TEST_BYPASSED;
    	return MENU_CONTINUE;
    }

    /* Data bus, walking ones test */
    /* Looking for shorts on the board, so no need to test both chip selects */

    /* First, write walking ones to DDR memory */
    ps = (unsigned int *)(CSD0_BASE_ADDR + bank_size * 4);

    for (i = 0; i <= 31; i++) {
        *ps = 0x1 << i;
        ps++;
    }

    /* Now, read-verify the memory */
    ps = (unsigned int *)(CSD0_BASE_ADDR + bank_size * 4);

    for (i = 0; i <= 31; i++) {
        if (*ps != (0x1 << i)) {
            failCount++;
        }

        ps++;
    }

    /* BANK ADDRESS test */
    /* CS0 bank address test - note since code is stored in first part of DDR in CSD0
       do not write data to the first bank to avoid overwriting code.
       Hence variable "i" starts at 1 not 0 */
    /* First, write data to each bank */
    for (i = 1; i <= 7; i++) {
        ps = (unsigned int *)(CSD0_BASE_ADDR + bank_size * i);
        *ps = 0x11111111 * i;
    }

    /* Second, read back data from each bank to verify */
    for (i = 1; i <= 7; i++) {
        ps = (unsigned int *)(CSD0_BASE_ADDR + bank_size * i);

        if (*ps != 0x11111111 * i) {
            failCount++;
        }
    }

    if (ddr_num_of_cs == 2) {
        /* CS1 bank address test */
        /* First, write data to each bank */
        for (i = 0; i <= 7; i++) {
            ps = (unsigned int *)(CSD1_BASE_ADDR + bank_size * i);
            *ps = 0x88888888 + 0x11111111 * i;
        }

        /* Second, read back data from each bank to verify */
        for (i = 0; i <= 7; i++) {
            ps = (unsigned int *)(CSD1_BASE_ADDR + bank_size * i);

            if (*ps != (0x88888888 + 0x11111111 * i)) {
                failCount++;
            }
        }
    }

    /* DDR ADDRESS test, test the last two banks for each chip select */
    /* CS0 */
    /* First, write data to each row */
    mem_src = (unsigned int*)(CSD0_BASE_ADDR + bank_size * 6);

    for (i = 0; i < bank_size * 2; i = i + 512) {
        ps = mem_src + i;
        *ps = 0x12345678 + 0x11111111 * i;
    }

    /* Second, read back data from each row to verify */
    mem_src = (unsigned int*)(CSD0_BASE_ADDR + bank_size * 6);

    for (i = 0; i < bank_size * 2; i = i + 512) {
        ps = mem_src + i;

        if (*ps != (0x12345678 + 0x11111111 * i)) {
            failCount++;
        }
    }

    if (ddr_num_of_cs == 2) {
        /* CS1 */
        /* First, write data to each row */
        mem_src = (unsigned int*)(CSD1_BASE_ADDR + bank_size * 6);

        for (i = 0; i < bank_size * 2; i = i + 512) {
            ps = mem_src + i;
            *ps = 0x87654321 + 0x11111111 * i;
        }

        /* Second, read back data from each row to verify */
        mem_src = (unsigned int*)(CSD1_BASE_ADDR + bank_size * 6);

        for (i = 0; i < bank_size * 2; i = i + 512) {
            ps = mem_src + i;

            if (*ps != (0x87654321 + 0x11111111 * i)) {
                failCount++;
            }
        }
    }

    if (failCount == 0)
    {
        print_test_passed(test_name, NULL);

        *(test_return_t*)param = TEST_PASSED;
        return MENU_CONTINUE;
    }
    else
    {
        print_test_failed(test_name, NULL);

        *(test_return_t*)param = TEST_FAILED;
        return MENU_CONTINUE;
    }
}
