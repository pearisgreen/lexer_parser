/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt2 = YYCURSOR;
		goto yy5;
	default:
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	p = yyt2;
	q = yyt1;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy4:
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = NULL;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	yyt1 = NULL;
	goto yy2;
yy8:
	++YYCURSOR;
	goto yy2;
}

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
re2c: warning: line 3: tag 'q' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
