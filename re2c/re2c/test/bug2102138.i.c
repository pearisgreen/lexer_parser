/* Generated by re2c */
#include <stdio.h>

int scan(const unsigned char *cr)
{
	unsigned char  ch;

{
	unsigned char ch;
	ch = *cr;
	switch (ch) {
	case 0x00:	goto yy2;
	case 0x01:	goto yy4;
	case 0x02:	goto yy6;
	case 0x03:	goto yy8;
	case 0x04:	goto yy10;
	case 0x05:	goto yy12;
	case 0x06:	goto yy14;
	case 0x07:	goto yy16;
	case 0x08:	goto yy18;
	case '\t':	goto yy20;
	case '\n':	goto yy22;
	case '\v':	goto yy24;
	case '\f':	goto yy26;
	case '\r':	goto yy28;
	case 0x0E:	goto yy30;
	case 0x0F:	goto yy32;
	case 0x10:	goto yy34;
	case 0x11:	goto yy36;
	case 0x12:	goto yy38;
	case 0x13:	goto yy40;
	case 0x14:	goto yy42;
	case 0x15:	goto yy44;
	case 0x16:	goto yy46;
	case 0x17:	goto yy48;
	case 0x18:	goto yy50;
	case 0x19:	goto yy52;
	case 0x1A:	goto yy54;
	case 0x1B:	goto yy56;
	case 0x1C:	goto yy58;
	case 0x1D:	goto yy60;
	case 0x1E:	goto yy62;
	case 0x1F:	goto yy64;
	case ' ':	goto yy66;
	case '!':	goto yy68;
	case '"':	goto yy70;
	case '#':	goto yy72;
	case '$':	goto yy74;
	case '%':	goto yy76;
	case '&':	goto yy78;
	case '\'':	goto yy80;
	case '(':	goto yy82;
	case ')':	goto yy84;
	case '*':	goto yy86;
	case '+':	goto yy88;
	case ',':	goto yy90;
	case '-':	goto yy92;
	case '.':	goto yy94;
	case '/':	goto yy96;
	case '0':	goto yy98;
	case '1':	goto yy100;
	case '2':	goto yy102;
	case '3':	goto yy104;
	case '4':	goto yy106;
	case '5':	goto yy108;
	case '6':	goto yy110;
	case '7':	goto yy112;
	case '8':	goto yy114;
	case '9':	goto yy116;
	case ':':	goto yy118;
	case ';':	goto yy120;
	case '<':	goto yy122;
	case '=':	goto yy124;
	case '>':	goto yy126;
	case '?':	goto yy128;
	case '@':	goto yy130;
	case 'A':	goto yy132;
	case 'B':	goto yy134;
	case 'C':	goto yy136;
	case 'D':	goto yy138;
	case 'E':	goto yy140;
	case 'F':	goto yy142;
	case 'G':	goto yy144;
	case 'H':	goto yy146;
	case 'I':	goto yy148;
	case 'J':	goto yy150;
	case 'K':	goto yy152;
	case 'L':	goto yy154;
	case 'M':	goto yy156;
	case 'N':	goto yy158;
	case 'O':	goto yy160;
	case 'P':	goto yy162;
	case 'Q':	goto yy164;
	case 'R':	goto yy166;
	case 'S':	goto yy168;
	case 'T':	goto yy170;
	case 'U':	goto yy172;
	case 'V':	goto yy174;
	case 'W':	goto yy176;
	case 'X':	goto yy178;
	case 'Y':	goto yy180;
	case 'Z':	goto yy182;
	case '[':	goto yy184;
	case '\\':	goto yy186;
	case ']':	goto yy188;
	case '^':	goto yy190;
	case '_':	goto yy192;
	case '`':	goto yy194;
	case 'a':	goto yy196;
	case 'b':	goto yy198;
	case 'c':	goto yy200;
	case 'd':	goto yy202;
	case 'e':	goto yy204;
	case 'f':	goto yy206;
	case 'g':	goto yy208;
	case 'h':	goto yy210;
	case 'i':	goto yy212;
	case 'j':	goto yy214;
	case 'k':	goto yy216;
	case 'l':	goto yy218;
	case 'm':	goto yy220;
	case 'n':	goto yy222;
	case 'o':	goto yy224;
	case 'p':	goto yy226;
	case 'q':	goto yy228;
	case 'r':	goto yy230;
	case 's':	goto yy232;
	case 't':	goto yy234;
	case 'u':	goto yy236;
	case 'v':	goto yy238;
	case 'w':	goto yy240;
	case 'x':	goto yy242;
	case 'y':	goto yy244;
	case 'z':	goto yy246;
	case '{':	goto yy248;
	case '|':	goto yy250;
	case '}':	goto yy252;
	case '~':	goto yy254;
	case 0x7F:	goto yy256;
	case 0x80:	goto yy258;
	case 0x81:	goto yy260;
	case 0x82:	goto yy262;
	case 0x83:	goto yy264;
	case 0x84:	goto yy266;
	case 0x85:	goto yy268;
	case 0x86:	goto yy270;
	case 0x87:	goto yy272;
	case 0x88:	goto yy274;
	case 0x89:	goto yy276;
	case 0x8A:	goto yy278;
	case 0x8B:	goto yy280;
	case 0x8C:	goto yy282;
	case 0x8D:	goto yy284;
	case 0x8E:	goto yy286;
	case 0x8F:	goto yy288;
	case 0x90:	goto yy290;
	case 0x91:	goto yy292;
	case 0x92:	goto yy294;
	case 0x93:	goto yy296;
	case 0x94:	goto yy298;
	case 0x95:	goto yy300;
	case 0x96:	goto yy302;
	case 0x97:	goto yy304;
	case 0x98:	goto yy306;
	case 0x99:	goto yy308;
	case 0x9A:	goto yy310;
	case 0x9B:	goto yy312;
	case 0x9C:	goto yy314;
	case 0x9D:	goto yy316;
	case 0x9E:	goto yy318;
	case 0x9F:	goto yy320;
	case 0xA0:	goto yy322;
	case 0xA1:	goto yy324;
	case 0xA2:	goto yy326;
	case 0xA3:	goto yy328;
	case 0xA4:	goto yy330;
	case 0xA5:	goto yy332;
	case 0xA6:	goto yy334;
	case 0xA7:	goto yy336;
	case 0xA8:	goto yy338;
	case 0xA9:	goto yy340;
	case 0xAA:	goto yy342;
	case 0xAB:	goto yy344;
	case 0xAC:	goto yy346;
	case 0xAD:	goto yy348;
	case 0xAE:	goto yy350;
	case 0xAF:	goto yy352;
	case 0xB0:	goto yy354;
	case 0xB1:	goto yy356;
	case 0xB2:	goto yy358;
	case 0xB3:	goto yy360;
	case 0xB4:	goto yy362;
	case 0xB5:	goto yy364;
	case 0xB6:	goto yy366;
	case 0xB7:	goto yy368;
	case 0xB8:	goto yy370;
	case 0xB9:	goto yy372;
	case 0xBA:	goto yy374;
	case 0xBB:	goto yy376;
	case 0xBC:	goto yy378;
	case 0xBD:	goto yy380;
	case 0xBE:	goto yy382;
	case 0xBF:	goto yy384;
	case 0xC0:	goto yy386;
	case 0xC1:	goto yy388;
	case 0xC2:	goto yy390;
	case 0xC3:	goto yy392;
	case 0xC4:	goto yy394;
	case 0xC5:	goto yy396;
	case 0xC6:	goto yy398;
	case 0xC7:	goto yy400;
	case 0xC8:	goto yy402;
	case 0xC9:	goto yy404;
	case 0xCA:	goto yy406;
	case 0xCB:	goto yy408;
	case 0xCC:	goto yy410;
	case 0xCD:	goto yy412;
	case 0xCE:	goto yy414;
	case 0xCF:	goto yy416;
	case 0xD0:	goto yy418;
	case 0xD1:	goto yy420;
	case 0xD2:	goto yy422;
	case 0xD3:	goto yy424;
	case 0xD4:	goto yy426;
	case 0xD5:	goto yy428;
	case 0xD6:	goto yy430;
	case 0xD7:	goto yy432;
	case 0xD8:	goto yy434;
	case 0xD9:	goto yy436;
	case 0xDA:	goto yy438;
	case 0xDB:	goto yy440;
	case 0xDC:	goto yy442;
	case 0xDD:	goto yy444;
	case 0xDE:	goto yy446;
	case 0xDF:	goto yy448;
	case 0xE0:	goto yy450;
	case 0xE1:	goto yy452;
	case 0xE2:	goto yy454;
	case 0xE3:	goto yy456;
	case 0xE4:	goto yy458;
	case 0xE5:	goto yy460;
	case 0xE6:	goto yy462;
	case 0xE7:	goto yy464;
	case 0xE8:	goto yy466;
	case 0xE9:	goto yy468;
	case 0xEA:	goto yy470;
	case 0xEB:	goto yy472;
	case 0xEC:	goto yy474;
	case 0xED:	goto yy476;
	case 0xEE:	goto yy478;
	case 0xEF:	goto yy480;
	case 0xF0:	goto yy482;
	case 0xF1:	goto yy484;
	case 0xF2:	goto yy486;
	case 0xF3:	goto yy488;
	case 0xF4:	goto yy490;
	case 0xF5:	goto yy492;
	case 0xF6:	goto yy494;
	case 0xF7:	goto yy496;
	case 0xF8:	goto yy498;
	case 0xF9:	goto yy500;
	case 0xFA:	goto yy502;
	case 0xFB:	goto yy504;
	case 0xFC:	goto yy506;
	case 0xFD:	goto yy508;
	case 0xFE:	goto yy510;
	default:	goto yy512;
	}
yy2:
	++cr;
	return 0x00;
yy4:
	++cr;
	return 0x01;
yy6:
	++cr;
	return 0x02;
yy8:
	++cr;
	return 0x03;
yy10:
	++cr;
	return 0x04;
yy12:
	++cr;
	return 0x05;
yy14:
	++cr;
	return 0x06;
yy16:
	++cr;
	return 0x07;
yy18:
	++cr;
	return 0x08;
yy20:
	++cr;
	return 0x09;
yy22:
	++cr;
	return 0x0A;
yy24:
	++cr;
	return 0x0B;
yy26:
	++cr;
	return 0x0C;
yy28:
	++cr;
	return 0x0D;
yy30:
	++cr;
	return 0x0E;
yy32:
	++cr;
	return 0x0F;
yy34:
	++cr;
	return 0x10;
yy36:
	++cr;
	return 0x11;
yy38:
	++cr;
	return 0x12;
yy40:
	++cr;
	return 0x13;
yy42:
	++cr;
	return 0x14;
yy44:
	++cr;
	return 0x15;
yy46:
	++cr;
	return 0x16;
yy48:
	++cr;
	return 0x17;
yy50:
	++cr;
	return 0x18;
yy52:
	++cr;
	return 0x19;
yy54:
	++cr;
	return 0x1A;
yy56:
	++cr;
	return 0x1B;
yy58:
	++cr;
	return 0x1C;
yy60:
	++cr;
	return 0x1D;
yy62:
	++cr;
	return 0x1E;
yy64:
	++cr;
	return 0x1F;
yy66:
	++cr;
	return 0x20;
yy68:
	++cr;
	return 0x21;
yy70:
	++cr;
	return 0x22;
yy72:
	++cr;
	return 0x23;
yy74:
	++cr;
	return 0x24;
yy76:
	++cr;
	return 0x25;
yy78:
	++cr;
	return 0x26;
yy80:
	++cr;
	return 0x27;
yy82:
	++cr;
	return 0x28;
yy84:
	++cr;
	return 0x29;
yy86:
	++cr;
	return 0x2A;
yy88:
	++cr;
	return 0x2B;
yy90:
	++cr;
	return 0x2C;
yy92:
	++cr;
	return 0x2D;
yy94:
	++cr;
	return 0x2E;
yy96:
	++cr;
	return 0x2F;
yy98:
	++cr;
	return 0x30;
yy100:
	++cr;
	return 0x31;
yy102:
	++cr;
	return 0x32;
yy104:
	++cr;
	return 0x33;
yy106:
	++cr;
	return 0x34;
yy108:
	++cr;
	return 0x35;
yy110:
	++cr;
	return 0x36;
yy112:
	++cr;
	return 0x37;
yy114:
	++cr;
	return 0x38;
yy116:
	++cr;
	return 0x39;
yy118:
	++cr;
	return 0x3A;
yy120:
	++cr;
	return 0x3B;
yy122:
	++cr;
	return 0x3C;
yy124:
	++cr;
	return 0x3D;
yy126:
	++cr;
	return 0x3E;
yy128:
	++cr;
	return 0x3F;
yy130:
	++cr;
	return 0x40;
yy132:
	++cr;
	return 0x41;
yy134:
	++cr;
	return 0x42;
yy136:
	++cr;
	return 0x43;
yy138:
	++cr;
	return 0x44;
yy140:
	++cr;
	return 0x45;
yy142:
	++cr;
	return 0x46;
yy144:
	++cr;
	return 0x47;
yy146:
	++cr;
	return 0x48;
yy148:
	++cr;
	return 0x49;
yy150:
	++cr;
	return 0x4A;
yy152:
	++cr;
	return 0x4B;
yy154:
	++cr;
	return 0x4C;
yy156:
	++cr;
	return 0x4D;
yy158:
	++cr;
	return 0x4E;
yy160:
	++cr;
	return 0x4F;
yy162:
	++cr;
	return 0x50;
yy164:
	++cr;
	return 0x51;
yy166:
	++cr;
	return 0x52;
yy168:
	++cr;
	return 0x53;
yy170:
	++cr;
	return 0x54;
yy172:
	++cr;
	return 0x55;
yy174:
	++cr;
	return 0x56;
yy176:
	++cr;
	return 0x57;
yy178:
	++cr;
	return 0x58;
yy180:
	++cr;
	return 0x59;
yy182:
	++cr;
	return 0x5A;
yy184:
	++cr;
	return 0x5B;
yy186:
	++cr;
	return 0x5C;
yy188:
	++cr;
	return 0x5D;
yy190:
	++cr;
	return 0x5E;
yy192:
	++cr;
	return 0x5F;
yy194:
	++cr;
	return 0x60;
yy196:
	++cr;
	return 0x61;
yy198:
	++cr;
	return 0x62;
yy200:
	++cr;
	return 0x63;
yy202:
	++cr;
	return 0x64;
yy204:
	++cr;
	return 0x65;
yy206:
	++cr;
	return 0x66;
yy208:
	++cr;
	return 0x67;
yy210:
	++cr;
	return 0x68;
yy212:
	++cr;
	return 0x69;
yy214:
	++cr;
	return 0x6A;
yy216:
	++cr;
	return 0x6B;
yy218:
	++cr;
	return 0x6C;
yy220:
	++cr;
	return 0x6D;
yy222:
	++cr;
	return 0x6E;
yy224:
	++cr;
	return 0x6F;
yy226:
	++cr;
	return 0x70;
yy228:
	++cr;
	return 0x71;
yy230:
	++cr;
	return 0x72;
yy232:
	++cr;
	return 0x73;
yy234:
	++cr;
	return 0x74;
yy236:
	++cr;
	return 0x75;
yy238:
	++cr;
	return 0x76;
yy240:
	++cr;
	return 0x77;
yy242:
	++cr;
	return 0x78;
yy244:
	++cr;
	return 0x79;
yy246:
	++cr;
	return 0x7A;
yy248:
	++cr;
	return 0x7B;
yy250:
	++cr;
	return 0x7C;
yy252:
	++cr;
	return 0x7D;
yy254:
	++cr;
	return 0x7E;
yy256:
	++cr;
	return 0x7F;
yy258:
	++cr;
	return 0x80;
yy260:
	++cr;
	return 0x81;
yy262:
	++cr;
	return 0x82;
yy264:
	++cr;
	return 0x83;
yy266:
	++cr;
	return 0x84;
yy268:
	++cr;
	return 0x85;
yy270:
	++cr;
	return 0x86;
yy272:
	++cr;
	return 0x87;
yy274:
	++cr;
	return 0x88;
yy276:
	++cr;
	return 0x89;
yy278:
	++cr;
	return 0x8A;
yy280:
	++cr;
	return 0x8B;
yy282:
	++cr;
	return 0x8C;
yy284:
	++cr;
	return 0x8D;
yy286:
	++cr;
	return 0x8E;
yy288:
	++cr;
	return 0x8F;
yy290:
	++cr;
	return 0x90;
yy292:
	++cr;
	return 0x91;
yy294:
	++cr;
	return 0x92;
yy296:
	++cr;
	return 0x93;
yy298:
	++cr;
	return 0x94;
yy300:
	++cr;
	return 0x95;
yy302:
	++cr;
	return 0x96;
yy304:
	++cr;
	return 0x97;
yy306:
	++cr;
	return 0x98;
yy308:
	++cr;
	return 0x99;
yy310:
	++cr;
	return 0x9A;
yy312:
	++cr;
	return 0x9B;
yy314:
	++cr;
	return 0x9C;
yy316:
	++cr;
	return 0x9D;
yy318:
	++cr;
	return 0x9E;
yy320:
	++cr;
	return 0x9F;
yy322:
	++cr;
	return 0xA0;
yy324:
	++cr;
	return 0xA1;
yy326:
	++cr;
	return 0xA2;
yy328:
	++cr;
	return 0xA3;
yy330:
	++cr;
	return 0xA4;
yy332:
	++cr;
	return 0xA5;
yy334:
	++cr;
	return 0xA6;
yy336:
	++cr;
	return 0xA7;
yy338:
	++cr;
	return 0xA8;
yy340:
	++cr;
	return 0xA9;
yy342:
	++cr;
	return 0xAA;
yy344:
	++cr;
	return 0xAB;
yy346:
	++cr;
	return 0xAC;
yy348:
	++cr;
	return 0xAD;
yy350:
	++cr;
	return 0xAE;
yy352:
	++cr;
	return 0xAF;
yy354:
	++cr;
	return 0xB0;
yy356:
	++cr;
	return 0xB1;
yy358:
	++cr;
	return 0xB2;
yy360:
	++cr;
	return 0xB3;
yy362:
	++cr;
	return 0xB4;
yy364:
	++cr;
	return 0xB5;
yy366:
	++cr;
	return 0xB6;
yy368:
	++cr;
	return 0xB7;
yy370:
	++cr;
	return 0xB8;
yy372:
	++cr;
	return 0xB9;
yy374:
	++cr;
	return 0xBA;
yy376:
	++cr;
	return 0xBB;
yy378:
	++cr;
	return 0xBC;
yy380:
	++cr;
	return 0xBD;
yy382:
	++cr;
	return 0xBE;
yy384:
	++cr;
	return 0xBF;
yy386:
	++cr;
	return 0xC0;
yy388:
	++cr;
	return 0xC1;
yy390:
	++cr;
	return 0xC2;
yy392:
	++cr;
	return 0xC3;
yy394:
	++cr;
	return 0xC4;
yy396:
	++cr;
	return 0xC5;
yy398:
	++cr;
	return 0xC6;
yy400:
	++cr;
	return 0xC7;
yy402:
	++cr;
	return 0xC8;
yy404:
	++cr;
	return 0xC9;
yy406:
	++cr;
	return 0xCA;
yy408:
	++cr;
	return 0xCB;
yy410:
	++cr;
	return 0xCC;
yy412:
	++cr;
	return 0xCD;
yy414:
	++cr;
	return 0xCE;
yy416:
	++cr;
	return 0xCF;
yy418:
	++cr;
	return 0xD0;
yy420:
	++cr;
	return 0xD1;
yy422:
	++cr;
	return 0xD2;
yy424:
	++cr;
	return 0xD3;
yy426:
	++cr;
	return 0xD4;
yy428:
	++cr;
	return 0xD5;
yy430:
	++cr;
	return 0xD6;
yy432:
	++cr;
	return 0xD7;
yy434:
	++cr;
	return 0xD8;
yy436:
	++cr;
	return 0xD9;
yy438:
	++cr;
	return 0xDA;
yy440:
	++cr;
	return 0xDB;
yy442:
	++cr;
	return 0xDC;
yy444:
	++cr;
	return 0xDD;
yy446:
	++cr;
	return 0xDE;
yy448:
	++cr;
	return 0xDF;
yy450:
	++cr;
	return 0xE0;
yy452:
	++cr;
	return 0xE1;
yy454:
	++cr;
	return 0xE2;
yy456:
	++cr;
	return 0xE3;
yy458:
	++cr;
	return 0xE4;
yy460:
	++cr;
	return 0xE5;
yy462:
	++cr;
	return 0xE6;
yy464:
	++cr;
	return 0xE7;
yy466:
	++cr;
	return 0xE8;
yy468:
	++cr;
	return 0xE9;
yy470:
	++cr;
	return 0xEA;
yy472:
	++cr;
	return 0xEB;
yy474:
	++cr;
	return 0xEC;
yy476:
	++cr;
	return 0xED;
yy478:
	++cr;
	return 0xEE;
yy480:
	++cr;
	return 0xEF;
yy482:
	++cr;
	return 0xF0;
yy484:
	++cr;
	return 0xF1;
yy486:
	++cr;
	return 0xF2;
yy488:
	++cr;
	return 0xF3;
yy490:
	++cr;
	return 0xF4;
yy492:
	++cr;
	return 0xF5;
yy494:
	++cr;
	return 0xF6;
yy496:
	++cr;
	return 0xF7;
yy498:
	++cr;
	return 0xF8;
yy500:
	++cr;
	return 0xF9;
yy502:
	++cr;
	return 0xFA;
yy504:
	++cr;
	return 0xFB;
yy506:
	++cr;
	return 0xFC;
yy508:
	++cr;
	return 0xFD;
yy510:
	++cr;
	return 0xFE;
yy512:
	++cr;
	return 0xFF;
}

}

int main(int argc, char** argv) {
	unsigned char buf[2];
	unsigned int ch = 0;
	buf[1] = 0u;

	printf("const uint asc2asc[256] =\n");
	printf("    {\n");
	for (;;) {
		if (ch % 16 == 0) {
			printf("        ");
		}
		buf[0] = ch++;
		printf("0x%02x", scan(buf));
		if (ch == 256) {
			printf("\n");
			break;
		}
		if (ch % 16 == 0) {
			printf(",\n");
		} else {
			printf(", ");
		}
	}
	printf("    };\n");
	return 0;
}
