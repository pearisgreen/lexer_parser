/* Generated by re2c */
#define	NULL		((char*) 0)

const unsigned char *scan(const unsigned char *p, unsigned int len, int *state)
{
	unsigned char c;
	const unsigned char *q;
	const unsigned char * const e = p + len;

	switch (*state) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	}



yy0:
	*state = 0;
	if (p >= e) {
		return NULL;
	}
yyFillLabel0:
	c = *p;
	if (c <= '/') goto yy2;
	if (c <= '9') goto yy4;
yy2:
	++p;
	{ return NULL; }
yy4:
	++p;
	*state = 1;
	if (p >= e) {
		return NULL;
	}
yyFillLabel1:
	c = *p;
	if (c <= '/') goto yy6;
	if (c <= '9') goto yy4;
yy6:
	{ return p; }

}
