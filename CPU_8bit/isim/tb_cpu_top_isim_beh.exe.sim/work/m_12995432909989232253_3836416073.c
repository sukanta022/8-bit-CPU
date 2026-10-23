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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CPU_8bit/tb_cpu_top.v";
static const char *ng1 = "FAIL: TIME=%0t PC=%h ACC=%h Z=%b EXPECTED_PC=%h EXPECTED_ACC=%h EXPECTED_Z=%b";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: TIME=%0t PC=%h ACC=%h Z=%b";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {0, 0};
static const char *ng7 = "========================================";
static const char *ng8 = "       SET 2 CPU TESTBENCH";
static unsigned int ng9[] = {85U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {170U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {129U, 0U};
static unsigned int ng17[] = {7U, 0U};
static const char *ng18 = "ALL SET 2 CPU TESTS PASSED!";
static const char *ng19 = "FAILED: %0d test(s)";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t12[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t68[8];
    char t85[8];
    char t88[8];
    char t96[8];
    char t130[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t1 + 2232U);
    t6 = *((char **)t5);
    t5 = (t1 + 3112);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB7;

LAB8:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t12, 8);

LAB15:    memset(t68, 0, 8);
    t69 = (t40 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t40);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t69) != 0)
        goto LAB28;

LAB29:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = (!(t77));
    t79 = *((unsigned int *)t76);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB30;

LAB31:    memcpy(t96, t68, 8);

LAB32:    t124 = (t96 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t96);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(48, ng0);

LAB47:    xsi_set_current_line(50, ng0);
    t4 = xsi_vlog_time(t130, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2232U);
    t6 = *((char **)t5);
    t5 = (t1 + 1912U);
    t7 = *((char **)t5);
    t5 = (t1 + 2072U);
    t8 = *((char **)t5);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t5, (char)118, t130, 64, (char)118, t6, 4, (char)118, t7, 8, (char)118, t8, 1);

LAB45:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t25 = (t1 + 1912U);
    t26 = *((char **)t25);
    t25 = (t1 + 3272);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    if (*((unsigned int *)t26) != *((unsigned int *)t28))
        goto LAB17;

LAB16:    t30 = (t26 + 4);
    t31 = (t28 + 4);
    if (*((unsigned int *)t30) != *((unsigned int *)t31))
        goto LAB17;

LAB18:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB17:    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB23:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t32);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB25;

LAB26:    *((unsigned int *)t68) = 1;
    goto LAB29;

LAB28:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB29;

LAB30:    t81 = (t1 + 2072U);
    t82 = *((char **)t81);
    t81 = (t1 + 3432);
    t83 = (t81 + 56U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    if (*((unsigned int *)t82) != *((unsigned int *)t84))
        goto LAB34;

LAB33:    t86 = (t82 + 4);
    t87 = (t84 + 4);
    if (*((unsigned int *)t86) != *((unsigned int *)t87))
        goto LAB34;

LAB35:    memset(t88, 0, 8);
    t89 = (t85 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t89) != 0)
        goto LAB38;

LAB39:    t97 = *((unsigned int *)t68);
    t98 = *((unsigned int *)t88);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = (t68 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB34:    *((unsigned int *)t85) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t88) = 1;
    goto LAB39;

LAB38:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB39;

LAB40:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t68 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t68);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t111);
    t117 = (~(t116));
    t118 = *((unsigned int *)t88);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t122 & t120);
    t123 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t123 & t121);
    goto LAB42;

LAB43:    xsi_set_current_line(39, ng0);

LAB46:    xsi_set_current_line(41, ng0);
    t131 = xsi_vlog_time(t130, 1000.0000000000000, 1000.0000000000000);
    t132 = (t1 + 2232U);
    t133 = *((char **)t132);
    t132 = (t1 + 1912U);
    t134 = *((char **)t132);
    t132 = (t1 + 2072U);
    t135 = *((char **)t132);
    t132 = (t1 + 3112);
    t136 = (t132 + 56U);
    t137 = *((char **)t136);
    t138 = (t1 + 3272);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    t141 = (t1 + 3432);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t144 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 8, t144, (char)118, t130, 64, (char)118, t133, 4, (char)118, t134, 8, (char)118, t135, 1, (char)118, t137, 4, (char)118, t140, 8, (char)118, t143, 1);
    xsi_set_current_line(45, ng0);
    t4 = (t1 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2952);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB45;

}

static int sp_step(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(65, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(67, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3752);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3912);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB8);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 848);
    t20 = xsi_create_subprogram_invocation(t18, 0, t1, t19, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t1 + 3112);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 4);
    t22 = (t1 + 3272);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 8);
    t23 = (t1 + 3432);
    xsi_vlogvar_assign_value(t23, t12, 0, 0, 1);

LAB10:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t1, t25);
    if (t32 == -1)
        goto LAB11;

LAB12:    if (t32 != 0)
        goto LAB13;

LAB8:    t25 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB9:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t33 = (t1 + 848);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t33, t34, t1, t36, t2);
    goto LAB4;

LAB11:    t0 = -1;
    goto LAB1;

LAB13:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB10;
    goto LAB1;

}

static void Always_28_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2632);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_72_1(char *t0)
{
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 5072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(80, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5408);
    *((int *)t2) = 1;
    t3 = (t0 + 5104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4880);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3112);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3272);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3432);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB9:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB11:    if (t19 != 0)
        goto LAB12;

LAB7:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB8:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5424);
    *((int *)t2) = 1;
    t3 = (t0 + 5104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB16:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB18:    if (t19 != 0)
        goto LAB19;

LAB14:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB15:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB22:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB24:    if (t19 != 0)
        goto LAB25;

LAB20:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB21:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB28:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB30:    if (t19 != 0)
        goto LAB31;

LAB26:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB27:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB34:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB36:    if (t19 != 0)
        goto LAB37;

LAB32:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB33:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB40:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB42:    if (t19 != 0)
        goto LAB43;

LAB38:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB39:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng16)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB46:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB48:    if (t19 != 0)
        goto LAB49;

LAB44:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB45:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4880);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3592);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB52:    t11 = (t0 + 4976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB54:    if (t19 != 0)
        goto LAB55;

LAB50:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB51:    t20 = (t0 + 4976);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t24, 0, 8);
    xsi_vlog_signed_equal(t24, 32, t4, 32, t5, 32);
    t6 = (t24 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(119, ng0);

LAB60:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)119, t4, 32);

LAB58:    xsi_set_current_line(125, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(127, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB17:;
LAB19:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB16;
    goto LAB1;

LAB23:;
LAB25:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB22;
    goto LAB1;

LAB29:;
LAB31:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB34;
    goto LAB1;

LAB41:;
LAB43:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB40;
    goto LAB1;

LAB47:;
LAB49:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB46;
    goto LAB1;

LAB53:;
LAB55:    t11 = (t0 + 5072U);
    *((char **)t11) = &&LAB52;
    goto LAB1;

LAB56:    xsi_set_current_line(114, ng0);

LAB59:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB58;

}


extern void work_m_12995432909989232253_3836416073_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Initial_72_1};
	static char *se[] = {(void *)sp_check,(void *)sp_step};
	xsi_register_didat("work_m_12995432909989232253_3836416073", "isim/tb_cpu_top_isim_beh.exe.sim/work/m_12995432909989232253_3836416073.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
