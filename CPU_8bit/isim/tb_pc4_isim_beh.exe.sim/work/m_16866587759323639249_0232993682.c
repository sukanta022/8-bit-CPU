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
static const char *ng0 = "/home/ise/CPU_8bit/tb_pc4.v";
static const char *ng1 = "FAIL: TIME=%0t PC=%h EXPECTED=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: TIME=%0t PC=%h";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {0, 0};
static const char *ng7 = "========================================";
static const char *ng8 = "       4-BIT PC TESTBENCH";
static int ng9[] = {16, 0};
static const char *ng10 = "ALL 4-BIT PC TESTS PASSED!";
static const char *ng11 = "FAILED: %0d test(s)";



static int sp_check_pc(char *t1, char *t2)
{
    char t9[8];
    char t18[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 2520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB7;

LAB8:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t5, (char)118, t18, 64, (char)118, t6, 4);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(31, ng0);

LAB12:    xsi_set_current_line(32, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 1480U);
    t21 = *((char **)t20);
    t20 = (t1 + 2520);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t24, (char)118, t18, 64, (char)118, t21, 4, (char)118, t23, 4);
    xsi_set_current_line(35, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB11;

}

static void Always_24_0(char *t0)
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

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1880);
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
    t24 = (t0 + 1880);
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

static void Initial_45_1(char *t0)
{
    char t20[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB9:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB11:    if (t15 != 0)
        goto LAB12;

LAB7:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB8:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4016);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t20, 0, 8);
    xsi_vlog_signed_leq(t20, 32, t4, 32, t5, 32);
    t6 = (t20 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB15:    xsi_set_current_line(65, ng0);

LAB17:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 4032);
    *((int *)t7) = 1;
    t8 = (t0 + 3712);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t20, 0, 8);
    xsi_vlog_signed_mod(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 3488);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t20, 0, 0, 4);

LAB22:    t10 = (t0 + 3584);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t16 = *((char **)t14);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t15 = ((int  (*)(char *, char *))t18)(t0, t11);

LAB24:    if (t15 != 0)
        goto LAB25;

LAB20:    t11 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t11);

LAB21:    t19 = (t0 + 3584);
    t26 = *((char **)t19);
    t19 = (t0 + 848);
    t27 = (t0 + 3488);
    t28 = 0;
    xsi_delete_subprogram_invocation(t19, t26, t0, t27, t28);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB14;

LAB23:;
LAB25:    t10 = (t0 + 3680U);
    *((char **)t10) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB30:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB32:    if (t15 != 0)
        goto LAB33;

LAB28:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB29:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4064);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB31:;
LAB33:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB30;
    goto LAB1;

LAB34:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB38:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB40:    if (t15 != 0)
        goto LAB41;

LAB36:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB37:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB39:;
LAB41:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB38;
    goto LAB1;

LAB42:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB47:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB49:    if (t15 != 0)
        goto LAB50;

LAB45:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB46:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4112);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:;
LAB50:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB55:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB57:    if (t15 != 0)
        goto LAB58;

LAB53:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB54:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB56:;
LAB58:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB55;
    goto LAB1;

LAB59:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3488);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB63:    t7 = (t0 + 3584);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB65:    if (t15 != 0)
        goto LAB66;

LAB61:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB62:    t16 = (t0 + 3584);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3488);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(105, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t4, 32, t5, 32);
    t6 = (t20 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(110, ng0);

LAB71:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)119, t4, 32);

LAB69:    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(116, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB64:;
LAB66:    t7 = (t0 + 3680U);
    *((char **)t7) = &&LAB63;
    goto LAB1;

LAB67:    xsi_set_current_line(107, ng0);

LAB70:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB69;

}


extern void work_m_16866587759323639249_0232993682_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Initial_45_1};
	static char *se[] = {(void *)sp_check_pc};
	xsi_register_didat("work_m_16866587759323639249_0232993682", "isim/tb_pc4_isim_beh.exe.sim/work/m_16866587759323639249_0232993682.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
