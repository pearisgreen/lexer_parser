/* Generated by re2c */
#line 1 "range_neg_lf.re"

#line 5 "range_neg_lf.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy2;
	default:	goto yy3;
	}
yy2:
yy3:
	++YYCURSOR;
#line 2 "range_neg_lf.re"
	{return 0;}
#line 19 "range_neg_lf.c"
}
#line 3 "range_neg_lf.re"

re2c: warning: line 3: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
