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
static const char *ng0 = "E:/Documents/P4/p4/mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {31, 0};
static int ng5[] = {4, 0};



static void Always_40_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t7 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB18;

LAB19:    t20 = *((unsigned int *)t10);
    t21 = (~(t20));
    t22 = *((unsigned int *)t7);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t7) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t10) > 0)
        goto LAB24;

LAB25:    memcpy(t9, t24, 8);

LAB26:    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);

LAB27:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 5);
    goto LAB13;

LAB9:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 5);
    goto LAB13;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB13;

LAB14:    *((unsigned int *)t10) = 1;
    goto LAB17;

LAB16:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    t8 = (t0 + 1688U);
    t19 = *((char **)t8);
    goto LAB19;

LAB20:    t8 = (t0 + 1528U);
    t24 = *((char **)t8);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t9, 32, t19, 32, t24, 32);
    goto LAB26;

LAB24:    memcpy(t9, t19, 8);
    goto LAB26;

LAB28:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB34;

LAB30:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2168U);
    t7 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB34;

LAB32:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2328U);
    t7 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 32, t4, 32);
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB34;

}


extern void work_m_00000000003110928739_1323274903_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000003110928739_1323274903", "isim/mips_isim_beh.exe.sim/work/m_00000000003110928739_1323274903.didat");
	xsi_register_executes(pe);
}
