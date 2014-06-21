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

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/ad/eng/users/k/m/kmannix/EC 413/Project_Ver2/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};



static void Always_12_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t39[8];
    char t78[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB8;

LAB5:    if (t27 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t15) = 1;

LAB8:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB16;

LAB13:    if (t27 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t15) = 1;

LAB16:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB26;

LAB23:    if (t27 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t15) = 1;

LAB26:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB34;

LAB31:    if (t27 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t15) = 1;

LAB34:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB42;

LAB39:    if (t27 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t15) = 1;

LAB42:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB64;

LAB61:    if (t27 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t15) = 1;

LAB64:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng7)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB75;

LAB72:    if (t27 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t15) = 1;

LAB75:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB86;

LAB83:    if (t27 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t15) = 1;

LAB86:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB87;

LAB88:
LAB89:
LAB78:
LAB67:
LAB45:
LAB37:
LAB29:
LAB19:
LAB11:    goto LAB2;

LAB7:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(13, ng0);

LAB12:    xsi_set_current_line(14, ng0);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    t37 = (t0 + 1928);
    xsi_vlogvar_assign_value(t37, t38, 0, 0, 32);
    goto LAB11;

LAB15:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(15, ng0);

LAB20:    xsi_set_current_line(16, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    memset(t39, 0, 8);
    t30 = (t39 + 4);
    t37 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    *((unsigned int *)t39) = t41;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB22;

LAB21:    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 4294967295U);
    t47 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t47 & 4294967295U);
    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t39, 0, 0, 32);
    goto LAB19;

LAB22:    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t39) = (t42 | t43);
    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t30) = (t44 | t45);
    goto LAB21;

LAB25:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(17, ng0);

LAB30:    xsi_set_current_line(18, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1528U);
    t37 = *((char **)t30);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t31, 32, t37, 32);
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t39, 0, 0, 32);
    goto LAB29;

LAB33:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(19, ng0);

LAB38:    xsi_set_current_line(20, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1528U);
    t37 = *((char **)t30);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t31, 32, t37, 32);
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t39, 0, 0, 32);
    goto LAB37;

LAB41:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(21, ng0);

LAB46:    xsi_set_current_line(22, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    t30 = (t31 + 4);
    t40 = *((unsigned int *)t30);
    t41 = (~(t40));
    t42 = *((unsigned int *)t31);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(24, ng0);

LAB57:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    t10 = (t8 | t9);
    *((unsigned int *)t4) = t10;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    t13 = (t11 | t12);
    *((unsigned int *)t7) = t13;
    t18 = *((unsigned int *)t7);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB58;

LAB59:
LAB60:    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 32);

LAB49:    goto LAB45;

LAB47:    xsi_set_current_line(22, ng0);

LAB50:    xsi_set_current_line(23, ng0);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng1)));
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t37);
    t47 = (t45 & t46);
    *((unsigned int *)t39) = t47;
    t48 = (t38 + 4);
    t49 = (t37 + 4);
    t50 = (t39 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB51;

LAB52:
LAB53:    t76 = (t0 + 1528U);
    t77 = *((char **)t76);
    t79 = *((unsigned int *)t39);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t76 = (t39 + 4);
    t82 = (t77 + 4);
    t83 = (t78 + 4);
    t84 = *((unsigned int *)t76);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB54;

LAB55:
LAB56:    t105 = (t0 + 1928);
    xsi_vlogvar_assign_value(t105, t78, 0, 0, 32);
    goto LAB49;

LAB51:    t56 = *((unsigned int *)t39);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t39) = (t56 | t57);
    t58 = (t38 + 4);
    t59 = (t37 + 4);
    t60 = *((unsigned int *)t38);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t37);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t74 & t70);
    t75 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t75 & t71);
    goto LAB53;

LAB54:    t89 = *((unsigned int *)t78);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t78) = (t89 | t90);
    t91 = (t39 + 4);
    t92 = (t77 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t39);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t77);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB56;

