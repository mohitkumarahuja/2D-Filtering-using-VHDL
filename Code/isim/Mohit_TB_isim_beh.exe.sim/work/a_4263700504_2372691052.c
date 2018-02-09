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
static const char *ng0 = "C:/Users/Anand/Desktop/Mohit_VHDL_Project/New/Mohit_VHDL_Project/Mohit_VHDL_Project/Mohit_TB.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_4263700504_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4848U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 6184);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4848U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 6184);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4263700504_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 7688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 7912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 == 255);
    if (t12 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t15 = (t11 + 1);
    t1 = (t0 + 7912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB12:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t15 = (t11 + 1);
    t1 = (t0 + 7976);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 7912);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_4263700504_2372691052_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(199, ng0);

LAB3:    t2 = (t0 + 7704);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 5296U);
    t8 = std_textio_endfile(t4);
    t9 = (!(t8));
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 8104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5296U);
    std_textio_file_close(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(189, ng0);
    t10 = (t0 + 6680);
    t11 = (t0 + 5296U);
    t12 = (t0 + 5576U);
    std_textio_readline(STD_TEXTIO, t10, t11, t12);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6680);
    t4 = (t0 + 5576U);
    t5 = (t0 + 4968U);
    t10 = *((char **)t5);
    t5 = (t0 + 14696U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t4, t10, t5);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 4968U);
    t4 = *((char **)t2);
    t2 = (t0 + 8040);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 8104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 8168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_4263700504_2372691052_p_3(char *t0)
{
    char t25[16];
    char t26[16];
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
    int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(213, ng0);
    t4 = (t0 + 2472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(214, ng0);
    t4 = (t0 + 1672U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t13 <= 269);
    if (t14 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 1672U);
    t16 = *((char **)t4);
    t17 = *((int *)t16);
    t18 = (t17 >= 284);
    if (t18 == 1)
        goto LAB17;

LAB18:    t15 = (unsigned char)0;

LAB19:    t11 = t15;

LAB16:    if (t11 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 6928);
    t4 = (t0 + 5720U);
    t5 = (t0 + 1992U);
    t8 = *((char **)t5);
    memcpy(t26, t8, 16U);
    t5 = (t0 + 14520U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t4, t26, t5, (unsigned char)0, 0);

LAB12:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 6928);
    t4 = (t0 + 5400U);
    t5 = (t0 + 5720U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB9;

LAB11:    xsi_set_current_line(215, ng0);
    t4 = (t0 + 6928);
    t22 = (t0 + 5720U);
    t23 = (t0 + 2152U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 16U);
    t23 = (t0 + 14536U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t4, t22, t25, t23, (unsigned char)0, 0);
    goto LAB12;

LAB14:    t11 = (unsigned char)1;
    goto LAB16;

LAB17:    t4 = (t0 + 1672U);
    t19 = *((char **)t4);
    t20 = *((int *)t19);
    t21 = (t20 <= 290);
    t15 = t21;
    goto LAB19;

LAB20:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 5400U);
    std_textio_file_close(t2);
    goto LAB21;

}

static void work_a_4263700504_2372691052_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7768);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 2472U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(238, ng0);
    t4 = (t0 + 8232);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 8296);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8360);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t4 = (t0 + 2312U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;
    goto LAB13;

}


extern void work_a_4263700504_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4263700504_2372691052_p_0,(void *)work_a_4263700504_2372691052_p_1,(void *)work_a_4263700504_2372691052_p_2,(void *)work_a_4263700504_2372691052_p_3,(void *)work_a_4263700504_2372691052_p_4};
	xsi_register_didat("work_a_4263700504_2372691052", "isim/Mohit_TB_isim_beh.exe.sim/work/a_4263700504_2372691052.didat");
	xsi_register_executes(pe);
}
