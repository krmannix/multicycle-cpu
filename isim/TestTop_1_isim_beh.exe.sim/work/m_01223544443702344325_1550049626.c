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
static const char *ng0 = "/ad/eng/users/k/m/kmannix/EC 413/Project_Ver2/BranchLogic.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {32U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {33U, 0U};
static int ng6[] = {31, 0};
static unsigned int ng7[] = {34U, 0U};
static unsigned int ng8[] = {35U, 0U};



static void Always_28_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t46[8];
    char t60[8];
    char t76[8];
    char t84[8];
    char t124[8];
    char t125[8];
    char t127[8];
    char t130[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t47;
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
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t126;
    char *t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);

LAB137:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    memset(t46, 0, 8);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t47) != 0)
        goto LAB20;

LAB21:    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB22;

LAB23:    memcpy(t84, t46, 8);

LAB24:    t116 = (t84 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t84);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB43:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB47:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t22);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB48;

LAB49:    memcpy(t76, t30, 8);

LAB50:    t75 = (t76 + 4);
    t95 = *((unsigned int *)t75);
    t96 = (~(t95));
    t97 = *((unsigned int *)t76);
    t100 = (t97 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t30) = 1;

LAB69:    memset(t46, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t29) != 0)
        goto LAB72;

LAB73:    t32 = (t46 + 4);
    t33 = *((unsigned int *)t46);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB74;

LAB75:    memcpy(t84, t46, 8);

LAB76:    t89 = (t84 + 4);
    t95 = *((unsigned int *)t89);
    t96 = (~(t95));
    t97 = *((unsigned int *)t84);
    t100 = (t97 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t30) = 1;

LAB95:    memset(t46, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t29) != 0)
        goto LAB98;

LAB99:    t32 = (t46 + 4);
    t33 = *((unsigned int *)t46);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB100;

LAB101:    memcpy(t84, t46, 8);

LAB102:    memset(t124, 0, 8);
    t89 = (t84 + 4);
    t92 = *((unsigned int *)t89);
    t93 = (~(t92));
    t94 = *((unsigned int *)t84);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t89) != 0)
        goto LAB116;

LAB117:    t98 = (t124 + 4);
    t97 = *((unsigned int *)t124);
    t100 = *((unsigned int *)t98);
    t101 = (t97 || t100);
    if (t101 > 0)
        goto LAB118;

LAB119:    memcpy(t130, t124, 8);

LAB120:    t162 = (t130 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t130);
    t166 = (t165 & t164);
    t167 = (t166 != 0);
    if (t167 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(38, ng0);

LAB136:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB134:
LAB90:
LAB64:
LAB38:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t46) = 1;
    goto LAB21;

LAB20:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB21;

LAB22:    t58 = (t0 + 1208U);
    t59 = *((char **)t58);
    t58 = ((char*)((ng3)));
    memset(t60, 0, 8);
    t61 = (t59 + 4);
    t62 = (t58 + 4);
    t63 = *((unsigned int *)t59);
    t64 = *((unsigned int *)t58);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB28;

LAB25:    if (t72 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t60) = 1;

LAB28:    memset(t76, 0, 8);
    t77 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t77) != 0)
        goto LAB31;

LAB32:    t85 = *((unsigned int *)t46);
    t86 = *((unsigned int *)t76);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t46 + 4);
    t89 = (t76 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t76) = 1;
    goto LAB32;

LAB31:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB32;

LAB33:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t46 + 4);
    t99 = (t76 + 4);
    t100 = *((unsigned int *)t46);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t76);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB35;

LAB36:    xsi_set_current_line(30, ng0);

LAB39:    xsi_set_current_line(31, ng0);
    t122 = ((char*)((ng4)));
    t123 = (t0 + 1768);
    xsi_vlogvar_assign_value(t123, t122, 0, 0, 1);
    goto LAB38;

LAB41:    *((unsigned int *)t6) = 1;
    goto LAB43;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t30) = 1;
    goto LAB47;

LAB46:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB48:    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng5)));
    memset(t46, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t28);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t32);
    t48 = (t43 | t44);
    t49 = (~(t48));
    t50 = (t42 & t49);
    if (t50 != 0)
        goto LAB54;

LAB51:    if (t48 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t46) = 1;

