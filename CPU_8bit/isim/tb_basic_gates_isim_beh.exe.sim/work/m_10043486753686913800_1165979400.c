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
static const char *ng0 = "/home/ise/CPU_8bit/tb_basic_gates.v";
static const char *ng1 = "FAIL: A=%b B=%b";
static const char *ng2 = "PASS: A=%b B=%b AND=%b OR=%b XOR=%b NOT=%b";
static const char *ng3 = "Basic Gates Testbench";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "All Basic Gate Tests Passed!";



static int sp_check(char *t1, char *t2)
{
    char t11[8];
    char t43[8];
    char t46[8];
    char t66[8];
    char t94[8];
    char t97[8];
    char t105[8];
    char t133[8];
    char t153[8];
    char t167[8];
    char t170[8];
    char t178[8];
    char t206[8];
    char t221[8];
    char t241[8];
    char t244[8];
    char t252[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
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
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    char *t96;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t242;
    char *t243;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    char *t288;
    char *t289;
    char *t290;
    char *t291;
    char *t292;

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
    t5 = (t1 + 2680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2360);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2520);
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
    t4 = (t1 + 2360);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t10);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t15 = (t7 + 4);
    t16 = (t10 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB7;

LAB8:
LAB9:    memset(t43, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t11))
        goto LAB11;

LAB10:    t44 = (t5 + 4);
    t45 = (t11 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB11;

LAB12:    memset(t46, 0, 8);
    t47 = (t43 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t47) != 0)
        goto LAB15;

LAB16:    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = (!(t55));
    t57 = *((unsigned int *)t54);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB17;

LAB18:    memcpy(t105, t46, 8);

LAB19:    memset(t133, 0, 8);
    t134 = (t105 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t105);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t134) != 0)
        goto LAB35;

LAB36:    t141 = (t133 + 4);
    t142 = *((unsigned int *)t133);
    t143 = (!(t142));
    t144 = *((unsigned int *)t141);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB37;

LAB38:    memcpy(t178, t133, 8);

LAB39:    memset(t206, 0, 8);
    t207 = (t178 + 4);
    t208 = *((unsigned int *)t207);
    t209 = (~(t208));
    t210 = *((unsigned int *)t178);
    t211 = (t210 & t209);
    t212 = (t211 & 1U);
    if (t212 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t207) != 0)
        goto LAB55;

LAB56:    t214 = (t206 + 4);
    t215 = *((unsigned int *)t206);
    t216 = (!(t215));
    t217 = *((unsigned int *)t214);
    t218 = (t216 || t217);
    if (t218 > 0)
        goto LAB57;

LAB58:    memcpy(t252, t206, 8);

LAB59:    t280 = (t252 + 4);
    t281 = *((unsigned int *)t280);
    t282 = (~(t281));
    t283 = *((unsigned int *)t252);
    t284 = (t283 & t282);
    t285 = (t284 != 0);
    if (t285 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(42, ng0);

LAB80:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2520);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1480U);
    t15 = *((char **)t10);
    t10 = (t1 + 1640U);
    t16 = *((char **)t10);
    t10 = (t1 + 1800U);
    t17 = *((char **)t10);
    t10 = (t1 + 1960U);
    t25 = *((char **)t10);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 7, t10, (char)118, t6, 1, (char)118, t9, 1, (char)118, t15, 1, (char)118, t16, 1, (char)118, t17, 1, (char)118, t25, 1);

LAB78:    goto LAB4;

LAB7:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t23 | t24);
    t25 = (t7 + 4);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & t38);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t38);
    goto LAB9;

LAB11:    *((unsigned int *)t43) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t46) = 1;
    goto LAB16;

LAB15:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB16;

LAB17:    t59 = (t1 + 1640U);
    t60 = *((char **)t59);
    t59 = (t1 + 2360);
    t61 = (t59 + 56U);
    t62 = *((char **)t61);
    t63 = (t1 + 2520);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t62 + 4);
    t71 = (t65 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB20;

LAB21:
LAB22:    memset(t94, 0, 8);
    if (*((unsigned int *)t60) != *((unsigned int *)t66))
        goto LAB24;

LAB23:    t95 = (t60 + 4);
    t96 = (t66 + 4);
    if (*((unsigned int *)t95) != *((unsigned int *)t96))
        goto LAB24;

LAB25:    memset(t97, 0, 8);
    t98 = (t94 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t98) != 0)
        goto LAB28;

