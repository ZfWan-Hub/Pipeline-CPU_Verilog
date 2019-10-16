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
static const char *ng0 = "E:/Documents/ISE/P15/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {43, 0};
static int ng7[] = {42, 0};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};



static void Always_30_0(char *t0)
{
    char t14[8];
    char t18[8];
    char t27[8];
    char t31[8];
    char t39[8];
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
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);

LAB10:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB25;

LAB24:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB27;

LAB26:    *((unsigned int *)t14) = 1;

LAB27:    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) != 0)
        goto LAB31;

LAB32:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB33;

LAB34:    memcpy(t39, t18, 8);

LAB35:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB50:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB52;

LAB51:    t11 = (t2 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB54;

LAB53:    *((unsigned int *)t14) = 1;

LAB54:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t15) != 0)
        goto LAB58;

LAB59:    t17 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB60;

LAB61:    memcpy(t39, t18, 8);

LAB62:    t45 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t45, t39, 0, 0, 1, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(43, ng0);

LAB75:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB79;

LAB76:    if (t34 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t14) = 1;

LAB79:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t16) != 0)
        goto LAB82;

LAB83:    t19 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB84;

LAB85:    memcpy(t39, t18, 8);

LAB86:    t53 = (t39 + 4);
    t95 = *((unsigned int *)t53);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB100:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(48, ng0);

LAB101:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB103;

LAB102:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB105;

LAB104:    *((unsigned int *)t14) = 1;

LAB105:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t16) != 0)
        goto LAB109;

LAB110:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB111;

LAB112:    memcpy(t39, t18, 8);

LAB113:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB128:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB130;

LAB129:    t11 = (t2 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB130;

LAB133:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB132;

LAB131:    *((unsigned int *)t14) = 1;

LAB132:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t15) != 0)
        goto LAB136;

LAB137:    t17 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB138;

LAB139:    memcpy(t39, t18, 8);

LAB140:    t45 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t45, t39, 0, 0, 1, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(53, ng0);

LAB153:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB157;

LAB154:    if (t34 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t14) = 1;

LAB157:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t16) != 0)
        goto LAB160;

LAB161:    t19 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB162;

LAB163:    memcpy(t39, t18, 8);

LAB164:    t53 = (t39 + 4);
    t95 = *((unsigned int *)t53);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB178:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(58, ng0);

LAB179:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB25:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t18) = 1;
    goto LAB32;

LAB31:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    t25 = (t0 + 1368U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB37;

LAB36:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB39;

LAB38:    *((unsigned int *)t27) = 1;

LAB39:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t32) != 0)
        goto LAB43;

LAB44:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB43:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB44;

LAB45:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB47;

LAB48:    xsi_set_current_line(39, ng0);
    t77 = ((char*)((ng4)));
    t78 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 32, 0LL);
    goto LAB50;

LAB52:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB54;

LAB56:    *((unsigned int *)t18) = 1;
    goto LAB59;

LAB58:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB59;

LAB60:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB64;

LAB63:    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t20) > *((unsigned int *)t19))
        goto LAB66;

LAB65:    *((unsigned int *)t27) = 1;

LAB66:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t28) != 0)
        goto LAB70;

LAB71:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB62;

LAB64:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB66;

LAB68:    *((unsigned int *)t31) = 1;
    goto LAB71;

LAB70:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB71;

LAB72:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t13 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t13));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB74;

LAB78:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t18) = 1;
    goto LAB83;

LAB82:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB83;

LAB84:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    t26 = (t20 + 4);
    t51 = *((unsigned int *)t21);
    t52 = *((unsigned int *)t20);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t25);
    t57 = *((unsigned int *)t26);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t25);
    t61 = *((unsigned int *)t26);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB90;

LAB87:    if (t62 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t27) = 1;

LAB90:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t67 = *((unsigned int *)t29);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t29) != 0)
        goto LAB93;

LAB94:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t76 = *((unsigned int *)t32);
    t79 = *((unsigned int *)t38);
    t80 = (t76 | t79);
    *((unsigned int *)t43) = t80;
    t81 = *((unsigned int *)t43);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t31) = 1;
    goto LAB94;

LAB93:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB94;

LAB95:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t83 | t84);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t85 = *((unsigned int *)t44);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t63 = (t87 & t86);
    t88 = *((unsigned int *)t45);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t64 = (t90 & t89);
    t91 = (~(t63));
    t92 = (~(t64));
    t93 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t93 & t91);
    t94 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t94 & t92);
    goto LAB97;

LAB98:    xsi_set_current_line(44, ng0);
    t54 = ((char*)((ng8)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    goto LAB100;

LAB103:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB105;

LAB107:    *((unsigned int *)t18) = 1;
    goto LAB110;

LAB109:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB110;

LAB111:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB115;

LAB114:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB115;

LAB118:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB117;

LAB116:    *((unsigned int *)t27) = 1;

LAB117:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t29) != 0)
        goto LAB121;

LAB122:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB113;

LAB115:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB117;

LAB119:    *((unsigned int *)t31) = 1;
    goto LAB122;

LAB121:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB122;

LAB123:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB125;

LAB126:    xsi_set_current_line(49, ng0);
    t54 = ((char*)((ng9)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    goto LAB128;

LAB130:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB132;

LAB134:    *((unsigned int *)t18) = 1;
    goto LAB137;

LAB136:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB137;

LAB138:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB142;

LAB141:    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB142;

LAB145:    if (*((unsigned int *)t20) > *((unsigned int *)t19))
        goto LAB144;

LAB143:    *((unsigned int *)t27) = 1;

LAB144:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t28) != 0)
        goto LAB148;

LAB149:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB140;

LAB142:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB144;

LAB146:    *((unsigned int *)t31) = 1;
    goto LAB149;

LAB148:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB149;

LAB150:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t13 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t13));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB152;

LAB156:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB157;

LAB158:    *((unsigned int *)t18) = 1;
    goto LAB161;

LAB160:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB161;

LAB162:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    t26 = (t20 + 4);
    t51 = *((unsigned int *)t21);
    t52 = *((unsigned int *)t20);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t25);
    t57 = *((unsigned int *)t26);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t25);
    t61 = *((unsigned int *)t26);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB168;

LAB165:    if (t62 != 0)
        goto LAB167;

LAB166:    *((unsigned int *)t27) = 1;

LAB168:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t67 = *((unsigned int *)t29);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t29) != 0)
        goto LAB171;

LAB172:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t76 = *((unsigned int *)t32);
    t79 = *((unsigned int *)t38);
    t80 = (t76 | t79);
    *((unsigned int *)t43) = t80;
    t81 = *((unsigned int *)t43);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB164;

LAB167:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB168;

LAB169:    *((unsigned int *)t31) = 1;
    goto LAB172;

LAB171:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB172;

LAB173:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t83 | t84);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t85 = *((unsigned int *)t44);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t63 = (t87 & t86);
    t88 = *((unsigned int *)t45);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t64 = (t90 & t89);
    t91 = (~(t63));
    t92 = (~(t64));
    t93 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t93 & t91);
    t94 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t94 & t92);
    goto LAB175;

LAB176:    xsi_set_current_line(54, ng0);
    t54 = ((char*)((ng8)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    goto LAB178;

}


extern void work_m_00000000002504147364_4180013079_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000002504147364_4180013079", "isim/string_tb_isim_beh.exe.sim/work/m_00000000002504147364_4180013079.didat");
	xsi_register_executes(pe);
}
