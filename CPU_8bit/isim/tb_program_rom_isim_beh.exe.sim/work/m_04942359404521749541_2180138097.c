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
static const char *ng0 = "/home/ise/CPU_8bit/tb_program_rom.v";
static const char *ng1 = "FAIL: ADDR=%h INSTR=%h EXPECTED=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: ADDR=%h INSTR=%h";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static const char *ng6 = "========================================";
static const char *ng7 = "         PROGRAM ROM TESTBENCH";
static unsigned int ng8[] = {341U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {1791U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {1792U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {2048U, 0U};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {598U, 0U};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {1665U, 0U};
static unsigned int ng19[] = {6U, 0U};
static int ng20[] = {7, 0};
static int ng21[] = {16, 0};
static const char *ng22 = "ALL PROGRAM ROM TESTS PASSED!";
static const char *ng23 = "FAILED: %0d test(s)";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
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
    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t1 + 2520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1880);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2040);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 12);
    xsi_set_current_line(31, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 2040);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t10))
        goto LAB8;

LAB9:    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t7, (char)118, t6, 4, (char)118, t8, 12);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t17 = (t1 + 1880);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 1480U);
    t21 = *((char **)t20);
    t20 = (t1 + 2040);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t24, (char)118, t19, 4, (char)118, t21, 12, (char)118, t23, 12);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB12;

}

static void Initial_47_0(char *t0)
{
    char t22[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB7:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB13:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB15:    if (t17 != 0)
        goto LAB16;

LAB11:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB12:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB19:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB21:    if (t17 != 0)
        goto LAB22;

LAB17:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB18:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng14)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB25:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB27:    if (t17 != 0)
        goto LAB28;

LAB23:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB24:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB31:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB33:    if (t17 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB37:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB39:    if (t17 != 0)
        goto LAB40;

LAB35:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB36:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng14)));
    t4 = (t0 + 3400);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB43:    t9 = (t0 + 3496);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB45:    if (t17 != 0)
        goto LAB46;

LAB41:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB42:    t18 = (t0 + 3496);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3400);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB47:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)119, t4, 32);

LAB59:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(81, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t9 = (t0 + 3592U);
    *((char **)t9) = &&LAB43;
    goto LAB1;

LAB48:    xsi_set_current_line(66, ng0);

LAB50:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 2360);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 3400);
    t12 = (t0 + 848);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 2520);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 4);
    t15 = (t0 + 2680);
    xsi_vlogvar_assign_value(t15, t10, 0, 0, 12);

LAB53:    t16 = (t0 + 3496);
    t18 = *((char **)t16);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t28 = *((char **)t21);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t17 = ((int  (*)(char *, char *))t30)(t0, t18);

LAB55:    if (t17 != 0)
        goto LAB56;

LAB51:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB52:    t31 = (t0 + 3496);
    t32 = *((char **)t31);
    t31 = (t0 + 848);
    t33 = (t0 + 3400);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB47;

LAB54:;
LAB56:    t16 = (t0 + 3592U);
    *((char **)t16) = &&LAB53;
    goto LAB1;

LAB57:    xsi_set_current_line(72, ng0);

LAB60:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    goto LAB59;

}


extern void work_m_04942359404521749541_2180138097_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_04942359404521749541_2180138097", "isim/tb_program_rom_isim_beh.exe.sim/work/m_04942359404521749541_2180138097.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