LAB29:    t106 = *((unsigned int *)t46);
    t107 = *((unsigned int *)t97);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = (t46 + 4);
    t110 = (t97 + 4);
    t111 = (t105 + 4);
    t112 = *((unsigned int *)t109);
    t113 = *((unsigned int *)t110);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 != 0);
    if (t116 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB19;

LAB20:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t62 + 4);
    t81 = (t65 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t62);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t65);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB22;

LAB24:    *((unsigned int *)t94) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t97) = 1;
    goto LAB29;

LAB28:    t104 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB29;

LAB30:    t117 = *((unsigned int *)t105);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t105) = (t117 | t118);
    t119 = (t46 + 4);
    t120 = (t97 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (~(t121));
    t123 = *((unsigned int *)t46);
    t124 = (t123 & t122);
    t125 = *((unsigned int *)t120);
    t126 = (~(t125));
    t127 = *((unsigned int *)t97);
    t128 = (t127 & t126);
    t129 = (~(t124));
    t130 = (~(t128));
    t131 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t131 & t129);
    t132 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t132 & t130);
    goto LAB32;

LAB33:    *((unsigned int *)t133) = 1;
    goto LAB36;

LAB35:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB36;

LAB37:    t146 = (t1 + 1800U);
    t147 = *((char **)t146);
    t146 = (t1 + 2360);
    t148 = (t146 + 56U);
    t149 = *((char **)t148);
    t150 = (t1 + 2520);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    t154 = *((unsigned int *)t149);
    t155 = *((unsigned int *)t152);
    t156 = (t154 ^ t155);
    *((unsigned int *)t153) = t156;
    t157 = (t149 + 4);
    t158 = (t152 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB40;

LAB41:
LAB42:    memset(t167, 0, 8);
    if (*((unsigned int *)t147) != *((unsigned int *)t153))
        goto LAB44;

LAB43:    t168 = (t147 + 4);
    t169 = (t153 + 4);
    if (*((unsigned int *)t168) != *((unsigned int *)t169))
        goto LAB44;

LAB45:    memset(t170, 0, 8);
    t171 = (t167 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t167);
    t175 = (t174 & t173);
    t176 = (t175 & 1U);
    if (t176 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t171) != 0)
        goto LAB48;

LAB49:    t179 = *((unsigned int *)t133);
    t180 = *((unsigned int *)t170);
    t181 = (t179 | t180);
    *((unsigned int *)t178) = t181;
    t182 = (t133 + 4);
    t183 = (t170 + 4);
    t184 = (t178 + 4);
    t185 = *((unsigned int *)t182);
    t186 = *((unsigned int *)t183);
    t187 = (t185 | t186);
    *((unsigned int *)t184) = t187;
    t188 = *((unsigned int *)t184);
    t189 = (t188 != 0);
    if (t189 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB39;

LAB40:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    goto LAB42;

LAB44:    *((unsigned int *)t167) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t170) = 1;
    goto LAB49;

LAB48:    t177 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB49;

LAB50:    t190 = *((unsigned int *)t178);
    t191 = *((unsigned int *)t184);
    *((unsigned int *)t178) = (t190 | t191);
    t192 = (t133 + 4);
    t193 = (t170 + 4);
    t194 = *((unsigned int *)t192);
    t195 = (~(t194));
    t196 = *((unsigned int *)t133);
    t197 = (t196 & t195);
    t198 = *((unsigned int *)t193);
    t199 = (~(t198));
    t200 = *((unsigned int *)t170);
    t201 = (t200 & t199);
    t202 = (~(t197));
    t203 = (~(t201));
    t204 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t204 & t202);
    t205 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t205 & t203);
    goto LAB52;

LAB53:    *((unsigned int *)t206) = 1;
    goto LAB56;

LAB55:    t213 = (t206 + 4);
    *((unsigned int *)t206) = 1;
    *((unsigned int *)t213) = 1;
    goto LAB56;

LAB57:    t219 = (t1 + 1960U);
    t220 = *((char **)t219);
    t219 = (t1 + 2360);
    t222 = (t219 + 56U);
    t223 = *((char **)t222);
    memset(t221, 0, 8);
    t224 = (t223 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t223);
    t228 = (t227 & t226);
    t229 = (t228 & 1U);
    if (t229 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t224) == 0)
        goto LAB60;

LAB62:    t230 = (t221 + 4);
    *((unsigned int *)t221) = 1;
    *((unsigned int *)t230) = 1;

