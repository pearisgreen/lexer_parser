/* Generated by re2c */
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 1

static const size_t SIZE = 16;

struct input_t {
    char buf[SIZE + YYMAXFILL];
    char *lim;
    char *cur;
    char *tok;
    bool eof;

    input_t()
        : buf()
        , lim(buf + SIZE)
        , cur(lim)
        , tok(lim)
        , eof(false)
    {}
    bool fill(size_t need)
    {
        if (eof) {
            return false;
        }
        const size_t free = tok - buf;
        if (free < need) {
            return false;
        }
        memmove(buf, tok, lim - tok);
        lim -= free;
        cur -= free;
        tok -= free;
        lim += fread(lim, 1, free, stdin);
        if (lim < buf + SIZE) {
            eof = true;
            memset(lim, 0, YYMAXFILL);
            lim += YYMAXFILL;
        }
        return true;
    }
};

static bool lex(input_t & in, unsigned int &count)
{
    for (count = 0;;) {
        in.tok = in.cur;
        
{
	char yych;
	if (in.lim <= in.cur) if (!in.fill(1)) return false;
	yych = *in.cur;
	switch (yych) {
	case 0x00:	goto yy2;
	case '\n':	goto yy6;
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
	default:	goto yy4;
	}
yy2:
	++in.cur;
	{ return YYMAXFILL == in.lim - in.tok; }
yy4:
	++in.cur;
	{ return false; }
yy6:
	++in.cur;
	if (in.lim <= in.cur) if (!in.fill(1)) return false;
	yych = *in.cur;
	switch (yych) {
	case '\n':	goto yy6;
	default:	goto yy8;
	}
yy8:
	{ continue; }
yy9:
	++in.cur;
	if (in.lim <= in.cur) if (!in.fill(1)) return false;
	yych = *in.cur;
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
	case '9':	goto yy9;
	default:	goto yy11;
	}
yy11:
	{ ++count; continue; }
}

    }
}

int main()
{
    input_t in;
    unsigned int count;
    if (lex(in, count)) {
        printf("glorious %u numbers!\n", count);
    } else {
        printf("error\n");
    }

    return 0;
}
