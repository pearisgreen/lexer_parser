/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *p0, *p1, *p2, *p3, *p4;
    
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '1':	goto yy5;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case '1':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy8;
	default:	goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy9;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy10;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':	goto yy11;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':	goto yy12;
	default:	goto yy6;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':	goto yy13;
	default:	goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':	goto yy14;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy15;
	default:	goto yy6;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy16;
	default:	goto yy6;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy17;
	default:	goto yy6;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy18;
	default:	goto yy6;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy19;
	default:	goto yy6;
	}
yy19:
	++YYCURSOR;
	p0 = YYCURSOR - 15;
	p1 = YYCURSOR - 14;
	p2 = YYCURSOR - 12;
	p3 = YYCURSOR - 9;
	p4 = YYCURSOR - 5;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                p4 - p3, p3,
                YYCURSOR - p4, p4);
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
