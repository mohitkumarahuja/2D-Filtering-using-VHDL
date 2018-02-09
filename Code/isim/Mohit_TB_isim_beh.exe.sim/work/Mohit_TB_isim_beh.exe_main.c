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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *IEEE_P_0774719531;
char *IEEE_P_1242562249;
char *STD_STANDARD;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_1705937335;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;
char *IEEE_P_3499444699;
char *XILINXCORELIB_P_3155556343;
char *IEEE_P_1367372525;
char *XILINXCORELIB_P_0718376120;
char *XILINXCORELIB_P_3381355550;
char *IEEE_P_3564397177;
char *XILINXCORELIB_P_0624651749;
char *XILINXCORELIB_P_1433929353;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    xilinxcorelib_a_3073223822_3212880686_init();
    xilinxcorelib_a_2629833478_3212880686_init();
    xilinxcorelib_a_1469255796_3212880686_init();
    work_a_2890035344_3479047978_init();
    work_a_3848652900_3212880686_init();
    unisim_p_0947159679_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    ieee_p_0774719531_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_1705937335_init();
    xilinxcorelib_a_3872257644_3212880686_init();
    work_a_2304684704_3396342756_init();
    xilinxcorelib_p_0718376120_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1433929353_init();
    xilinxcorelib_p_3155556343_init();
    xilinxcorelib_p_0624651749_init();
    xilinxcorelib_a_2061725686_3212880686_init();
    xilinxcorelib_a_2965723758_3212880686_init();
    xilinxcorelib_a_0769758664_3212880686_init();
    work_a_1153420228_1269452356_init();
    work_a_1887345257_3212880686_init();
    unisim_a_3519694068_2693788048_init();
    unisim_a_1769350033_2693788048_init();
    unisim_a_2680519808_1064626918_init();
    unisim_a_2650278463_3403034321_init();
    unisim_a_1916428545_3403034321_init();
    unisim_a_3055263662_1392679692_init();
    unisim_a_2261302797_3723259517_init();
    unisim_a_0587692967_3731405331_init();
    unisim_a_0774281858_3731405331_init();
    unisim_a_3600803327_3731405331_init();
    unisim_a_1446710196_3752513572_init();
    unisim_a_4104775526_3752513572_init();
    unisim_a_3822252837_3752513572_init();
    unisim_a_0350208134_1521797606_init();
    unisim_a_2892212195_1521797606_init();
    unisim_a_1646226234_1266530935_init();
    unisim_a_3484885994_2523279426_init();
    unisim_a_3702704980_1602505438_init();
    unisim_a_1717296735_4086321779_init();
    unisim_a_2562466605_1496654361_init();
    work_a_3926497698_0632001823_init();
    work_a_3595368726_3212880686_init();
    work_a_4263700504_2372691052_init();


    xsi_register_tops("work_a_4263700504_2372691052");

    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_1705937335 = xsi_get_engine_memory("xilinxcorelib_p_1705937335");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    XILINXCORELIB_P_0718376120 = xsi_get_engine_memory("xilinxcorelib_p_0718376120");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    XILINXCORELIB_P_0624651749 = xsi_get_engine_memory("xilinxcorelib_p_0624651749");
    XILINXCORELIB_P_1433929353 = xsi_get_engine_memory("xilinxcorelib_p_1433929353");

    return xsi_run_simulation(argc, argv);

}
