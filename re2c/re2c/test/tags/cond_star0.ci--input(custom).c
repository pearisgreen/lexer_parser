/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	}
/* *********************************** */
yyc_c1:
	if (YYLESSTHAN (3)) YYFILL(3);
	yych = YYPEEK ();
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	YYSKIP ();
	{}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	YYBACKUPCTX ();
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYRESTORECTX ();
	{}
yy7:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy9;
	case 'c':
		YYBACKUPCTX ();
		goto yy11;
	default:
		YYBACKUPCTX ();
		goto yy8;
	}
yy8:
	YYRESTORECTX ();
	{}
yy9:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy6;
	}
yy11:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy8;
	}
}

