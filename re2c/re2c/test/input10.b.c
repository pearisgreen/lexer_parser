/* Generated by re2c */
#line 1 "input10.b.re"

#line 5 "input10.b.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'E') {
		if (yych <= '@') goto yy2;
		if (yych <= 'D') goto yy4;
	} else {
		if (yych <= 'G') goto yy4;
		if (yych <= '`') goto yy2;
		if (yych <= 'g') goto yy4;
	}
yy2:
	++YYCURSOR;
#line 10 "input10.b.re"
	{ return -1; }
#line 22 "input10.b.c"
yy4:
	++YYCURSOR;
#line 8 "input10.b.re"
	{ return 1; }
#line 27 "input10.b.c"
}
#line 12 "input10.b.re"

