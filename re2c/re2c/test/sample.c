/* Generated by re2c */
#line 1 "sample.re"

#line 5 "sample.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy8;
	case 'p':	goto yy11;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
#line 6 "sample.re"
	{return ERR;}
#line 53 "sample.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'x':	goto yy12;
	default:	goto yy7;
	}
yy5:
#line 4 "sample.re"
	{return DEC;}
#line 63 "sample.c"
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	default:	goto yy5;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy9:
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy8;
	default:	goto yy10;
	}
yy10:
#line 3 "sample.re"
	{return ID;}
#line 119 "sample.c"
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy14;
	default:	goto yy9;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy15;
	default:	goto yy13;
	}
yy13:
	YYCURSOR = YYMARKER;
	goto yy5;
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy18;
	default:	goto yy9;
	}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy15;
	default:	goto yy17;
	}
yy17:
#line 5 "sample.re"
	{return HEX;}
#line 182 "sample.c"
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy19;
	default:	goto yy9;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy20;
	default:	goto yy9;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy8;
	default:	goto yy21;
	}
yy21:
#line 2 "sample.re"
	{return PRINT;}
#line 229 "sample.c"
}
#line 7 "sample.re"