LAB54:    memset(t60, 0, 8);
    t47 = (t46 + 4);
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t55 = *((unsigned int *)t46);
    t56 = (t55 & t52);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t47) != 0)
        goto LAB57;

LAB58:    t63 = *((unsigned int *)t30);
    t64 = *((unsigned int *)t60);
    t65 = (t63 & t64);
    *((unsigned int *)t76) = t65;
    t54 = (t30 + 4);
    t58 = (t60 + 4);
    t59 = (t76 + 4);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    *((unsigned int *)t59) = t68;
    t69 = *((unsigned int *)t59);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t45 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t60) = 1;
    goto LAB58;

LAB57:    t53 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB58;

LAB59:    t71 = *((unsigned int *)t76);
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t76) = (t71 | t72);
    t61 = (t30 + 4);
    t62 = (t60 + 4);
    t73 = *((unsigned int *)t30);
    t74 = (~(t73));
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (~(t80));
    t82 = *((unsigned int *)t62);
    t85 = (~(t82));
    t108 = (t74 & t79);
    t109 = (t81 & t85);
    t86 = (~(t108));
    t87 = (~(t109));
    t91 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t91 & t86);
    t92 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t92 & t87);
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t86);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t87);
    goto LAB61;

LAB62:    xsi_set_current_line(32, ng0);

LAB65:    xsi_set_current_line(33, ng0);
    t77 = ((char*)((ng4)));
    t83 = (t0 + 1768);
    xsi_vlogvar_assign_value(t83, t77, 0, 0, 1);
    goto LAB64;

LAB68:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t46) = 1;
    goto LAB73;

LAB72:    t31 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB73;

LAB74:    t45 = (t0 + 1208U);
    t47 = *((char **)t45);
    t45 = ((char*)((ng7)));
    memset(t60, 0, 8);
    t53 = (t47 + 4);
    t54 = (t45 + 4);
    t36 = *((unsigned int *)t47);
    t37 = *((unsigned int *)t45);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t53);
    t40 = *((unsigned int *)t54);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t53);
    t44 = *((unsigned int *)t54);
    t48 = (t43 | t44);
    t49 = (~(t48));
    t50 = (t42 & t49);
    if (t50 != 0)
        goto LAB80;

LAB77:    if (t48 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t60) = 1;

LAB80:    memset(t76, 0, 8);
    t59 = (t60 + 4);
    t51 = *((unsigned int *)t59);
    t52 = (~(t51));
    t55 = *((unsigned int *)t60);
    t56 = (t55 & t52);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t59) != 0)
        goto LAB83;

LAB84:    t63 = *((unsigned int *)t46);
    t64 = *((unsigned int *)t76);
    t65 = (t63 & t64);
    *((unsigned int *)t84) = t65;
    t62 = (t46 + 4);
    t75 = (t76 + 4);
    t77 = (t84 + 4);
    t66 = *((unsigned int *)t62);
    t67 = *((unsigned int *)t75);
    t68 = (t66 | t67);
    *((unsigned int *)t77) = t68;
    t69 = *((unsigned int *)t77);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t58 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t76) = 1;
    goto LAB84;

LAB83:    t61 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB84;

LAB85:    t71 = *((unsigned int *)t84);
    t72 = *((unsigned int *)t77);
    *((unsigned int *)t84) = (t71 | t72);
    t83 = (t46 + 4);
    t88 = (t76 + 4);
    t73 = *((unsigned int *)t46);
    t74 = (~(t73));
    t78 = *((unsigned int *)t83);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t88);
    t85 = (~(t82));
    t108 = (t74 & t79);
    t109 = (t81 & t85);
    t86 = (~(t108));
    t87 = (~(t109));
    t91 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t91 & t86);
    t92 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t92 & t87);
    t93 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t93 & t86);
    t94 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t94 & t87);
    goto LAB87;

LAB88:    xsi_set_current_line(34, ng0);

LAB91:    xsi_set_current_line(35, ng0);
    t90 = ((char*)((ng4)));
    t98 = (t0 + 1768);
    xsi_vlogvar_assign_value(t98, t90, 0, 0, 1);
    goto LAB90;

LAB94:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t46) = 1;
    goto LAB99;

LAB98:    t31 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB99;

