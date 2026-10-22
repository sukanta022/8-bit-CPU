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
static const char *ng0 = "/home/ise/CPU_8bit/tb_alu8.v";
static const char *ng1 = "FAIL: OP=%h ACC=%h IMM=%h RESULT=%h EXPECTED=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: OP=%h ACC=%h IMM=%h RESULT=%h";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static const char *ng6 = "========================================";
static const char *ng7 = "         8-BIT ALU TESTBENCH";
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {85U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {255U, 0U};
static unsigned int ng12[] = {170U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {2U, 0U};
static unsigned int ng16[] = {86U, 0U};
static unsigned int ng17[] = {129U, 0U};
static unsigned int ng18[] = {60U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {75U, 0U};
static unsigned int ng21[] = {128U, 0U};
static unsigned int ng22[] = {165U, 0U};
static unsigned int ng23[] = {3U, 0U};
static unsigned int ng24[] = {90U, 0U};
static const char *ng25 = "ALL 8-BIT ALU TESTS PASSED!";
static const char *ng26 = "FAILED: %0d test(s)";



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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t5 = (t1 + 2680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1880);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t4 = (t1 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2040);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(38, ng0);
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

LAB6:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 2360);
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

LAB11:    xsi_set_current_line(46, ng0);

LAB14:    xsi_set_current_line(47, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1880);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t1 + 2040);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 1480U);
    t20 = *((char **)t19);
    t19 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t19, (char)118, t6, 4, (char)118, t10, 8, (char)118, t18, 8, (char)118, t20, 8);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t17 = (t1 + 2200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 1880);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 2040);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 1480U);
    t27 = *((char **)t26);
    t26 = (t1 + 2360);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t30, (char)118, t19, 4, (char)118, t22, 8, (char)118, t25, 8, (char)118, t27, 8, (char)118, t29, 8);
    xsi_set_current_line(44, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2520);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB12;

}

static void Initial_54_0(char *t0)
{
    char t26[8];
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
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng9)));
    t5 = ((char*)((ng9)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB7:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB9:    if (t21 != 0)
        goto LAB10;

LAB5:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB6:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng12)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB13:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB15:    if (t21 != 0)
        goto LAB16;

LAB11:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB12:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng9)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB19:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB21:    if (t21 != 0)
        goto LAB22;

LAB17:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB18:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng12)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB25:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB27:    if (t21 != 0)
        goto LAB28;

LAB23:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB24:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng16)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB31:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB33:    if (t21 != 0)
        goto LAB34;

LAB29:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB30:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng17)));
    t5 = ((char*)((ng17)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB37:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB39:    if (t21 != 0)
        goto LAB40;

LAB35:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB36:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng17)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB43:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB45:    if (t21 != 0)
        goto LAB46;

LAB41:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB42:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng19)));
    t5 = ((char*)((ng20)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB49:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB51:    if (t21 != 0)
        goto LAB52;

LAB47:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB48:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB55:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB57:    if (t21 != 0)
        goto LAB58;

LAB53:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB54:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng21)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB61:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB63:    if (t21 != 0)
        goto LAB64;

LAB59:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB60:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng22)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng22)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB67:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB69:    if (t21 != 0)
        goto LAB70;

LAB65:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB66:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng23)));
    t3 = ((char*)((ng24)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng24)));
    t6 = (t0 + 3880);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB73:    t13 = (t0 + 3976);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB75:    if (t21 != 0)
        goto LAB76;

LAB71:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB72:    t22 = (t0 + 3976);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3880);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_signed_equal(t26, 32, t4, 32, t5, 32);
    t6 = (t26 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(86, ng0);

LAB81:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)119, t4, 32);

LAB79:    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(91, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t13 = (t0 + 4072U);
    *((char **)t13) = &&LAB73;
    goto LAB1;

LAB77:    xsi_set_current_line(83, ng0);

LAB80:    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    goto LAB79;

}


extern void work_m_15299794329437090798_2598546418_init()
{
	static char *pe[] = {(void *)Initial_54_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_15299794329437090798_2598546418", "isim/tb_alu8_isim_beh.exe.sim/work/m_15299794329437090798_2598546418.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
