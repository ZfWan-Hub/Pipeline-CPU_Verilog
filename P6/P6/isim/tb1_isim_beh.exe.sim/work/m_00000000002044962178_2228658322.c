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
static const char *ng0 = "E:/Documents/P6/P6/mult_div.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {5, 0};
static int ng8[] = {10, 0};



static void Initial_40_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    memset(t1, 0, 8);
    xsi_vlog_signed_unary_minus(t1, 32, t2, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB1:    return;
}

static void Always_53_1(char *t0)
{
    char t11[8];
    char t21[8];
    char t64[16];
    char t65[16];
    char t66[16];
    char t67[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t11) = 1;

LAB19:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t11);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t11 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB20;

LAB21:
LAB22:    t53 = (t21 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t21);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t11) = 1;

LAB29:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t11);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t11 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB30;

LAB31:
LAB32:    t53 = (t21 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t21);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;

LAB39:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t11);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t11 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB40;

LAB41:
LAB42:    t53 = (t21 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t21);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t11) = 1;

LAB49:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t11);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t11 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB50;

LAB51:
LAB52:    t53 = (t21 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t21);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB45:
LAB35:
LAB25:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 | t7);
    *((unsigned int *)t11) = t8;
    t25 = (t4 + 4);
    t26 = (t13 + 4);
    t27 = (t11 + 4);
    t9 = *((unsigned int *)t25);
    t10 = *((unsigned int *)t26);
    t14 = (t9 | t10);
    *((unsigned int *)t27) = t14;
    t15 = *((unsigned int *)t27);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB60;

LAB61:
LAB62:    t53 = (t11 + 4);
    t33 = *((unsigned int *)t53);
    t34 = (~(t33));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t34);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 | t7);
    *((unsigned int *)t11) = t8;
    t25 = (t4 + 4);
    t26 = (t13 + 4);
    t27 = (t11 + 4);
    t9 = *((unsigned int *)t25);
    t10 = *((unsigned int *)t26);
    t14 = (t9 | t10);
    *((unsigned int *)t27) = t14;
    t15 = *((unsigned int *)t27);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB80;

LAB81:
LAB82:    t53 = (t11 + 4);
    t33 = *((unsigned int *)t53);
    t34 = (~(t33));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t34);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB83;

LAB84:
LAB85:
LAB65:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t12 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t12, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB12;

LAB13:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB15;

LAB18:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB20:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t11 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t11);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB22;

LAB23:    xsi_set_current_line(71, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 3208);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    goto LAB25;

LAB28:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB30:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t11 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t11);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB32;

LAB33:    xsi_set_current_line(72, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 3528);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    goto LAB35;

LAB38:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB40:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t11 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t11);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB42;

LAB43:    xsi_set_current_line(73, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 3368);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    goto LAB45;

LAB48:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB49;

LAB50:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t11 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t11);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB52;

LAB53:    xsi_set_current_line(74, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 3688);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    goto LAB55;

LAB56:    xsi_set_current_line(76, ng0);

LAB59:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB58;

LAB60:    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t27);
    *((unsigned int *)t11) = (t17 | t18);
    t35 = (t4 + 4);
    t36 = (t13 + 4);
    t19 = *((unsigned int *)t35);
    t20 = (~(t19));
    t22 = *((unsigned int *)t4);
    t45 = (t22 & t20);
    t23 = *((unsigned int *)t36);
    t24 = (~(t23));
    t28 = *((unsigned int *)t13);
    t46 = (t28 & t24);
    t29 = (~(t45));
    t30 = (~(t46));
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t31 & t29);
    t32 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t32 & t30);
    goto LAB62;

LAB63:    xsi_set_current_line(79, ng0);

