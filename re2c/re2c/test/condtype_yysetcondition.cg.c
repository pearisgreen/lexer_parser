/* Generated by re2c */
#line 1 "condtype_yysetcondition.cg.re"
#include <stdio.h>

// changing this to '#if 1' changes program behaviour
#if 0
#    define yyca 1
#    define yycb 0
#else
#    define yyca 0
#    define yycb 1
#endif

int main ()
{
	int cond = yyca;
	char * YYCURSOR = "aaaaaaaabb";
#define YYSETCONDITION(c) cond = c
#define YYGETCONDITION() cond
	for (;;)
	{

#line 24 "condtype_yysetcondition.cg.c"
{
	unsigned char yych;
	static void *yyctable[2] = {
		&&yyc_b,
		&&yyc_a,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_b:
	yych = *YYCURSOR++;
#line 24 "condtype_yysetcondition.cg.re"
	{ printf ("b\n"); break; }
#line 37 "condtype_yysetcondition.cg.c"
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy9;
	++YYCURSOR;
	YYSETCONDITION(yycb);
#line 27 "condtype_yysetcondition.cg.re"
	{ printf ("a => b\n"); continue; }
#line 46 "condtype_yysetcondition.cg.c"
yy9:
	++YYCURSOR;
#line 26 "condtype_yysetcondition.cg.re"
	{ printf ("a\n");      continue; }
#line 51 "condtype_yysetcondition.cg.c"
}
#line 28 "condtype_yysetcondition.cg.re"

	}
	return 0;
}
re2c: warning: line 28: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
