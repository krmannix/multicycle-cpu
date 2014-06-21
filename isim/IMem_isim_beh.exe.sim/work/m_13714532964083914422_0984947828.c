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
static const char *ng0 = "/ad/eng/users/k/m/kmannix/EC 413/Project_Ver2/IMem.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3825205248U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3892314112U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {3827302410U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {3894411264U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {4160749569U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {3355443201U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {2281832445U, 0U};
static int ng15[] = {7, 0};
static int ng16[] = {8, 0};
static int ng17[] = {9, 0};
static unsigned int ng18[] = {134217732U, 0U};
static int ng19[] = {10, 0};
static unsigned int ng20[] = {4133486593U, 0U};
static int ng21[] = {11, 0};
static unsigned int ng22[] = {3396534273U, 0U};
static int ng23[] = {12, 0};
static int ng24[] = {13, 0};
static unsigned int ng25[] = {2279669756U, 0U};
static int ng26[] = {14, 0};
static unsigned int ng27[] = {0U, 0U};



static void Always_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2816);
    *((int *)t2) = 1;
    t3 = (t0 + 2528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(241, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1584);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB39;

LAB9:    xsi_set_current_line(243, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB11:    xsi_set_current_line(245, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB13:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB15:    xsi_set_current_line(262, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB17:    xsi_set_current_line(264, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB19:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB21:    xsi_set_current_line(275, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB23:    xsi_set_current_line(277, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB25:    xsi_set_current_line(280, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB27:    xsi_set_current_line(282, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB29:    xsi_set_current_line(285, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB31:    xsi_set_current_line(287, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(289, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(291, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB39;

}


extern void work_m_13714532964083914422_0984947828_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_13714532964083914422_0984947828", "isim/IMem_isim_beh.exe.sim/work/m_13714532964083914422_0984947828.didat");
	xsi_register_executes(pe);
}