LAB58:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t4) = (t20 | t21);
    t14 = (t3 + 4);
    t16 = (t5 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t68 = (t24 & t23);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t69 = (t27 & t26);
    t28 = (~(t68));
    t29 = (~(t69));
    t32 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t32 & t28);
    t33 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t33 & t29);
    goto LAB60;

LAB63:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(27, ng0);

LAB68:    xsi_set_current_line(28, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1528U);
    t37 = *((char **)t30);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t37);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t31 + 4);
    t38 = (t37 + 4);
    t48 = (t39 + 4);
    t43 = *((unsigned int *)t30);
    t44 = *((unsigned int *)t38);
    t45 = (t43 | t44);
    *((unsigned int *)t48) = t45;
    t46 = *((unsigned int *)t48);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB69;

LAB70:
LAB71:    t58 = (t0 + 1928);
    xsi_vlogvar_assign_value(t58, t39, 0, 0, 32);
    goto LAB67;

LAB69:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t48);
    *((unsigned int *)t39) = (t51 | t52);
    t49 = (t31 + 4);
    t50 = (t37 + 4);
    t53 = *((unsigned int *)t31);
    t54 = (~(t53));
    t55 = *((unsigned int *)t49);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t60 = (~(t57));
    t61 = *((unsigned int *)t50);
    t62 = (~(t61));
    t68 = (t54 & t56);
    t69 = (t60 & t62);
    t63 = (~(t68));
    t64 = (~(t69));
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & t63);
    t66 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t66 & t64);
    t67 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t67 & t63);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t64);
    goto LAB71;

LAB74:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(29, ng0);

LAB79:    xsi_set_current_line(30, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1528U);
    t37 = *((char **)t30);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    *((unsigned int *)t39) = t42;
    t30 = (t31 + 4);
    t38 = (t37 + 4);
    t48 = (t39 + 4);
    t43 = *((unsigned int *)t30);
    t44 = *((unsigned int *)t38);
    t45 = (t43 | t44);
    *((unsigned int *)t48) = t45;
    t46 = *((unsigned int *)t48);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB80;

LAB81:
LAB82:    t49 = (t0 + 1928);
    xsi_vlogvar_assign_value(t49, t39, 0, 0, 32);
    goto LAB78;

LAB80:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t48);
    *((unsigned int *)t39) = (t51 | t52);
    goto LAB82;

LAB85:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(31, ng0);

LAB90:    xsi_set_current_line(32, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1528U);
    t37 = *((char **)t30);
    memset(t108, 0, 8);
    xsi_vlog_signed_less(t108, 32, t31, 32, t37, 32);
    memset(t78, 0, 8);
    t30 = (t108 + 4);
    t40 = *((unsigned int *)t30);
    t41 = (~(t40));
    t42 = *((unsigned int *)t108);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t30) != 0)
        goto LAB93;

LAB94:    t48 = (t78 + 4);
    t45 = *((unsigned int *)t78);
    t46 = *((unsigned int *)t48);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB95;

LAB96:    t51 = *((unsigned int *)t78);
    t52 = (~(t51));
    t53 = *((unsigned int *)t48);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t48) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t78) > 0)
        goto LAB101;

LAB102:    memcpy(t39, t50, 8);

LAB103:    t58 = (t0 + 1928);
    xsi_vlogvar_assign_value(t58, t39, 0, 0, 32);
    goto LAB89;

LAB91:    *((unsigned int *)t78) = 1;
    goto LAB94;

LAB93:    t38 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB94;

LAB95:    t49 = ((char*)((ng9)));
    goto LAB96;

LAB97:    t50 = ((char*)((ng10)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t39, 32, t49, 32, t50, 32);
    goto LAB103;

LAB101:    memcpy(t39, t49, 8);
    goto LAB103;

}


extern void work_m_08891043911359529976_0886308060_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_08891043911359529976_0886308060", "isim/TestTop_1_isim_beh.exe.sim/work/m_08891043911359529976_0886308060.didat");
	xsi_register_executes(pe);
}