LAB100:    t45 = (t0 + 1368U);
    t47 = *((char **)t45);
    t45 = ((char*)((ng2)));
    memset(t60, 0, 8);
    t53 = (t47 + 4);
    t54 = (t45 + 4);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t45);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t53);
    t41 = *((unsigned int *)t54);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t53);
    t48 = *((unsigned int *)t54);
    t49 = (t44 | t48);
    t50 = (~(t49));
    t51 = (t43 & t50);
    if (t51 != 0)
        goto LAB106;

LAB103:    if (t49 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t60) = 1;

LAB106:    memset(t76, 0, 8);
    t59 = (t60 + 4);
    t52 = *((unsigned int *)t59);
    t55 = (~(t52));
    t56 = *((unsigned int *)t60);
    t57 = (t56 & t55);
    t63 = (t57 & 1U);
    if (t63 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t59) != 0)
        goto LAB109;

LAB110:    t64 = *((unsigned int *)t46);
    t65 = *((unsigned int *)t76);
    t66 = (t64 | t65);
    *((unsigned int *)t84) = t66;
    t62 = (t46 + 4);
    t75 = (t76 + 4);
    t77 = (t84 + 4);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t75);
    t69 = (t67 | t68);
    *((unsigned int *)t77) = t69;
    t70 = *((unsigned int *)t77);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB102;

LAB105:    t58 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t76) = 1;
    goto LAB110;

LAB109:    t61 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB110;

LAB111:    t72 = *((unsigned int *)t84);
    t73 = *((unsigned int *)t77);
    *((unsigned int *)t84) = (t72 | t73);
    t83 = (t46 + 4);
    t88 = (t76 + 4);
    t74 = *((unsigned int *)t83);
    t78 = (~(t74));
    t79 = *((unsigned int *)t46);
    t108 = (t79 & t78);
    t80 = *((unsigned int *)t88);
    t81 = (~(t80));
    t82 = *((unsigned int *)t76);
    t109 = (t82 & t81);
    t85 = (~(t108));
    t86 = (~(t109));
    t87 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t87 & t85);
    t91 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t91 & t86);
    goto LAB113;

LAB114:    *((unsigned int *)t124) = 1;
    goto LAB117;

LAB116:    t90 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB117;

LAB118:    t99 = (t0 + 1208U);
    t116 = *((char **)t99);
    t99 = ((char*)((ng8)));
    memset(t125, 0, 8);
    t122 = (t116 + 4);
    t123 = (t99 + 4);
    t102 = *((unsigned int *)t116);
    t103 = *((unsigned int *)t99);
    t104 = (t102 ^ t103);
    t105 = *((unsigned int *)t122);
    t106 = *((unsigned int *)t123);
    t107 = (t105 ^ t106);
    t110 = (t104 | t107);
    t111 = *((unsigned int *)t122);
    t112 = *((unsigned int *)t123);
    t113 = (t111 | t112);
    t114 = (~(t113));
    t115 = (t110 & t114);
    if (t115 != 0)
        goto LAB124;

LAB121:    if (t113 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t125) = 1;

LAB124:    memset(t127, 0, 8);
    t128 = (t125 + 4);
    t117 = *((unsigned int *)t128);
    t118 = (~(t117));
    t119 = *((unsigned int *)t125);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t128) != 0)
        goto LAB127;

LAB128:    t131 = *((unsigned int *)t124);
    t132 = *((unsigned int *)t127);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t124 + 4);
    t135 = (t127 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB120;

LAB123:    t126 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t127) = 1;
    goto LAB128;

LAB127:    t129 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB128;

LAB129:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t124 + 4);
    t145 = (t127 + 4);
    t146 = *((unsigned int *)t124);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t127);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB131;

LAB132:    xsi_set_current_line(36, ng0);

LAB135:    xsi_set_current_line(37, ng0);
    t168 = ((char*)((ng4)));
    t169 = (t0 + 1768);
    xsi_vlogvar_assign_value(t169, t168, 0, 0, 1);
    goto LAB134;

}


extern void work_m_01223544443702344325_1550049626_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_01223544443702344325_1550049626", "isim/TestTop_1_isim_beh.exe.sim/work/m_01223544443702344325_1550049626.didat");
	xsi_register_executes(pe);
}
