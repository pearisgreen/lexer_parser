/* Generated by re2c */
#line 1 "default_full.u--encoding-policy(substitute).re"

#line 5 "default_full.u--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x0000D7FF) goto yy2;
	if (yych <= 0x0000DFFF) goto yy4;
yy2:
	++YYCURSOR;
#line 3 "default_full.u--encoding-policy(substitute).re"
	{ return FULL; }
#line 16 "default_full.u--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 2 "default_full.u--encoding-policy(substitute).re"
	{ return DEFAULT; }
#line 21 "default_full.u--encoding-policy(substitute).c"
}
#line 4 "default_full.u--encoding-policy(substitute).re"

