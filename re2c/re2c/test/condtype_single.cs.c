/* Generated by re2c */
#line 1 "condtype_single.cs.re"

#line 5 "condtype_single.cs.c"
{
	YYCTYPE yych;
	goto yyc_a;
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'a') goto yy4;
yy4:
	++YYCURSOR;
#line 2 "condtype_single.cs.re"
	{}
#line 18 "condtype_single.cs.c"
}
#line 3 "condtype_single.cs.re"

re2c: warning: line 3: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
