/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Anand/Desktop/Mohit_VHDL_Project/New/Mohit_VHDL_Project/Mohit_VHDL_Project/FILTER_PROCESS.vhd";



static void work_a_3595368726_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(334, ng0);

LAB3:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11192);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 11112);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3595368726_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3595368726_3212880686_p_0};
	xsi_register_didat("work_a_3595368726_3212880686", "isim/Mohit_TB_isim_beh.exe.sim/work/a_3595368726_3212880686.didat");
	xsi_register_executes(pe);
}
