/* Generated by re2c */
#line 1 "range_dot.u.re"

#line 5 "range_dot.u.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych != '\n') goto yy3;
yy3:
	++YYCURSOR;
#line 2 "range_dot.u.re"
	{return 0;}
#line 15 "range_dot.u.c"
}
#line 3 "range_dot.u.re"

re2c: warning: line 3: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