LAB63:    t231 = (t221 + 4);
    t232 = (t223 + 4);
    t233 = *((unsigned int *)t223);
    t234 = (~(t233));
    *((unsigned int *)t221) = t234;
    *((unsigned int *)t231) = 0;
    if (*((unsigned int *)t232) != 0)
        goto LAB65;

LAB64:    t239 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t239 & 1U);
    t240 = *((unsigned int *)t231);
    *((unsigned int *)t231) = (t240 & 1U);
    memset(t241, 0, 8);
    if (*((unsigned int *)t220) != *((unsigned int *)t221))
        goto LAB67;

LAB66:    t242 = (t220 + 4);
    t243 = (t221 + 4);
    if (*((unsigned int *)t242) != *((unsigned int *)t243))
        goto LAB67;

LAB68:    memset(t244, 0, 8);
    t245 = (t241 + 4);
    t246 = *((unsigned int *)t245);
    t247 = (~(t246));
    t248 = *((unsigned int *)t241);
    t249 = (t248 & t247);
    t250 = (t249 & 1U);
    if (t250 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t245) != 0)
        goto LAB71;

LAB72:    t253 = *((unsigned int *)t206);
    t254 = *((unsigned int *)t244);
    t255 = (t253 | t254);
    *((unsigned int *)t252) = t255;
    t256 = (t206 + 4);
    t257 = (t244 + 4);
    t258 = (t252 + 4);
    t259 = *((unsigned int *)t256);
    t260 = *((unsigned int *)t257);
    t261 = (t259 | t260);
    *((unsigned int *)t258) = t261;
    t262 = *((unsigned int *)t258);
    t263 = (t262 != 0);
    if (t263 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB59;

LAB60:    *((unsigned int *)t221) = 1;
    goto LAB63;

LAB65:    t235 = *((unsigned int *)t221);
    t236 = *((unsigned int *)t232);
    *((unsigned int *)t221) = (t235 | t236);
    t237 = *((unsigned int *)t231);
    t238 = *((unsigned int *)t232);
    *((unsigned int *)t231) = (t237 | t238);
    goto LAB64;

LAB67:    *((unsigned int *)t241) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t244) = 1;
    goto LAB72;

LAB71:    t251 = (t244 + 4);
    *((unsigned int *)t244) = 1;
    *((unsigned int *)t251) = 1;
    goto LAB72;

LAB73:    t264 = *((unsigned int *)t252);
    t265 = *((unsigned int *)t258);
    *((unsigned int *)t252) = (t264 | t265);
    t266 = (t206 + 4);
    t267 = (t244 + 4);
    t268 = *((unsigned int *)t266);
    t269 = (~(t268));
    t270 = *((unsigned int *)t206);
    t271 = (t270 & t269);
    t272 = *((unsigned int *)t267);
    t273 = (~(t272));
    t274 = *((unsigned int *)t244);
    t275 = (t274 & t273);
    t276 = (~(t271));
    t277 = (~(t275));
    t278 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t278 & t276);
    t279 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t279 & t277);
    goto LAB75;

LAB76:    xsi_set_current_line(38, ng0);

LAB79:    xsi_set_current_line(39, ng0);
    t286 = (t1 + 2360);
    t287 = (t286 + 56U);
    t288 = *((char **)t287);
    t289 = (t1 + 2520);
    t290 = (t289 + 56U);
    t291 = *((char **)t290);
    t292 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t292, (char)118, t288, 1, (char)118, t291, 1);
    xsi_set_current_line(40, ng0);
    xsi_vlog_finish(1);
    goto LAB78;

}

static void Initial_52_0(char *t0)
{
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

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3560);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB7:    t9 = (t0 + 3656);
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

LAB6:    t18 = (t0 + 3656);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3560);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3560);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB13:    t9 = (t0 + 3656);
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

LAB12:    t18 = (t0 + 3656);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3560);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3560);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB19:    t9 = (t0 + 3656);
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

LAB18:    t18 = (t0 + 3656);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3560);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3560);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB25:    t9 = (t0 + 3656);
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

LAB24:    t18 = (t0 + 3656);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3560);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 3752U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 3752U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 3752U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 3752U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

}


extern void work_m_10043486753686913800_1165979400_init()
{
	static char *pe[] = {(void *)Initial_52_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_10043486753686913800_1165979400", "isim/tb_basic_gates_isim_beh.exe.sim/work/m_10043486753686913800_1165979400.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
