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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002345920574_3224323566_init();
    work_m_00000000003084761845_1792325930_init();
    work_m_00000000001181651932_0621066737_init();
    work_m_00000000003467223376_1785967555_init();
    work_m_00000000002547648226_0757879789_init();
    work_m_00000000001061718116_1579609468_init();
    work_m_00000000002347116826_1471451290_init();
    work_m_00000000004099288600_0886308060_init();
    work_m_00000000002044962178_2228658322_init();
    work_m_00000000001451134921_1740954459_init();
    work_m_00000000002631812656_4286680365_init();
    work_m_00000000001247572791_2924402094_init();
    work_m_00000000002106440481_1301566584_init();
    work_m_00000000001239689224_2622067639_init();
    work_m_00000000003529772703_2885957937_init();
    work_m_00000000003623352663_2364370701_init();
    work_m_00000000002354525539_2950114442_init();
    work_m_00000000002907662304_0920550704_init();
    work_m_00000000000694824366_3877310806_init();
    work_m_00000000002047498008_1470855114_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_1470855114");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