LAB66:    xsi_set_current_line(80, ng0);
    t59 = (t0 + 3048);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t61, 32, t62, 32);
    t63 = (t0 + 3048);
    xsi_vlogvar_assign_value(t63, t21, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greatereq(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB69:    goto LAB65;

LAB67:    xsi_set_current_line(81, ng0);

LAB70:    xsi_set_current_line(82, ng0);
    t13 = (t0 + 3528);
    t25 = (t13 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 4);
    t14 = *((unsigned int *)t27);
    t15 = (~(t14));
    t16 = *((unsigned int *)t26);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB74;

LAB75:
LAB76:
LAB73:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t2, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB69;

LAB71:    xsi_set_current_line(82, ng0);
    t35 = (t0 + 3848);
    t36 = (t35 + 56U);
    t53 = *((char **)t36);
    t59 = (t0 + 4008);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_unsigned_multiply(t64, 64, t53, 32, t61, 32);
    t62 = (t0 + 2728);
    xsi_vlogvar_assign_value(t62, t64, 0, 0, 32);
    t63 = (t0 + 2568);
    xsi_vlogvar_assign_value(t63, t64, 32, 0, 32);
    goto LAB73;

LAB74:    xsi_set_current_line(83, ng0);
    t12 = (t0 + 3848);
    t13 = (t12 + 56U);
    t25 = *((char **)t13);
    xsi_vlogtype_sign_extend(t64, 64, t25, 32);
    t26 = (t0 + 4008);
    t27 = (t26 + 56U);
    t35 = *((char **)t27);
    xsi_vlogtype_sign_extend(t65, 64, t35, 32);
    xsi_vlog_signed_multiply(t66, 64, t64, 64, t65, 64);
    t36 = (t0 + 2728);
    xsi_vlogvar_assign_value(t36, t66, 0, 0, 32);
    t53 = (t0 + 2568);
    xsi_vlogvar_assign_value(t53, t66, 32, 0, 32);
    goto LAB76;

LAB77:    xsi_set_current_line(90, ng0);
    t13 = ((char*)((ng1)));
    t25 = (t0 + 2888);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 1);
    goto LAB79;

LAB80:    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t27);
    *((unsigned int *)t11) = (t17 | t18);
    t35 = (t4 + 4);
    t36 = (t13 + 4);
    t19 = *((unsigned int *)t35);
    t20 = (~(t19));
    t22 = *((unsigned int *)t4);
    t45 = (t22 & t20);
    t23 = *((unsigned int *)t36);
    t24 = (~(t23));
    t28 = *((unsigned int *)t13);
    t46 = (t28 & t24);
    t29 = (~(t45));
    t30 = (~(t46));
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t31 & t29);
    t32 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t32 & t30);
    goto LAB82;

LAB83:    xsi_set_current_line(93, ng0);

LAB86:    xsi_set_current_line(94, ng0);
    t59 = (t0 + 3048);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t61, 32, t62, 32);
    t63 = (t0 + 3048);
    xsi_vlogvar_assign_value(t63, t21, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greatereq(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB99;

LAB100:
LAB101:
LAB89:    goto LAB85;

LAB87:    xsi_set_current_line(95, ng0);

LAB90:    xsi_set_current_line(96, ng0);
    t13 = (t0 + 3688);
    t25 = (t13 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 4);
    t14 = *((unsigned int *)t27);
    t15 = (~(t14));
    t16 = *((unsigned int *)t26);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB95;

LAB96:
LAB97:
LAB93:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t2, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB89;

LAB91:    xsi_set_current_line(96, ng0);

LAB94:    xsi_set_current_line(97, ng0);
    t35 = (t0 + 3848);
    t36 = (t35 + 56U);
    t53 = *((char **)t36);
    t59 = (t0 + 4008);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_divide(t21, 32, t53, 32, t61, 32);
    t62 = (t0 + 2728);
    xsi_vlogvar_assign_value(t62, t21, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 32, t13, 32);
    t25 = (t0 + 2568);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    goto LAB93;

LAB95:    xsi_set_current_line(100, ng0);

LAB98:    xsi_set_current_line(101, ng0);
    t12 = (t0 + 3848);
    t13 = (t12 + 56U);
    t25 = *((char **)t13);
    t26 = (t0 + 4008);
    t27 = (t26 + 56U);
    t35 = *((char **)t27);
    memset(t67, 0, 8);
    xsi_vlog_signed_divide(t67, 32, t25, 32, t35, 32);
    t36 = (t0 + 2728);
    xsi_vlogvar_assign_value(t36, t67, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t67, 0, 8);
    xsi_vlog_signed_mod(t67, 32, t4, 32, t13, 32);
    t25 = (t0 + 2568);
    xsi_vlogvar_assign_value(t25, t67, 0, 0, 32);
    goto LAB97;

LAB99:    xsi_set_current_line(109, ng0);
    t13 = ((char*)((ng1)));
    t25 = (t0 + 2888);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 1);
    goto LAB101;

}


extern void work_m_00000000002044962178_2228658322_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000002044962178_2228658322", "isim/tb1_isim_beh.exe.sim/work/m_00000000002044962178_2228658322.didat");
	xsi_register_executes(pe);
}
