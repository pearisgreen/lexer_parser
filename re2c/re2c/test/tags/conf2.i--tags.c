/* Generated by re2c */
#include <stdio.h>
#include <string.h>

static inline unsigned parse_oct(const char *s, const char *e)
{
    unsigned oct = 0;
    for (; s != e; ++s) {
        oct = oct * 10 + *s - '0';
    }
    return oct;
}

#define YYMAXFILL 16


/* at least maximal lexeme length plus YYMAXFILL */
static const size_t SIZE = YYMAXFILL * 2;

struct input_t {
    char buf[SIZE + YYMAXFILL];
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    char *yyt1;char *yyt2;char *yyt3;
    bool eof;

    input_t()
        : buf()
        , lim(buf + SIZE)
        , cur(lim)
        , mar(lim)
        , tok(lim)
        , yyt1(0), yyt2(0), yyt3(0)
        , eof(false)
    {}
    bool fill(size_t need)
    {
        if (eof) {
            printf("\nfill: underflow - 1\n");
            return false;
        }
        const size_t free = tok - buf;
        if (free < need) {
            printf("\nfill: underflow - 2\n");
            return false;
        }
        memmove(buf, tok, lim - tok);
        lim -= free;
        cur -= free;
        mar -= free;
        tok -= free;
        yyt1 -= free;yyt2 -= free;yyt3 -= free;
        lim += fread(lim, 1, free, stdin);
        if (lim < buf + SIZE) {
            eof = true;
            memset(lim, 0, YYMAXFILL);
            lim += YYMAXFILL;
        }
        return true;
    }
};

static bool lex(input_t & in)
{
loop:
    in.tok = in.cur;
    const char *p1, *p2, *p3;
    
{
	char yych;
	if ((in.lim - in.cur) < 16) if (!in.fill(16)) return false;
	yych = *in.cur;
	switch (yych) {
	case 0x00:	goto yy2;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	default:	goto yy4;
	}
yy2:
	++in.cur;
	{ return YYMAXFILL == in.lim - in.tok; }
yy4:
	++in.cur;
yy5:
	{ return false; }
yy6:
	yych = *(in.mar = ++in.cur);
	switch (yych) {
	case '.':
		in.yyt1 = in.cur;
		goto yy7;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy9;
	default:	goto yy5;
	}
yy7:
	yych = *++in.cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy10;
	default:	goto yy8;
	}
yy8:
	in.cur = in.mar;
	goto yy5;
yy9:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt1 = in.cur;
		goto yy7;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy11;
	default:	goto yy8;
	}
yy10:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt2 = in.cur;
		goto yy12;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy13;
	default:	goto yy8;
	}
yy11:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt1 = in.cur;
		goto yy7;
	default:	goto yy8;
	}
yy12:
	yych = *++in.cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy14;
	default:	goto yy8;
	}
yy13:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt2 = in.cur;
		goto yy12;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy15;
	default:	goto yy8;
	}
yy14:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt3 = in.cur;
		goto yy16;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy17;
	default:	goto yy8;
	}
yy15:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt2 = in.cur;
		goto yy12;
	default:	goto yy8;
	}
yy16:
	yych = *++in.cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy18;
	default:	goto yy8;
	}
yy17:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt3 = in.cur;
		goto yy16;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy19;
	default:	goto yy8;
	}
yy18:
	yych = *++in.cur;
	switch (yych) {
	case '\n':	goto yy20;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy22;
	default:	goto yy8;
	}
yy19:
	yych = *++in.cur;
	switch (yych) {
	case '.':
		in.yyt3 = in.cur;
		goto yy16;
	default:	goto yy8;
	}
yy20:
	++in.cur;
	p1 = in.yyt1;
	p2 = in.yyt2;
	p3 = in.yyt3;
	{
            printf("> %u.%u.%u.%u\n",
                parse_oct(in.tok, p1),
                parse_oct(p1 + 1, p2),
                parse_oct(p2 + 1, p3),
                parse_oct(p3 + 1, in.cur - 1));
            goto loop;
        }
yy22:
	yych = *++in.cur;
	switch (yych) {
	case '\n':	goto yy20;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy23;
	default:	goto yy8;
	}
yy23:
	yych = *++in.cur;
	switch (yych) {
	case '\n':	goto yy20;
	default:	goto yy8;
	}
}

}

int main()
{
    input_t in;
    if (!lex(in)) {
        printf("error\n");
    }

    return 0;
}
