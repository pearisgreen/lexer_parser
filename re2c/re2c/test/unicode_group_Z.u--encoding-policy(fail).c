/* Generated by re2c */
#line 1 "unicode_group_Z.u--encoding-policy(fail).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Z:
	
#line 13 "unicode_group_Z.u--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00001FFF) {
		if (yych <= 0x000000A0) {
			if (yych == ' ') goto yy4;
			if (yych >= 0x000000A0) goto yy4;
		} else {
			if (yych <= 0x00001680) {
				if (yych >= 0x00001680) goto yy4;
			} else {
				if (yych == 0x0000180E) goto yy4;
			}
		}
	} else {
		if (yych <= 0x0000202F) {
			if (yych <= 0x00002027) {
				if (yych <= 0x0000200A) goto yy4;
			} else {
				if (yych <= 0x00002029) goto yy4;
				if (yych >= 0x0000202F) goto yy4;
			}
		} else {
			if (yych <= 0x0000205F) {
				if (yych >= 0x0000205F) goto yy4;
			} else {
				if (yych == 0x00003000) goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 13 "unicode_group_Z.u--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 47 "unicode_group_Z.u--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Z.u--encoding-policy(fail).re"
	{ goto Z; }
#line 52 "unicode_group_Z.u--encoding-policy(fail).c"
}
#line 14 "unicode_group_Z.u--encoding-policy(fail).re"

}
static const unsigned int chars_Z [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x180e,0x180e,  0x2000,0x200a,  0x2028,0x2029,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Z = new YYCTYPE [21];
	unsigned int buffer_len = encode_utf32 (chars_Z, sizeof (chars_Z) / sizeof (unsigned int), buffer_Z);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Z), reinterpret_cast<const YYCTYPE *> (buffer_Z + buffer_len)))
		printf("test 'Z' failed\n");
	delete [] buffer_Z;
	return 0;
}
