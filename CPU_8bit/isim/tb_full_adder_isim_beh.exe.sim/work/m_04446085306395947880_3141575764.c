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
static const char *ng0 = "/home/ise/CPU_8bit/tb_full_adder.v";
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "FAIL: a=%b b=%b cin=%b sum=%b cout=%b";
static int ng3[] = {1, 0};
static const char *ng4 = "PASS: a=%b b=%b cin=%b sum=%b cout=%b";
static int ng5[] = {0, 0};
static const char *ng6 = "=== Full Adder Testbench ===";
static unsigned int ng7[] = {1U, 0U};
static const char *ng8 = "ALL FULL ADDER TESTS PASSED!";
static const char *ng9 = "FAILED: %0d test(s)";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t10[8];
    char t14[8];
    char t15[8];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

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
    t5 = (t1 + 2840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2040);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t4 = (t1 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(35, ng0);
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

LAB6:    xsi_set_current_line(37, ng0);
    t4 = (t1 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 2, 2, 2U, t7, 1, t6, 1);
    t8 = (t1 + 2200);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 2, 2, 2U, t13, 1, t12, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 2, t9, 2, t10, 2);
    t16 = (t1 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t15, 2, 2, 2U, t19, 1, t18, 1);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 2, t14, 2, t15, 2);
    t21 = (t1 + 2680);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 2);
    xsi_set_current_line(41, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 1640U);
    t6 = *((char **)t4);
    xsi_vlogtype_concat(t9, 2, 2, 2U, t6, 1, t5, 1);
    t4 = (t1 + 2680);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t8))
        goto LAB8;

LAB7:    t11 = (t9 + 4);
    t12 = (t8 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB8;

LAB9:    t13 = (t10 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t10);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);

LAB14:    xsi_set_current_line(50, ng0);
    t4 = (t1 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2200);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t1 + 2360);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    t17 = (t1 + 1480U);
    t18 = *((char **)t17);
    t17 = (t1 + 1640U);
    t19 = *((char **)t17);
    t17 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t17, (char)118, t6, 1, (char)118, t11, 1, (char)118, t16, 1, (char)118, t18, 1, (char)118, t19, 1);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t16 = (t1 + 2040);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 2200);
    t21 = (t19 + 56U);
    t27 = *((char **)t21);
    t28 = (t1 + 2360);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 1480U);
    t32 = *((char **)t31);
    t31 = (t1 + 1640U);
    t33 = *((char **)t31);
    t31 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t31, (char)118, t18, 1, (char)118, t27, 1, (char)118, t30, 1, (char)118, t32, 1, (char)118, t33, 1);
    xsi_set_current_line(47, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2520);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB12;

}

static void Initial_59_0(char *t0)
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

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng1)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB7:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB9:    if (t19 != 0)
        goto LAB10;

LAB5:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB6:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng1)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB13:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB15:    if (t19 != 0)
        goto LAB16;

LAB11:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB12:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB19:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB21:    if (t19 != 0)
        goto LAB22;

LAB17:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB18:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB25:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB27:    if (t19 != 0)
        goto LAB28;

LAB23:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB24:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng1)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB31:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB33:    if (t19 != 0)
        goto LAB34;

LAB29:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB30:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng1)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB37:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB39:    if (t19 != 0)
        goto LAB40;

LAB35:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB36:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB43:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB45:    if (t19 != 0)
        goto LAB46;

LAB41:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB42:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3880);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);

LAB49:    t11 = (t0 + 3976);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB51:    if (t19 != 0)
        goto LAB52;

LAB47:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB48:    t20 = (t0 + 3976);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3880);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t24, 0, 8);
    xsi_vlog_signed_equal(t24, 32, t4, 32, t5, 32);
    t6 = (t24 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(78, ng0);

LAB57:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t4, 32);

LAB55:    xsi_set_current_line(82, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t11 = (t0 + 4072U);
    *((char **)t11) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(75, ng0);

LAB56:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB55;

}


extern void work_m_04446085306395947880_3141575764_init()
{
	static char *pe[] = {(void *)Initial_59_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_04446085306395947880_3141575764", "isim/tb_full_adder_isim_beh.exe.sim/work/m_04446085306395947880_3141575764.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
