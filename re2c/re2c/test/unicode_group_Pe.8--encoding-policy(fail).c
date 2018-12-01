/* Generated by re2c */
#line 1 "unicode_group_Pe.8--encoding-policy(fail).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pe:
	
#line 13 "unicode_group_Pe.8--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case ')':
	case ']':
	case '}':	goto yy4;
	case 0xE0:	goto yy6;
	case 0xE1:	goto yy7;
	case 0xE2:	goto yy8;
	case 0xE3:	goto yy9;
	case 0xEF:	goto yy10;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Pe.8--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 33 "unicode_group_Pe.8--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Pe.8--encoding-policy(fail).re"
	{ goto Pe; }
#line 38 "unicode_group_Pe.8--encoding-policy(fail).c"
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xBC:	goto yy11;
	default:	goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9A:	goto yy13;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x81:	goto yy14;
	case 0x82:	goto yy15;
	case 0x8C:	goto yy16;
	case 0x9D:	goto yy17;
	case 0x9F:	goto yy18;
	case 0xA6:	goto yy19;
	case 0xA7:	goto yy20;
	case 0xB8:	goto yy21;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy22;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xB4:	goto yy23;
	case 0xB8:	goto yy24;
	case 0xB9:	goto yy25;
	case 0xBC:	goto yy26;
	case 0xBD:	goto yy27;
	default:	goto yy3;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBB:
	case 0xBD:	goto yy4;
	default:	goto yy12;
	}
yy12:
	YYCURSOR = YYMARKER;
	goto yy3;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9C:	goto yy4;
	default:	goto yy12;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:
	case 0xBE:	goto yy4;
	default:	goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8E:	goto yy4;
	default:	goto yy12;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAA:	goto yy4;
	default:	goto yy12;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA9:
	case 0xAB:
	case 0xAD:
	case 0xAF:
	case 0xB1:
	case 0xB3:
	case 0xB5:	goto yy4;
	default:	goto yy12;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:
	case 0xA7:
	case 0xA9:
	case 0xAB:
	case 0xAD:
	case 0xAF:	goto yy4;
	default:	goto yy12;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x84:
	case 0x86:
	case 0x88:
	case 0x8A:
	case 0x8C:
	case 0x8E:
	case 0x90:
	case 0x92:
	case 0x94:
	case 0x96:
	case 0x98:	goto yy4;
	default:	goto yy12;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x99:
	case 0x9B:
	case 0xBD:	goto yy4;
	default:	goto yy12;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA3:
	case 0xA5:
	case 0xA7:
	case 0xA9:	goto yy4;
	default:	goto yy12;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0x8B:
	case 0x8D:
	case 0x8F:
	case 0x91:
	case 0x95:
	case 0x97:
	case 0x99:
	case 0x9B:
	case 0x9E:
	case 0x9F:	goto yy4;
	default:	goto yy12;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBF:	goto yy4;
	default:	goto yy12;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x98:
	case 0xB6:
	case 0xB8:
	case 0xBA:
	case 0xBC:
	case 0xBE:	goto yy4;
	default:	goto yy12;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x82:
	case 0x84:
	case 0x88:
	case 0x9A:
	case 0x9C:
	case 0x9E:	goto yy4;
	default:	goto yy12;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x89:
	case 0xBD:	goto yy4;
	default:	goto yy12;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:
	case 0xA0:
	case 0xA3:	goto yy4;
	default:	goto yy12;
	}
}
#line 14 "unicode_group_Pe.8--encoding-policy(fail).re"

}
static const unsigned int chars_Pe [] = {0x29,0x29,  0x5d,0x5d,  0x7d,0x7d,  0xf3b,0xf3b,  0xf3d,0xf3d,  0x169c,0x169c,  0x2046,0x2046,  0x207e,0x207e,  0x208e,0x208e,  0x232a,0x232a,  0x2769,0x2769,  0x276b,0x276b,  0x276d,0x276d,  0x276f,0x276f,  0x2771,0x2771,  0x2773,0x2773,  0x2775,0x2775,  0x27c6,0x27c6,  0x27e7,0x27e7,  0x27e9,0x27e9,  0x27eb,0x27eb,  0x27ed,0x27ed,  0x27ef,0x27ef,  0x2984,0x2984,  0x2986,0x2986,  0x2988,0x2988,  0x298a,0x298a,  0x298c,0x298c,  0x298e,0x298e,  0x2990,0x2990,  0x2992,0x2992,  0x2994,0x2994,  0x2996,0x2996,  0x2998,0x2998,  0x29d9,0x29d9,  0x29db,0x29db,  0x29fd,0x29fd,  0x2e23,0x2e23,  0x2e25,0x2e25,  0x2e27,0x2e27,  0x2e29,0x2e29,  0x3009,0x3009,  0x300b,0x300b,  0x300d,0x300d,  0x300f,0x300f,  0x3011,0x3011,  0x3015,0x3015,  0x3017,0x3017,  0x3019,0x3019,  0x301b,0x301b,  0x301e,0x301f,  0xfd3f,0xfd3f,  0xfe18,0xfe18,  0xfe36,0xfe36,  0xfe38,0xfe38,  0xfe3a,0xfe3a,  0xfe3c,0xfe3c,  0xfe3e,0xfe3e,  0xfe40,0xfe40,  0xfe42,0xfe42,  0xfe44,0xfe44,  0xfe48,0xfe48,  0xfe5a,0xfe5a,  0xfe5c,0xfe5c,  0xfe5e,0xfe5e,  0xff09,0xff09,  0xff3d,0xff3d,  0xff5d,0xff5d,  0xff60,0xff60,  0xff63,0xff63,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned char * s)
{
	unsigned char * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	YYCTYPE * buffer_Pe = new YYCTYPE [288];
	unsigned int buffer_len = encode_utf8 (chars_Pe, sizeof (chars_Pe) / sizeof (unsigned int), buffer_Pe);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Pe), reinterpret_cast<const YYCTYPE *> (buffer_Pe + buffer_len)))
		printf("test 'Pe' failed\n");
	delete [] buffer_Pe;
	return 0;
}
