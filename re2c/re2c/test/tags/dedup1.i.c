/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	goto yy7;
yy3:
	YYCURSOR = YYCTXMARKER;
	{}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy8;
	case 'b':
		YYCTXMARKER = YYCURSOR;
		goto yy10;
	default:
		YYCTXMARKER = YYCURSOR;
		goto yy5;
	}
yy5:
	YYCURSOR = YYCTXMARKER;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		YYCTXMARKER = YYCURSOR;
		goto yy12;
	case 'c':
		YYCTXMARKER = YYCURSOR;
		goto yy15;
	default:	goto yy9;
	}
yy9:
	YYCURSOR = YYMARKER;
	YYCTXMARKER = YYCURSOR;
	goto yy5;
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy10;
	default:	goto yy5;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy12;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYCTXMARKER;
	{}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy15;
	default:	goto yy17;
	}
yy17:
	YYCURSOR = YYCTXMARKER;
	{}
}

