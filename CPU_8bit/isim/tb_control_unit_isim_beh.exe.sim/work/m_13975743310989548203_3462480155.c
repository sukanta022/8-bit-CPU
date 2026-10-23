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
static const char *ng0 = "/home/ise/CPU_8bit/tb_control_unit.v";
static const char *ng1 = "FAIL: OPCODE=%h LOAD=%b EXPECTED=%b";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS: OPCODE=%h LOAD=%b";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static const char *ng6 = "========================================";
static const char *ng7 = "        CONTROL UNIT TESTBENCH";
static int ng8[] = {16, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {2, 0};
static int ng11[] = {6, 0};
static int ng12[] = {7, 0};
static int ng13[] = {8, 0};
static const char *ng14 = "ALL CONTROL UNIT TESTS PASSED!";
static const char *ng15 = "FAILED: %0d test(s)";



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
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
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

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t7, (char)118, t6, 4, (char)118, t8, 1);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t17 = (t1 + 1880);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 1480U);
    t21 = *((char **)t20);
    t20 = (t1 + 2040);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t24, (char)118, t19, 4, (char)118, t21, 1, (char)118, t23, 1);
    xsi_set_current_line(38, ng0);
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

static void Initial_51_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(85, ng0);

LAB41:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)119, t4, 32);

LAB39:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(93, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(62, ng0);

LAB8:    xsi_set_current_line(64, ng0);
    t13 = (t0 + 2360);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);

LAB9:    t16 = ((char*)((ng2)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t16, 32);
    if (t17 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t35 = xsi_vlog_signed_case_compare(t15, 32, t3, 32);
    if (t35 == 1)
        goto LAB14;

LAB15:    t4 = ((char*)((ng12)));
    t40 = xsi_vlog_signed_case_compare(t15, 32, t4, 32);
    if (t40 == 1)
        goto LAB16;

LAB17:    t5 = ((char*)((ng13)));
    t41 = xsi_vlog_signed_case_compare(t15, 32, t5, 32);
    if (t41 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(70, ng0);

LAB30:    xsi_set_current_line(71, ng0);
    t7 = (t0 + 2360);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng4)));
    t18 = (t0 + 3400);
    t19 = (t0 + 848);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t0 + 2520);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 4);
    t22 = (t0 + 2680);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);

LAB33:    t23 = (t0 + 3496);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t42 = ((int  (*)(char *, char *))t30)(t0, t24);

LAB35:    if (t42 != 0)
        goto LAB36;

LAB31:    t24 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t24);

LAB32:    t31 = (t0 + 3496);
    t32 = *((char **)t31);
    t31 = (t0 + 848);
    t33 = (t0 + 3400);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);

LAB22:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB10:    xsi_set_current_line(66, ng0);

LAB23:    xsi_set_current_line(67, ng0);
    t18 = (t0 + 2360);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 3400);
    t23 = (t0 + 848);
    t24 = xsi_create_subprogram_invocation(t22, 0, t0, t23, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t23, t24);
    t25 = (t0 + 2520);
    xsi_vlogvar_assign_value(t25, t20, 0, 0, 4);
    t26 = (t0 + 2680);
    xsi_vlogvar_assign_value(t26, t21, 0, 0, 1);

LAB26:    t27 = (t0 + 3496);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t35 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB28:    if (t35 != 0)
        goto LAB29;

LAB24:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB25:    t36 = (t0 + 3496);
    t37 = *((char **)t36);
    t36 = (t0 + 848);
    t38 = (t0 + 3400);
    t39 = 0;
    xsi_delete_subprogram_invocation(t36, t37, t0, t38, t39);
    goto LAB22;

LAB12:    goto LAB10;

LAB14:    goto LAB10;

LAB16:    goto LAB10;

LAB18:    goto LAB10;

LAB27:;
LAB29:    t27 = (t0 + 3592U);
    *((char **)t27) = &&LAB26;
    goto LAB1;

LAB34:;
LAB36:    t23 = (t0 + 3592U);
    *((char **)t23) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(80, ng0);

LAB40:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB39;

}


extern void work_m_13975743310989548203_3462480155_init()
{
	static char *pe[] = {(void *)Initial_51_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_13975743310989548203_3462480155", "isim/tb_control_unit_isim_beh.exe.sim/work/m_13975743310989548203_3462480155.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
