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
static const char *ng0 = "E:/Documents/P6/P6/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static const char *ng11 = "%d@%h: *%h <= %h";
static int ng12[] = {8, 0};
static unsigned int ng13[] = {0U, 0U};



static void Initial_37_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB6:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4095U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4095U);
    t12 = (t0 + 5144);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 4095U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 11);
    t25 = (t0 + 5032);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_44_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2328U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 12, 2);
    t12 = (t0 + 5208);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5048);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_46_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t40[8];
    char t47[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);

LAB16:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB15;

LAB17:    xsi_set_current_line(53, ng0);

LAB20:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2728);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2328U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t15, t17, t20, 2, 1, t22, 12, 2);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t28 = (!(t6));
    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(64, ng0);
    t2 = xsi_vlog_time(t47, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t3, 32);
    t11 = ((char*)((ng13)));
    t12 = (t0 + 1048U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t11, 2);
    t18 = (t0 + 3048);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)118, t47, 64, (char)118, t13, 32, (char)118, t15, 32, (char)118, t20, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB36;

LAB24:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 2168U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 16);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 16);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 65535U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 16, t15, 16);
    t18 = (t0 + 3048);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 32);
    goto LAB36;

LAB26:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 0);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 65535U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 16, t15, 16);
    t18 = (t0 + 3048);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 32);
    goto LAB36;

LAB28:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 2168U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 8);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 8);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 16777215U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 16777215U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 24, t15, 8);
    t18 = (t0 + 3048);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 32);
    goto LAB36;

LAB30:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 0);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 255U);
    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    memset(t40, 0, 8);
    t18 = (t40 + 4);
    t20 = (t19 + 4);
    t41 = *((unsigned int *)t19);
    t42 = (t41 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t20);
    t44 = (t43 >> 16);
    *((unsigned int *)t18) = t44;
    t45 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t45 & 65535U);
    t46 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t46 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t40, 16, t16, 8, t15, 8);
    t21 = (t0 + 3048);
    xsi_vlogvar_assign_value(t21, t13, 0, 0, 32);
    goto LAB36;

LAB32:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 0);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 255U);
    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    memset(t40, 0, 8);
    t18 = (t40 + 4);
    t20 = (t19 + 4);
    t41 = *((unsigned int *)t19);
    t42 = (t41 >> 24);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t20);
    t44 = (t43 >> 24);
    *((unsigned int *)t18) = t44;
    t45 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t45 & 255U);
    t46 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t46 & 255U);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t40, 8, t16, 8, t15, 16);
    t21 = (t0 + 3048);
    xsi_vlogvar_assign_value(t21, t13, 0, 0, 32);
    goto LAB36;

LAB34:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 16777215U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 16777215U);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t17);
    t37 = (t34 >> 0);
    *((unsigned int *)t12) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & 255U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 8, t15, 24);
    t18 = (t0 + 3048);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 32);
    goto LAB36;

LAB37:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t11, t4, 0, *((unsigned int *)t15), t36);
    goto LAB38;

}


extern void work_m_00000000001247572791_2924402094_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Cont_43_1,(void *)Cont_44_2,(void *)Always_46_3};
	xsi_register_didat("work_m_00000000001247572791_2924402094", "isim/tb1_isim_beh.exe.sim/work/m_00000000001247572791_2924402094.didat");
	xsi_register_executes(pe);
}
