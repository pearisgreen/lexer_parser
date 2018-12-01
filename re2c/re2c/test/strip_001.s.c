/* Generated by re2c */
#line 1 "strip_001.s.re"
/* re2c lesson 002_strip_comments, strip_001.s, (c) M. Boerger 2006 - 2007 */
#line 31 "strip_001.s.re"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 2

#define	BSIZE	128

#if BSIZE < YYMAXFILL
# error BSIZE must be greater YYMAXFILL
#endif

#define	YYCTYPE		unsigned char
#define	YYCURSOR	s.cur
#define	YYLIMIT		s.lim
#define	YYFILL(n)	{ if ((res = fill(&s, n)) >= 0) break; }

typedef struct Scanner
{
	FILE			*fp;
	unsigned char	*cur, *tok, *lim, *eof;
	unsigned char 	buffer[BSIZE];
} Scanner;

int fill(Scanner *s, int len)
{
	if (!len)
	{
		s->cur = s->tok = s->lim = s->buffer;
		s->eof = 0;
	}
	if (!s->eof)
	{
		int got, cnt = s->tok - s->buffer;

		if (cnt > 0)
		{
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
		}
		cnt = BSIZE - cnt;
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	else if (s->cur + len > s->eof)
	{
		return 0; /* not enough input data */
	}
	return -1;
}

int scan(FILE *fp)
{
	int  res = 0;
    Scanner s;

	if (!fp)
	{
		return 1; /* no file was opened */
	}

    s.fp = fp;
	
	fill(&s, 0);

	for(;;)
	{
		s.tok = s.cur;

#line 82 "strip_001.s.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '/') goto yy4;
			++YYCURSOR;
yy3:
#line 113 "strip_001.s.re"
			{ fputc(*s.tok, stdout); continue; }
#line 92 "strip_001.s.c"
yy4:
			yych = *++YYCURSOR;
			if (yych == '*') goto yy5;
			if (yych == '/') goto yy7;
			goto yy3;
yy5:
			++YYCURSOR;
#line 112 "strip_001.s.re"
			{ goto comment; }
#line 102 "strip_001.s.c"
yy7:
			++YYCURSOR;
#line 111 "strip_001.s.re"
			{ goto cppcomment; }
#line 107 "strip_001.s.c"
		}
#line 114 "strip_001.s.re"

comment:
		s.tok = s.cur;

#line 114 "strip_001.s.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '*') goto yy13;
			++YYCURSOR;
yy12:
#line 119 "strip_001.s.re"
			{ goto comment; }
#line 124 "strip_001.s.c"
yy13:
			yych = *++YYCURSOR;
			if (yych != '/') goto yy12;
			++YYCURSOR;
#line 118 "strip_001.s.re"
			{ continue; }
#line 131 "strip_001.s.c"
		}
#line 120 "strip_001.s.re"

cppcomment:
		s.tok = s.cur;

#line 138 "strip_001.s.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych == '\n') goto yy20;
			if (yych == '\r') goto yy22;
			++YYCURSOR;
yy19:
#line 125 "strip_001.s.re"
			{ goto cppcomment; }
#line 149 "strip_001.s.c"
yy20:
			++YYCURSOR;
#line 124 "strip_001.s.re"
			{ fwrite(s.tok, 1, s.cur - s.tok, stdout); continue; }
#line 154 "strip_001.s.c"
yy22:
			yych = *++YYCURSOR;
			if (yych == '\n') goto yy20;
			goto yy19;
		}
#line 126 "strip_001.s.re"

	}

	if (fp != stdin)
	{
		fclose(fp); /* close only if not stdin */
	}
	return res; /* return result */
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(!strcmp(argv[1], "-") ? stdin : fopen(argv[1], "r"));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
