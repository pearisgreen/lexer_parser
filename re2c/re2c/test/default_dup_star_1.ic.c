/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	case yycc2: goto yyc_c2;
	case yycc3: goto yyc_c3;
	}
/* *********************************** */
yyc_c1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	{ return DEFAULT-1; }
/* *********************************** */
yyc_c2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	{ return DEFAULT-2; }
/* *********************************** */
yyc_c3:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	{ return DEFAULT-*; }
}

re2c: warning: line 4: rule in condition 'c3' matches empty string [-Wmatch-empty-string]
re2c: warning: line 4: unreachable rule in condition 'c3' (shadowed by rule at line 5) [-Wunreachable-rules]
