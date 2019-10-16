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
static const char *ng0 = "E:/Documents/ISE/P13/ext.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {65535U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {16383U, 0U};



static void Always_27_0(char *t0)
{
    char t9[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB16:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t9);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t2, 16, t3, 16);
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t9, 0, 0, 32, 0LL);

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t3, 16, t4, 16);
    t7 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1048U);
    t7 = *((char **)t4);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t3, 16);
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(38, ng0);

LAB20:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t9 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    t20 = *((unsigned int *)t9);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 3U, t3, 14, t4, 16, t2, 2);
    t7 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 32, 0LL);

LAB23:    goto LAB15;

LAB17:    xsi_set_current_line(32, ng0);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng2)));
    xsi_vlogtype_concat(t23, 32, 32, 2U, t24, 16, t25, 16);
    t26 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t26, t23, 0, 0, 32, 0LL);
    goto LAB19;

LAB21:    xsi_set_current_line(39, ng0);
    t10 = ((char*)((ng1)));
    t17 = (t0 + 1048U);
    t24 = *((char **)t17);
    t17 = ((char*)((ng6)));
    xsi_vlogtype_concat(t23, 32, 32, 3U, t17, 14, t24, 16, t10, 2);
    t25 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t25, t23, 0, 0, 32, 0LL);
    goto LAB23;

}


extern void work_m_00000000000178114438_4241813833_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000178114438_4241813833", "isim/ext_tb_isim_beh.exe.sim/work/m_00000000000178114438_4241813833.didat");
	xsi_register_executes(pe);
}
