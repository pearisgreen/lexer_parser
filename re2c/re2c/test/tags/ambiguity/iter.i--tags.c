/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy8;
	case 'd':	goto yy11;
	case 'e':	goto yy14;
	case 'f':	goto yy17;
	default:
		yyt1 = NULL;
		goto yy2;
	}
yy2:
	a = yyt1;
	{ @a }
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy7;
	}
yy7:
	b = yyt1;
	{ @b }
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy8;
	default:	goto yy10;
	}
yy10:
	c = yyt1;
	{ @c }
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy11;
	default:
		yyt1 = YYCURSOR;
		goto yy13;
	}
yy13:
	d = yyt1;
	{ @d }
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'e':	goto yy14;
	default:
		yyt1 = YYCURSOR;
		goto yy16;
	}
yy16:
	e = yyt1;
	{ @e }
yy17:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'f':	goto yy17;
	default:
		yyt1 = YYCURSOR;
		goto yy19;
	}
yy19:
	f = yyt1;
	{ @f }
}

re2c: warning: line 2: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 8: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 9: rule matches empty string [-Wmatch-empty-string]
