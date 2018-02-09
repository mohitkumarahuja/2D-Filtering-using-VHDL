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
static const char *ng0 = "C:/Users/Anand/Desktop/Mohit_VHDL_Project/New/Mohit_VHDL_Project/Mohit_VHDL_Project/Cache_Menory.vhd";



static void work_a_3848652900_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;

LAB0:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10504);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 3752U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB14;

LAB15:    t11 = (unsigned char)0;

LAB16:    if (t11 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 6792U);
    t18 = *((char **)t4);
    t19 = *((int *)t18);
    t20 = (t19 > 257);
    if (t20 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6792U);
    t4 = *((char **)t2);
    t19 = *((int *)t4);
    t25 = (t19 + 1);
    t2 = (t0 + 10792);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t25;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 10728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB18:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5512U);
    t4 = *((char **)t2);
    t2 = (t0 + 10856);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5672U);
    t4 = *((char **)t2);
    t2 = (t0 + 10920);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4552U);
    t4 = *((char **)t2);
    t2 = (t0 + 10984);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5832U);
    t4 = *((char **)t2);
    t2 = (t0 + 11048);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 5992U);
    t4 = *((char **)t2);
    t2 = (t0 + 11112);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6152U);
    t4 = *((char **)t2);
    t2 = (t0 + 11176);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 11240);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 6312U);
    t4 = *((char **)t2);
    t2 = (t0 + 11304);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 6472U);
    t4 = *((char **)t2);
    t2 = (t0 + 11368);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6632U);
    t4 = *((char **)t2);
    t2 = (t0 + 11432);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 11496);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t4 = (t0 + 4712U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t11 = t17;
    goto LAB16;

LAB17:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 10728);
    t21 = (t4 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

}

static void work_a_3848652900_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10520);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(191, ng0);

LAB3:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 11624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10536);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t1 = (t0 + 11688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10552);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(193, ng0);

LAB3:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t1 = (t0 + 11752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10568);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(194, ng0);

LAB3:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t1 = (t0 + 11816);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10584);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10600);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(196, ng0);

LAB3:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t1 = (t0 + 11944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10616);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(197, ng0);

LAB3:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12008);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10632);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3848652900_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(198, ng0);

LAB3:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    t1 = (t0 + 12072);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10648);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3848652900_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3848652900_3212880686_p_0,(void *)work_a_3848652900_3212880686_p_1,(void *)work_a_3848652900_3212880686_p_2,(void *)work_a_3848652900_3212880686_p_3,(void *)work_a_3848652900_3212880686_p_4,(void *)work_a_3848652900_3212880686_p_5,(void *)work_a_3848652900_3212880686_p_6,(void *)work_a_3848652900_3212880686_p_7,(void *)work_a_3848652900_3212880686_p_8,(void *)work_a_3848652900_3212880686_p_9};
	xsi_register_didat("work_a_3848652900_3212880686", "isim/Mohit_TB_isim_beh.exe.sim/work/a_3848652900_3212880686.didat");
	xsi_register_executes(pe);
}
