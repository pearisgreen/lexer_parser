/* Generated by re2c */
/* autogen */
// re2c:define:YYSETCONDITION = "setcondition (#);";
// re2c:define:YYSETCONDITION@cond = #;
// re2c:define:YYSETCONDITION:naked = 0;


{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	case yycc2: goto yyc_c2;
	}
/* *********************************** */
yyc_c1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{ def }
yy5:
	++YYCURSOR;
	setcondition (yycc2);(yycc2);
	{ code1 }
/* *********************************** */
yyc_c2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy11;
	default:	goto yy9;
	}
yy9:
	++YYCURSOR;
	{ def }
yy11:
	++YYCURSOR;
	setcondition (yycc1);(yycc1);
	{ code2 }
}

