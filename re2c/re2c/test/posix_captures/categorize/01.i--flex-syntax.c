/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt4 = NULL;
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy4;
	default:
		yyt3 = yyt4 = NULL;
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[6] = yyt5;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[7] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt3 = yyt4 = NULL;
		yyt5 = YYCURSOR;
		goto yy8;
	default:	goto yy7;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy2;
	}
yy6:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy6;
	case 'b':
		yyt2 = yyt5;
		yyt3 = yyt4 = NULL;
		yyt5 = YYCURSOR;
		goto yy8;
	default:
		yyt3 = yyt4 = NULL;
		yyt2 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt6 = YYCURSOR;
		goto yy9;
	case 'b':
		yyt2 = yyt5;
		goto yy4;
	default:
		yyt2 = yyt5;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy11;
	default:	goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt5;
		goto yy2;
	} else {
		yyt4 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = yyt6;
		yyt6 = YYCURSOR;
		goto yy9;
	case 'b':
		yyt3 = yyt6;
		yyt4 = yyt5 = YYCURSOR;
		goto yy4;
	default:
		yyt3 = yyt6;
		yyt4 = yyt5 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
