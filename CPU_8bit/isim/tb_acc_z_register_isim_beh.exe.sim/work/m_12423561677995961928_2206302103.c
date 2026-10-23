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
static const char *ng0 = "/home/ise/CPU_8bit/tb_acc_z_register.v";
static const char *ng1 = "FAIL: TIME=%0t ACC=%h Z=%b EXPECTED_ACC=%h EXPECTED_Z=%b";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: TIME=%0t ACC=%h Z=%b";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {255U, 0U};
static int ng7[] = {0, 0};
static const char *ng8 = "========================================";
static const char *ng9 = "      ACC AND Z REGISTER TESTBENCH";
static unsigned int ng10[] = {85U, 0U};
static unsigned int ng11[] = {170U, 0U};
static unsigned int ng12[] = {119U, 0U};
static unsigned int ng13[] = {2U, 0U};
static const char *ng14 = "ALL ACC AND Z REGISTER TESTS PASSED!";
static const char *ng15 = "FAILED: %0d test(s)";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t12[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t74[16];
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
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

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
    t5 = (t1 + 1912U);
    t6 = *((char **)t5);
    t5 = (t1 + 3272);
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

LAB15:    t68 = (t40 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t40);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(42, ng0);

LAB30:    xsi_set_current_line(43, ng0);
    t4 = xsi_vlog_time(t74, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1912U);
    t6 = *((char **)t5);
    t5 = (t1 + 2072U);
    t7 = *((char **)t5);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t5, (char)118, t74, 64, (char)118, t6, 8, (char)118, t7, 1);

LAB28:
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

LAB13:    t25 = (t1 + 2072U);
    t26 = *((char **)t25);
    t25 = (t1 + 3432);
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

LAB26:    xsi_set_current_line(37, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t75 = xsi_vlog_time(t74, 1000.0000000000000, 1000.0000000000000);
    t76 = (t1 + 1912U);
    t77 = *((char **)t76);
    t76 = (t1 + 2072U);
    t78 = *((char **)t76);
    t76 = (t1 + 3272);
    t79 = (t76 + 56U);
    t80 = *((char **)t79);
    t81 = (t1 + 3432);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t84, (char)118, t74, 64, (char)118, t77, 8, (char)118, t78, 1, (char)118, t80, 8, (char)118, t83, 1);
    xsi_set_current_line(40, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3112);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB28;

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
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
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

LAB6:    xsi_set_current_line(59, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2632);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t4 = (t1 + 3752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2792);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 3912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2952);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(64, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(65, ng0);
    t4 = (t1 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4232);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB9);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 848);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 3272);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    t19 = (t1 + 3432);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 1);

LAB11:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t1, t21);
    if (t28 == -1)
        goto LAB12;

LAB13:    if (t28 != 0)
        goto LAB14;

LAB9:    t21 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t21);

LAB10:    t29 = (t2 + 64U);
    t30 = *((char **)t29);
    t29 = (t1 + 848);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(t29, t30, t1, t32, t2);
    goto LAB4;

LAB12:    t0 = -1;
    goto LAB1;

LAB14:    t20 = (t2 + 48U);
    *((char **)t20) = &&LAB11;
    goto LAB1;

}

static void Always_29_0(char *t0)
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

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 2472);
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
    t24 = (t0 + 2472);
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

static void Initial_70_1(char *t0)
{
    char t28[8];
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
    int t17;
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
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);

LAB4:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    t3 = (t0 + 5424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5200);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5200);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3272);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3432);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB9:    t9 = (t0 + 5296);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 5296);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5200);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng10)));
    t5 = ((char*)((ng10)));
    t6 = ((char*)((ng4)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB15:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB17:    if (t17 != 0)
        goto LAB18;

LAB13:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB14:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng10)));
    t6 = ((char*)((ng4)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB21:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB23:    if (t17 != 0)
        goto LAB24;

LAB19:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB20:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB27:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB29:    if (t17 != 0)
        goto LAB30;

LAB25:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB26:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB33:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB32:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng11)));
    t6 = ((char*)((ng4)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB39:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB38:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 5424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 5392U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5200);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5200);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3272);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3432);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB47:    t9 = (t0 + 5296);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB49:    if (t17 != 0)
        goto LAB50;

LAB45:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB46:    t18 = (t0 + 5296);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5200);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 5424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:;
LAB50:    t9 = (t0 + 5392U);
    *((char **)t9) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5200);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5200);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3272);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3432);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB55:    t9 = (t0 + 5296);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB57:    if (t17 != 0)
        goto LAB58;

LAB53:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB54:    t18 = (t0 + 5296);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5200);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng12)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB61:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB63:    if (t17 != 0)
        goto LAB64;

LAB59:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB60:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng13)));
    t5 = ((char*)((ng13)));
    t6 = ((char*)((ng4)));
    t7 = (t0 + 5200);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 4232);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);

LAB67:    t15 = (t0 + 5296);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB69:    if (t17 != 0)
        goto LAB70;

LAB65:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB66:    t24 = (t0 + 5296);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 5200);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(121, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(126, ng0);

LAB75:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)119, t4, 32);

LAB73:    xsi_set_current_line(130, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(131, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB56:;
LAB58:    t9 = (t0 + 5392U);
    *((char **)t9) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t15 = (t0 + 5392U);
    *((char **)t15) = &&LAB67;
    goto LAB1;

LAB71:    xsi_set_current_line(123, ng0);

LAB74:    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB73;

}


extern void work_m_12423561677995961928_2206302103_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Initial_70_1};
	static char *se[] = {(void *)sp_check,(void *)sp_step};
	xsi_register_didat("work_m_12423561677995961928_2206302103", "isim/tb_acc_z_register_isim_beh.exe.sim/work/m_12423561677995961928_2206302103.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
