/* Generated by re2c */
#line 1 "range_neg_lf.w.re"

#line 5 "range_neg_lf.w.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych != '\n') goto yy3;
yy3:
	++YYCURSOR;
#line 2 "range_neg_lf.w.re"
	{return 0;}
#line 15 "range_neg_lf.w.c"
}
#line 3 "range_neg_lf.w.re"

re2c: warning: line 3: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
