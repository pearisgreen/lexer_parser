/* Generated by re2c */
// incorrect automaton if mapping of TDFA states ignores version order

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy3;
	default:
		yyt1 = NULL;
		goto yy2;
	}
yy2:
	t = yyt1;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	yyt1 = NULL;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy6;
	default:	goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy8;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:	goto yy2;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:	goto yy2;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy11;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy11;
	default:	goto yy2;
	}
}

re2c: warning: line 4: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 4: tag 't' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
