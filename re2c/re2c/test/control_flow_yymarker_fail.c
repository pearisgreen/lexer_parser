/* Generated by re2c */
#line 1 "control_flow_yymarker_fail.re"

#line 5 "control_flow_yymarker_fail.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR++;
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy6;
yy4:
#line 4 "control_flow_yymarker_fail.re"
	{ action2 }
#line 21 "control_flow_yymarker_fail.c"
yy5:
	yych = *++YYCURSOR;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy4;
yy8:
	++YYCURSOR;
#line 3 "control_flow_yymarker_fail.re"
	{ action1 }
#line 37 "control_flow_yymarker_fail.c"
}
#line 6 "control_flow_yymarker_fail.re"

re2c: warning: line 6: control flow is undefined for strings that match '[\x0-\xFF] \x61 [\x0-\xFF] [\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
