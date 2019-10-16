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
static const char *ng0 = "E:/Documents/P6/P6/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB35;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    t3 = (t14 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t3) != 0)
        goto LAB38;

LAB39:    t9 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t9);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB40;

LAB41:    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t9) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t11) > 0)
        goto LAB46;

LAB47:    memcpy(t10, t28, 8);

LAB48:    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 32);
    goto LAB35;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB50;

LAB49:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB51;

LAB52:    memset(t11, 0, 8);
    t23 = (t12 + 4);
    t15 = *((unsigned int *)t23);
    t16 = (~(t15));
    t17 = *((unsigned int *)t12);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t23) != 0)
        goto LAB56;

LAB57:    t29 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t29);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB58;

LAB59:    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t29) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t11) > 0)
        goto LAB64;

LAB65:    memcpy(t10, t31, 8);

LAB66:    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t10, 0, 0, 32);
    goto LAB35;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_arith_rshift(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    goto LAB35;

LAB21:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t3) = t18;
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 31U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 31U);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB35;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t3) = t18;
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 31U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 31U);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t3) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 31U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 31U);
    memset(t13, 0, 8);
    xsi_vlog_signed_arith_rshift(t13, 32, t4, 32, t12, 32);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t13, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 & t16);
    *((unsigned int *)t10) = t17;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB67;

LAB68:
LAB69:    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB70;

LAB71:
LAB72:    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    *((unsigned int *)t10) = t17;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB73;

LAB74:
LAB75:    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB35;

LAB33:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    *((unsigned int *)t11) = t17;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB76;

LAB77:
LAB78:    memset(t10, 0, 8);
    t29 = (t10 + 4);
    t30 = (t11 + 4);
    t43 = *((unsigned int *)t11);
    t44 = (~(t43));
    *((unsigned int *)t10) = t44;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB80;

LAB79:    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & 4294967295U);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & 4294967295U);
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 32);
    goto LAB35;

LAB36:    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB38:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB39;

LAB40:    t23 = ((char*)((ng4)));
    goto LAB41;

LAB42:    t28 = ((char*)((ng5)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t10, 32, t23, 32, t28, 32);
    goto LAB48;

LAB46:    memcpy(t10, t23, 8);
    goto LAB48;

LAB50:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB54:    *((unsigned int *)t11) = 1;
    goto LAB57;

LAB56:    t28 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB57;

LAB58:    t30 = ((char*)((ng4)));
    goto LAB59;

LAB60:    t31 = ((char*)((ng5)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t10, 32, t30, 32, t31, 32);
    goto LAB66;

LAB64:    memcpy(t10, t30, 8);
    goto LAB66;

LAB67:    t24 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t24 | t25);
    t23 = (t4 + 4);
    t28 = (t7 + 4);
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t38 = (~(t37));
    t39 = (t27 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t43 & t41);
    t44 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t44 & t42);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t41);
    t46 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t46 & t42);
    goto LAB69;

LAB70:    t24 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t24 | t25);
    t23 = (t4 + 4);
    t28 = (t7 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t33 = *((unsigned int *)t4);
    t39 = (t33 & t27);
    t34 = *((unsigned int *)t28);
    t35 = (~(t34));
    t36 = *((unsigned int *)t7);
    t40 = (t36 & t35);
    t37 = (~(t39));
    t38 = (~(t40));
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    goto LAB72;

LAB73:    t24 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t24 | t25);
    goto LAB75;

LAB76:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t24 | t25);
    t23 = (t4 + 4);
    t28 = (t7 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t33 = *((unsigned int *)t4);
    t39 = (t33 & t27);
    t34 = *((unsigned int *)t28);
    t35 = (~(t34));
    t36 = *((unsigned int *)t7);
    t40 = (t36 & t35);
    t37 = (~(t39));
    t38 = (~(t40));
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    goto LAB78;

LAB80:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t10) = (t45 | t46);
    t47 = *((unsigned int *)t29);
    t48 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t47 | t48);
    goto LAB79;

}


extern void work_m_00000000004099288600_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000004099288600_0886308060", "isim/tb1_isim_beh.exe.sim/work/m_00000000004099288600_0886308060.didat");
	xsi_register_executes(pe);
}
