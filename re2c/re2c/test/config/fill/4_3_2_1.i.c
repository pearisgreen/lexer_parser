/* Generated by re2c */
/* autogen */
// re2c:define:YYFILL = "fill (@@);";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:parameter = 0;


{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) fill (@@);;
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

