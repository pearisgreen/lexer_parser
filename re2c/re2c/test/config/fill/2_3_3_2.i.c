/* Generated by re2c */
/* autogen */
// re2c:define:YYFILL = "YYFILL";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:parameter = 1;
// re2c:define:YYFILL:naked = 0;


{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ def }
yy4:
	++YYCURSOR;
	{ code }
}

