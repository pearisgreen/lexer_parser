/* Generated by re2c */
#line 1 "error14.1.re"

#line 5 "error14.1.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'A':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 4 "error14.1.re"
	{ return 0; }
#line 19 "error14.1.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'B':	goto yy5;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':	goto yy7;
	case 'D':	goto yy9;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	++YYCURSOR;
#line 2 "error14.1.re"
	{ return 1; }
#line 40 "error14.1.c"
yy9:
	++YYCURSOR;
#line 3 "error14.1.re"
	{ return 2; }
#line 45 "error14.1.c"
}
#line 5 "error14.1.re"


#define YYMAXFILL 3


#define YYMAXFILL 3

