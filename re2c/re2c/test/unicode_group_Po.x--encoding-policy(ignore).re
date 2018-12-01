#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Po:
	/*!re2c
		re2c:yyfill:enable = 0;
		Po = [\x21-\x23\x25-\x27\x2a-\x2a\x2c-\x2c\x2e-\x2f\x3a-\x3b\x3f-\x40\x5c-\x5c\xa1-\xa1\xb7-\xb7\xbf-\xbf\u037e-\u037e\u0387-\u0387\u055a-\u055f\u0589-\u0589\u05c0-\u05c0\u05c3-\u05c3\u05c6-\u05c6\u05f3-\u05f4\u0609-\u060a\u060c-\u060d\u061b-\u061b\u061e-\u061f\u066a-\u066d\u06d4-\u06d4\u0700-\u070d\u07f7-\u07f9\u0830-\u083e\u085e-\u085e\u0964-\u0965\u0970-\u0970\u0df4-\u0df4\u0e4f-\u0e4f\u0e5a-\u0e5b\u0f04-\u0f12\u0f85-\u0f85\u0fd0-\u0fd4\u0fd9-\u0fda\u104a-\u104f\u10fb-\u10fb\u1361-\u1368\u166d-\u166e\u16eb-\u16ed\u1735-\u1736\u17d4-\u17d6\u17d8-\u17da\u1800-\u1805\u1807-\u180a\u1944-\u1945\u1a1e-\u1a1f\u1aa0-\u1aa6\u1aa8-\u1aad\u1b5a-\u1b60\u1bfc-\u1bff\u1c3b-\u1c3f\u1c7e-\u1c7f\u1cd3-\u1cd3\u2016-\u2017\u2020-\u2027\u2030-\u2038\u203b-\u203e\u2041-\u2043\u2047-\u2051\u2053-\u2053\u2055-\u205e\u2cf9-\u2cfc\u2cfe-\u2cff\u2d70-\u2d70\u2e00-\u2e01\u2e06-\u2e08\u2e0b-\u2e0b\u2e0e-\u2e16\u2e18-\u2e19\u2e1b-\u2e1b\u2e1e-\u2e1f\u2e2a-\u2e2e\u2e30-\u2e31\u3001-\u3003\u303d-\u303d\u30fb-\u30fb\ua4fe-\ua4ff\ua60d-\ua60f\ua673-\ua673\ua67e-\ua67e\ua6f2-\ua6f7\ua874-\ua877\ua8ce-\ua8cf\ua8f8-\ua8fa\ua92e-\ua92f\ua95f-\ua95f\ua9c1-\ua9cd\ua9de-\ua9df\uaa5c-\uaa5f\uaade-\uaadf\uabeb-\uabeb\ufe10-\ufe16\ufe19-\ufe19\ufe30-\ufe30\ufe45-\ufe46\ufe49-\ufe4c\ufe50-\ufe52\ufe54-\ufe57\ufe5f-\ufe61\ufe68-\ufe68\ufe6a-\ufe6b\uff01-\uff03\uff05-\uff07\uff0a-\uff0a\uff0c-\uff0c\uff0e-\uff0f\uff1a-\uff1b\uff1f-\uff20\uff3c-\uff3c\uff61-\uff61\uff64-\uff65\U00010100-\U00010101\U0001039f-\U0001039f\U000103d0-\U000103d0\U00010857-\U00010857\U0001091f-\U0001091f\U0001093f-\U0001093f\U00010a50-\U00010a58\U00010a7f-\U00010a7f\U00010b39-\U00010b3f\U00011047-\U0001104d\U000110bb-\U000110bc\U000110be-\U000110c1\U00012470-\U00012473];
		Po { goto Po; }
		* { return YYCURSOR == limit; }
	*/
}
static const unsigned int chars_Po [] = {0x21,0x23,  0x25,0x27,  0x2a,0x2a,  0x2c,0x2c,  0x2e,0x2f,  0x3a,0x3b,  0x3f,0x40,  0x5c,0x5c,  0xa1,0xa1,  0xb7,0xb7,  0xbf,0xbf,  0x37e,0x37e,  0x387,0x387,  0x55a,0x55f,  0x589,0x589,  0x5c0,0x5c0,  0x5c3,0x5c3,  0x5c6,0x5c6,  0x5f3,0x5f4,  0x609,0x60a,  0x60c,0x60d,  0x61b,0x61b,  0x61e,0x61f,  0x66a,0x66d,  0x6d4,0x6d4,  0x700,0x70d,  0x7f7,0x7f9,  0x830,0x83e,  0x85e,0x85e,  0x964,0x965,  0x970,0x970,  0xdf4,0xdf4,  0xe4f,0xe4f,  0xe5a,0xe5b,  0xf04,0xf12,  0xf85,0xf85,  0xfd0,0xfd4,  0xfd9,0xfda,  0x104a,0x104f,  0x10fb,0x10fb,  0x1361,0x1368,  0x166d,0x166e,  0x16eb,0x16ed,  0x1735,0x1736,  0x17d4,0x17d6,  0x17d8,0x17da,  0x1800,0x1805,  0x1807,0x180a,  0x1944,0x1945,  0x1a1e,0x1a1f,  0x1aa0,0x1aa6,  0x1aa8,0x1aad,  0x1b5a,0x1b60,  0x1bfc,0x1bff,  0x1c3b,0x1c3f,  0x1c7e,0x1c7f,  0x1cd3,0x1cd3,  0x2016,0x2017,  0x2020,0x2027,  0x2030,0x2038,  0x203b,0x203e,  0x2041,0x2043,  0x2047,0x2051,  0x2053,0x2053,  0x2055,0x205e,  0x2cf9,0x2cfc,  0x2cfe,0x2cff,  0x2d70,0x2d70,  0x2e00,0x2e01,  0x2e06,0x2e08,  0x2e0b,0x2e0b,  0x2e0e,0x2e16,  0x2e18,0x2e19,  0x2e1b,0x2e1b,  0x2e1e,0x2e1f,  0x2e2a,0x2e2e,  0x2e30,0x2e31,  0x3001,0x3003,  0x303d,0x303d,  0x30fb,0x30fb,  0xa4fe,0xa4ff,  0xa60d,0xa60f,  0xa673,0xa673,  0xa67e,0xa67e,  0xa6f2,0xa6f7,  0xa874,0xa877,  0xa8ce,0xa8cf,  0xa8f8,0xa8fa,  0xa92e,0xa92f,  0xa95f,0xa95f,  0xa9c1,0xa9cd,  0xa9de,0xa9df,  0xaa5c,0xaa5f,  0xaade,0xaadf,  0xabeb,0xabeb,  0xfe10,0xfe16,  0xfe19,0xfe19,  0xfe30,0xfe30,  0xfe45,0xfe46,  0xfe49,0xfe4c,  0xfe50,0xfe52,  0xfe54,0xfe57,  0xfe5f,0xfe61,  0xfe68,0xfe68,  0xfe6a,0xfe6b,  0xff01,0xff03,  0xff05,0xff07,  0xff0a,0xff0a,  0xff0c,0xff0c,  0xff0e,0xff0f,  0xff1a,0xff1b,  0xff1f,0xff20,  0xff3c,0xff3c,  0xff61,0xff61,  0xff64,0xff65,  0x10100,0x10101,  0x1039f,0x1039f,  0x103d0,0x103d0,  0x10857,0x10857,  0x1091f,0x1091f,  0x1093f,0x1093f,  0x10a50,0x10a58,  0x10a7f,0x10a7f,  0x10b39,0x10b3f,  0x11047,0x1104d,  0x110bb,0x110bc,  0x110be,0x110c1,  0x12470,0x12473,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned short * s)
{
	unsigned short * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Po = new YYCTYPE [806];
	unsigned int buffer_len = encode_utf16 (chars_Po, sizeof (chars_Po) / sizeof (unsigned int), buffer_Po);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Po), reinterpret_cast<const YYCTYPE *> (buffer_Po + buffer_len)))
		printf("test 'Po' failed\n");
	delete [] buffer_Po;
	return 0;
}
