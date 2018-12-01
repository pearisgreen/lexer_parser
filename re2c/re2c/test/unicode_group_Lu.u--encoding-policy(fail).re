#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lu:
	/*!re2c
		re2c:yyfill:enable = 0;
		Lu = [\x41-\x5a\xc0-\xd6\xd8-\xde\u0100-\u0100\u0102-\u0102\u0104-\u0104\u0106-\u0106\u0108-\u0108\u010a-\u010a\u010c-\u010c\u010e-\u010e\u0110-\u0110\u0112-\u0112\u0114-\u0114\u0116-\u0116\u0118-\u0118\u011a-\u011a\u011c-\u011c\u011e-\u011e\u0120-\u0120\u0122-\u0122\u0124-\u0124\u0126-\u0126\u0128-\u0128\u012a-\u012a\u012c-\u012c\u012e-\u012e\u0130-\u0130\u0132-\u0132\u0134-\u0134\u0136-\u0136\u0139-\u0139\u013b-\u013b\u013d-\u013d\u013f-\u013f\u0141-\u0141\u0143-\u0143\u0145-\u0145\u0147-\u0147\u014a-\u014a\u014c-\u014c\u014e-\u014e\u0150-\u0150\u0152-\u0152\u0154-\u0154\u0156-\u0156\u0158-\u0158\u015a-\u015a\u015c-\u015c\u015e-\u015e\u0160-\u0160\u0162-\u0162\u0164-\u0164\u0166-\u0166\u0168-\u0168\u016a-\u016a\u016c-\u016c\u016e-\u016e\u0170-\u0170\u0172-\u0172\u0174-\u0174\u0176-\u0176\u0178-\u0179\u017b-\u017b\u017d-\u017d\u0181-\u0182\u0184-\u0184\u0186-\u0187\u0189-\u018b\u018e-\u0191\u0193-\u0194\u0196-\u0198\u019c-\u019d\u019f-\u01a0\u01a2-\u01a2\u01a4-\u01a4\u01a6-\u01a7\u01a9-\u01a9\u01ac-\u01ac\u01ae-\u01af\u01b1-\u01b3\u01b5-\u01b5\u01b7-\u01b8\u01bc-\u01bc\u01c4-\u01c4\u01c7-\u01c7\u01ca-\u01ca\u01cd-\u01cd\u01cf-\u01cf\u01d1-\u01d1\u01d3-\u01d3\u01d5-\u01d5\u01d7-\u01d7\u01d9-\u01d9\u01db-\u01db\u01de-\u01de\u01e0-\u01e0\u01e2-\u01e2\u01e4-\u01e4\u01e6-\u01e6\u01e8-\u01e8\u01ea-\u01ea\u01ec-\u01ec\u01ee-\u01ee\u01f1-\u01f1\u01f4-\u01f4\u01f6-\u01f8\u01fa-\u01fa\u01fc-\u01fc\u01fe-\u01fe\u0200-\u0200\u0202-\u0202\u0204-\u0204\u0206-\u0206\u0208-\u0208\u020a-\u020a\u020c-\u020c\u020e-\u020e\u0210-\u0210\u0212-\u0212\u0214-\u0214\u0216-\u0216\u0218-\u0218\u021a-\u021a\u021c-\u021c\u021e-\u021e\u0220-\u0220\u0222-\u0222\u0224-\u0224\u0226-\u0226\u0228-\u0228\u022a-\u022a\u022c-\u022c\u022e-\u022e\u0230-\u0230\u0232-\u0232\u023a-\u023b\u023d-\u023e\u0241-\u0241\u0243-\u0246\u0248-\u0248\u024a-\u024a\u024c-\u024c\u024e-\u024e\u0370-\u0370\u0372-\u0372\u0376-\u0376\u0386-\u0386\u0388-\u038a\u038c-\u038c\u038e-\u038f\u0391-\u03a1\u03a3-\u03ab\u03cf-\u03cf\u03d2-\u03d4\u03d8-\u03d8\u03da-\u03da\u03dc-\u03dc\u03de-\u03de\u03e0-\u03e0\u03e2-\u03e2\u03e4-\u03e4\u03e6-\u03e6\u03e8-\u03e8\u03ea-\u03ea\u03ec-\u03ec\u03ee-\u03ee\u03f4-\u03f4\u03f7-\u03f7\u03f9-\u03fa\u03fd-\u042f\u0460-\u0460\u0462-\u0462\u0464-\u0464\u0466-\u0466\u0468-\u0468\u046a-\u046a\u046c-\u046c\u046e-\u046e\u0470-\u0470\u0472-\u0472\u0474-\u0474\u0476-\u0476\u0478-\u0478\u047a-\u047a\u047c-\u047c\u047e-\u047e\u0480-\u0480\u048a-\u048a\u048c-\u048c\u048e-\u048e\u0490-\u0490\u0492-\u0492\u0494-\u0494\u0496-\u0496\u0498-\u0498\u049a-\u049a\u049c-\u049c\u049e-\u049e\u04a0-\u04a0\u04a2-\u04a2\u04a4-\u04a4\u04a6-\u04a6\u04a8-\u04a8\u04aa-\u04aa\u04ac-\u04ac\u04ae-\u04ae\u04b0-\u04b0\u04b2-\u04b2\u04b4-\u04b4\u04b6-\u04b6\u04b8-\u04b8\u04ba-\u04ba\u04bc-\u04bc\u04be-\u04be\u04c0-\u04c1\u04c3-\u04c3\u04c5-\u04c5\u04c7-\u04c7\u04c9-\u04c9\u04cb-\u04cb\u04cd-\u04cd\u04d0-\u04d0\u04d2-\u04d2\u04d4-\u04d4\u04d6-\u04d6\u04d8-\u04d8\u04da-\u04da\u04dc-\u04dc\u04de-\u04de\u04e0-\u04e0\u04e2-\u04e2\u04e4-\u04e4\u04e6-\u04e6\u04e8-\u04e8\u04ea-\u04ea\u04ec-\u04ec\u04ee-\u04ee\u04f0-\u04f0\u04f2-\u04f2\u04f4-\u04f4\u04f6-\u04f6\u04f8-\u04f8\u04fa-\u04fa\u04fc-\u04fc\u04fe-\u04fe\u0500-\u0500\u0502-\u0502\u0504-\u0504\u0506-\u0506\u0508-\u0508\u050a-\u050a\u050c-\u050c\u050e-\u050e\u0510-\u0510\u0512-\u0512\u0514-\u0514\u0516-\u0516\u0518-\u0518\u051a-\u051a\u051c-\u051c\u051e-\u051e\u0520-\u0520\u0522-\u0522\u0524-\u0524\u0526-\u0526\u0531-\u0556\u10a0-\u10c5\u1e00-\u1e00\u1e02-\u1e02\u1e04-\u1e04\u1e06-\u1e06\u1e08-\u1e08\u1e0a-\u1e0a\u1e0c-\u1e0c\u1e0e-\u1e0e\u1e10-\u1e10\u1e12-\u1e12\u1e14-\u1e14\u1e16-\u1e16\u1e18-\u1e18\u1e1a-\u1e1a\u1e1c-\u1e1c\u1e1e-\u1e1e\u1e20-\u1e20\u1e22-\u1e22\u1e24-\u1e24\u1e26-\u1e26\u1e28-\u1e28\u1e2a-\u1e2a\u1e2c-\u1e2c\u1e2e-\u1e2e\u1e30-\u1e30\u1e32-\u1e32\u1e34-\u1e34\u1e36-\u1e36\u1e38-\u1e38\u1e3a-\u1e3a\u1e3c-\u1e3c\u1e3e-\u1e3e\u1e40-\u1e40\u1e42-\u1e42\u1e44-\u1e44\u1e46-\u1e46\u1e48-\u1e48\u1e4a-\u1e4a\u1e4c-\u1e4c\u1e4e-\u1e4e\u1e50-\u1e50\u1e52-\u1e52\u1e54-\u1e54\u1e56-\u1e56\u1e58-\u1e58\u1e5a-\u1e5a\u1e5c-\u1e5c\u1e5e-\u1e5e\u1e60-\u1e60\u1e62-\u1e62\u1e64-\u1e64\u1e66-\u1e66\u1e68-\u1e68\u1e6a-\u1e6a\u1e6c-\u1e6c\u1e6e-\u1e6e\u1e70-\u1e70\u1e72-\u1e72\u1e74-\u1e74\u1e76-\u1e76\u1e78-\u1e78\u1e7a-\u1e7a\u1e7c-\u1e7c\u1e7e-\u1e7e\u1e80-\u1e80\u1e82-\u1e82\u1e84-\u1e84\u1e86-\u1e86\u1e88-\u1e88\u1e8a-\u1e8a\u1e8c-\u1e8c\u1e8e-\u1e8e\u1e90-\u1e90\u1e92-\u1e92\u1e94-\u1e94\u1e9e-\u1e9e\u1ea0-\u1ea0\u1ea2-\u1ea2\u1ea4-\u1ea4\u1ea6-\u1ea6\u1ea8-\u1ea8\u1eaa-\u1eaa\u1eac-\u1eac\u1eae-\u1eae\u1eb0-\u1eb0\u1eb2-\u1eb2\u1eb4-\u1eb4\u1eb6-\u1eb6\u1eb8-\u1eb8\u1eba-\u1eba\u1ebc-\u1ebc\u1ebe-\u1ebe\u1ec0-\u1ec0\u1ec2-\u1ec2\u1ec4-\u1ec4\u1ec6-\u1ec6\u1ec8-\u1ec8\u1eca-\u1eca\u1ecc-\u1ecc\u1ece-\u1ece\u1ed0-\u1ed0\u1ed2-\u1ed2\u1ed4-\u1ed4\u1ed6-\u1ed6\u1ed8-\u1ed8\u1eda-\u1eda\u1edc-\u1edc\u1ede-\u1ede\u1ee0-\u1ee0\u1ee2-\u1ee2\u1ee4-\u1ee4\u1ee6-\u1ee6\u1ee8-\u1ee8\u1eea-\u1eea\u1eec-\u1eec\u1eee-\u1eee\u1ef0-\u1ef0\u1ef2-\u1ef2\u1ef4-\u1ef4\u1ef6-\u1ef6\u1ef8-\u1ef8\u1efa-\u1efa\u1efc-\u1efc\u1efe-\u1efe\u1f08-\u1f0f\u1f18-\u1f1d\u1f28-\u1f2f\u1f38-\u1f3f\u1f48-\u1f4d\u1f59-\u1f59\u1f5b-\u1f5b\u1f5d-\u1f5d\u1f5f-\u1f5f\u1f68-\u1f6f\u1fb8-\u1fbb\u1fc8-\u1fcb\u1fd8-\u1fdb\u1fe8-\u1fec\u1ff8-\u1ffb\u2102-\u2102\u2107-\u2107\u210b-\u210d\u2110-\u2112\u2115-\u2115\u2119-\u211d\u2124-\u2124\u2126-\u2126\u2128-\u2128\u212a-\u212d\u2130-\u2133\u213e-\u213f\u2145-\u2145\u2183-\u2183\u2c00-\u2c2e\u2c60-\u2c60\u2c62-\u2c64\u2c67-\u2c67\u2c69-\u2c69\u2c6b-\u2c6b\u2c6d-\u2c70\u2c72-\u2c72\u2c75-\u2c75\u2c7e-\u2c80\u2c82-\u2c82\u2c84-\u2c84\u2c86-\u2c86\u2c88-\u2c88\u2c8a-\u2c8a\u2c8c-\u2c8c\u2c8e-\u2c8e\u2c90-\u2c90\u2c92-\u2c92\u2c94-\u2c94\u2c96-\u2c96\u2c98-\u2c98\u2c9a-\u2c9a\u2c9c-\u2c9c\u2c9e-\u2c9e\u2ca0-\u2ca0\u2ca2-\u2ca2\u2ca4-\u2ca4\u2ca6-\u2ca6\u2ca8-\u2ca8\u2caa-\u2caa\u2cac-\u2cac\u2cae-\u2cae\u2cb0-\u2cb0\u2cb2-\u2cb2\u2cb4-\u2cb4\u2cb6-\u2cb6\u2cb8-\u2cb8\u2cba-\u2cba\u2cbc-\u2cbc\u2cbe-\u2cbe\u2cc0-\u2cc0\u2cc2-\u2cc2\u2cc4-\u2cc4\u2cc6-\u2cc6\u2cc8-\u2cc8\u2cca-\u2cca\u2ccc-\u2ccc\u2cce-\u2cce\u2cd0-\u2cd0\u2cd2-\u2cd2\u2cd4-\u2cd4\u2cd6-\u2cd6\u2cd8-\u2cd8\u2cda-\u2cda\u2cdc-\u2cdc\u2cde-\u2cde\u2ce0-\u2ce0\u2ce2-\u2ce2\u2ceb-\u2ceb\u2ced-\u2ced\ua640-\ua640\ua642-\ua642\ua644-\ua644\ua646-\ua646\ua648-\ua648\ua64a-\ua64a\ua64c-\ua64c\ua64e-\ua64e\ua650-\ua650\ua652-\ua652\ua654-\ua654\ua656-\ua656\ua658-\ua658\ua65a-\ua65a\ua65c-\ua65c\ua65e-\ua65e\ua660-\ua660\ua662-\ua662\ua664-\ua664\ua666-\ua666\ua668-\ua668\ua66a-\ua66a\ua66c-\ua66c\ua680-\ua680\ua682-\ua682\ua684-\ua684\ua686-\ua686\ua688-\ua688\ua68a-\ua68a\ua68c-\ua68c\ua68e-\ua68e\ua690-\ua690\ua692-\ua692\ua694-\ua694\ua696-\ua696\ua722-\ua722\ua724-\ua724\ua726-\ua726\ua728-\ua728\ua72a-\ua72a\ua72c-\ua72c\ua72e-\ua72e\ua732-\ua732\ua734-\ua734\ua736-\ua736\ua738-\ua738\ua73a-\ua73a\ua73c-\ua73c\ua73e-\ua73e\ua740-\ua740\ua742-\ua742\ua744-\ua744\ua746-\ua746\ua748-\ua748\ua74a-\ua74a\ua74c-\ua74c\ua74e-\ua74e\ua750-\ua750\ua752-\ua752\ua754-\ua754\ua756-\ua756\ua758-\ua758\ua75a-\ua75a\ua75c-\ua75c\ua75e-\ua75e\ua760-\ua760\ua762-\ua762\ua764-\ua764\ua766-\ua766\ua768-\ua768\ua76a-\ua76a\ua76c-\ua76c\ua76e-\ua76e\ua779-\ua779\ua77b-\ua77b\ua77d-\ua77e\ua780-\ua780\ua782-\ua782\ua784-\ua784\ua786-\ua786\ua78b-\ua78b\ua78d-\ua78d\ua790-\ua790\ua7a0-\ua7a0\ua7a2-\ua7a2\ua7a4-\ua7a4\ua7a6-\ua7a6\ua7a8-\ua7a8\uff21-\uff3a\U00010400-\U00010427\U0001d400-\U0001d419\U0001d434-\U0001d44d\U0001d468-\U0001d481\U0001d49c-\U0001d49c\U0001d49e-\U0001d49f\U0001d4a2-\U0001d4a2\U0001d4a5-\U0001d4a6\U0001d4a9-\U0001d4ac\U0001d4ae-\U0001d4b5\U0001d4d0-\U0001d4e9\U0001d504-\U0001d505\U0001d507-\U0001d50a\U0001d50d-\U0001d514\U0001d516-\U0001d51c\U0001d538-\U0001d539\U0001d53b-\U0001d53e\U0001d540-\U0001d544\U0001d546-\U0001d546\U0001d54a-\U0001d550\U0001d56c-\U0001d585\U0001d5a0-\U0001d5b9\U0001d5d4-\U0001d5ed\U0001d608-\U0001d621\U0001d63c-\U0001d655\U0001d670-\U0001d689\U0001d6a8-\U0001d6c0\U0001d6e2-\U0001d6fa\U0001d71c-\U0001d734\U0001d756-\U0001d76e\U0001d790-\U0001d7a8\U0001d7ca-\U0001d7ca];
		Lu { goto Lu; }
		* { return YYCURSOR == limit; }
	*/
}
static const unsigned int chars_Lu [] = {0x41,0x5a,  0xc0,0xd6,  0xd8,0xde,  0x100,0x100,  0x102,0x102,  0x104,0x104,  0x106,0x106,  0x108,0x108,  0x10a,0x10a,  0x10c,0x10c,  0x10e,0x10e,  0x110,0x110,  0x112,0x112,  0x114,0x114,  0x116,0x116,  0x118,0x118,  0x11a,0x11a,  0x11c,0x11c,  0x11e,0x11e,  0x120,0x120,  0x122,0x122,  0x124,0x124,  0x126,0x126,  0x128,0x128,  0x12a,0x12a,  0x12c,0x12c,  0x12e,0x12e,  0x130,0x130,  0x132,0x132,  0x134,0x134,  0x136,0x136,  0x139,0x139,  0x13b,0x13b,  0x13d,0x13d,  0x13f,0x13f,  0x141,0x141,  0x143,0x143,  0x145,0x145,  0x147,0x147,  0x14a,0x14a,  0x14c,0x14c,  0x14e,0x14e,  0x150,0x150,  0x152,0x152,  0x154,0x154,  0x156,0x156,  0x158,0x158,  0x15a,0x15a,  0x15c,0x15c,  0x15e,0x15e,  0x160,0x160,  0x162,0x162,  0x164,0x164,  0x166,0x166,  0x168,0x168,  0x16a,0x16a,  0x16c,0x16c,  0x16e,0x16e,  0x170,0x170,  0x172,0x172,  0x174,0x174,  0x176,0x176,  0x178,0x179,  0x17b,0x17b,  0x17d,0x17d,  0x181,0x182,  0x184,0x184,  0x186,0x187,  0x189,0x18b,  0x18e,0x191,  0x193,0x194,  0x196,0x198,  0x19c,0x19d,  0x19f,0x1a0,  0x1a2,0x1a2,  0x1a4,0x1a4,  0x1a6,0x1a7,  0x1a9,0x1a9,  0x1ac,0x1ac,  0x1ae,0x1af,  0x1b1,0x1b3,  0x1b5,0x1b5,  0x1b7,0x1b8,  0x1bc,0x1bc,  0x1c4,0x1c4,  0x1c7,0x1c7,  0x1ca,0x1ca,  0x1cd,0x1cd,  0x1cf,0x1cf,  0x1d1,0x1d1,  0x1d3,0x1d3,  0x1d5,0x1d5,  0x1d7,0x1d7,  0x1d9,0x1d9,  0x1db,0x1db,  0x1de,0x1de,  0x1e0,0x1e0,  0x1e2,0x1e2,  0x1e4,0x1e4,  0x1e6,0x1e6,  0x1e8,0x1e8,  0x1ea,0x1ea,  0x1ec,0x1ec,  0x1ee,0x1ee,  0x1f1,0x1f1,  0x1f4,0x1f4,  0x1f6,0x1f8,  0x1fa,0x1fa,  0x1fc,0x1fc,  0x1fe,0x1fe,  0x200,0x200,  0x202,0x202,  0x204,0x204,  0x206,0x206,  0x208,0x208,  0x20a,0x20a,  0x20c,0x20c,  0x20e,0x20e,  0x210,0x210,  0x212,0x212,  0x214,0x214,  0x216,0x216,  0x218,0x218,  0x21a,0x21a,  0x21c,0x21c,  0x21e,0x21e,  0x220,0x220,  0x222,0x222,  0x224,0x224,  0x226,0x226,  0x228,0x228,  0x22a,0x22a,  0x22c,0x22c,  0x22e,0x22e,  0x230,0x230,  0x232,0x232,  0x23a,0x23b,  0x23d,0x23e,  0x241,0x241,  0x243,0x246,  0x248,0x248,  0x24a,0x24a,  0x24c,0x24c,  0x24e,0x24e,  0x370,0x370,  0x372,0x372,  0x376,0x376,  0x386,0x386,  0x388,0x38a,  0x38c,0x38c,  0x38e,0x38f,  0x391,0x3a1,  0x3a3,0x3ab,  0x3cf,0x3cf,  0x3d2,0x3d4,  0x3d8,0x3d8,  0x3da,0x3da,  0x3dc,0x3dc,  0x3de,0x3de,  0x3e0,0x3e0,  0x3e2,0x3e2,  0x3e4,0x3e4,  0x3e6,0x3e6,  0x3e8,0x3e8,  0x3ea,0x3ea,  0x3ec,0x3ec,  0x3ee,0x3ee,  0x3f4,0x3f4,  0x3f7,0x3f7,  0x3f9,0x3fa,  0x3fd,0x42f,  0x460,0x460,  0x462,0x462,  0x464,0x464,  0x466,0x466,  0x468,0x468,  0x46a,0x46a,  0x46c,0x46c,  0x46e,0x46e,  0x470,0x470,  0x472,0x472,  0x474,0x474,  0x476,0x476,  0x478,0x478,  0x47a,0x47a,  0x47c,0x47c,  0x47e,0x47e,  0x480,0x480,  0x48a,0x48a,  0x48c,0x48c,  0x48e,0x48e,  0x490,0x490,  0x492,0x492,  0x494,0x494,  0x496,0x496,  0x498,0x498,  0x49a,0x49a,  0x49c,0x49c,  0x49e,0x49e,  0x4a0,0x4a0,  0x4a2,0x4a2,  0x4a4,0x4a4,  0x4a6,0x4a6,  0x4a8,0x4a8,  0x4aa,0x4aa,  0x4ac,0x4ac,  0x4ae,0x4ae,  0x4b0,0x4b0,  0x4b2,0x4b2,  0x4b4,0x4b4,  0x4b6,0x4b6,  0x4b8,0x4b8,  0x4ba,0x4ba,  0x4bc,0x4bc,  0x4be,0x4be,  0x4c0,0x4c1,  0x4c3,0x4c3,  0x4c5,0x4c5,  0x4c7,0x4c7,  0x4c9,0x4c9,  0x4cb,0x4cb,  0x4cd,0x4cd,  0x4d0,0x4d0,  0x4d2,0x4d2,  0x4d4,0x4d4,  0x4d6,0x4d6,  0x4d8,0x4d8,  0x4da,0x4da,  0x4dc,0x4dc,  0x4de,0x4de,  0x4e0,0x4e0,  0x4e2,0x4e2,  0x4e4,0x4e4,  0x4e6,0x4e6,  0x4e8,0x4e8,  0x4ea,0x4ea,  0x4ec,0x4ec,  0x4ee,0x4ee,  0x4f0,0x4f0,  0x4f2,0x4f2,  0x4f4,0x4f4,  0x4f6,0x4f6,  0x4f8,0x4f8,  0x4fa,0x4fa,  0x4fc,0x4fc,  0x4fe,0x4fe,  0x500,0x500,  0x502,0x502,  0x504,0x504,  0x506,0x506,  0x508,0x508,  0x50a,0x50a,  0x50c,0x50c,  0x50e,0x50e,  0x510,0x510,  0x512,0x512,  0x514,0x514,  0x516,0x516,  0x518,0x518,  0x51a,0x51a,  0x51c,0x51c,  0x51e,0x51e,  0x520,0x520,  0x522,0x522,  0x524,0x524,  0x526,0x526,  0x531,0x556,  0x10a0,0x10c5,  0x1e00,0x1e00,  0x1e02,0x1e02,  0x1e04,0x1e04,  0x1e06,0x1e06,  0x1e08,0x1e08,  0x1e0a,0x1e0a,  0x1e0c,0x1e0c,  0x1e0e,0x1e0e,  0x1e10,0x1e10,  0x1e12,0x1e12,  0x1e14,0x1e14,  0x1e16,0x1e16,  0x1e18,0x1e18,  0x1e1a,0x1e1a,  0x1e1c,0x1e1c,  0x1e1e,0x1e1e,  0x1e20,0x1e20,  0x1e22,0x1e22,  0x1e24,0x1e24,  0x1e26,0x1e26,  0x1e28,0x1e28,  0x1e2a,0x1e2a,  0x1e2c,0x1e2c,  0x1e2e,0x1e2e,  0x1e30,0x1e30,  0x1e32,0x1e32,  0x1e34,0x1e34,  0x1e36,0x1e36,  0x1e38,0x1e38,  0x1e3a,0x1e3a,  0x1e3c,0x1e3c,  0x1e3e,0x1e3e,  0x1e40,0x1e40,  0x1e42,0x1e42,  0x1e44,0x1e44,  0x1e46,0x1e46,  0x1e48,0x1e48,  0x1e4a,0x1e4a,  0x1e4c,0x1e4c,  0x1e4e,0x1e4e,  0x1e50,0x1e50,  0x1e52,0x1e52,  0x1e54,0x1e54,  0x1e56,0x1e56,  0x1e58,0x1e58,  0x1e5a,0x1e5a,  0x1e5c,0x1e5c,  0x1e5e,0x1e5e,  0x1e60,0x1e60,  0x1e62,0x1e62,  0x1e64,0x1e64,  0x1e66,0x1e66,  0x1e68,0x1e68,  0x1e6a,0x1e6a,  0x1e6c,0x1e6c,  0x1e6e,0x1e6e,  0x1e70,0x1e70,  0x1e72,0x1e72,  0x1e74,0x1e74,  0x1e76,0x1e76,  0x1e78,0x1e78,  0x1e7a,0x1e7a,  0x1e7c,0x1e7c,  0x1e7e,0x1e7e,  0x1e80,0x1e80,  0x1e82,0x1e82,  0x1e84,0x1e84,  0x1e86,0x1e86,  0x1e88,0x1e88,  0x1e8a,0x1e8a,  0x1e8c,0x1e8c,  0x1e8e,0x1e8e,  0x1e90,0x1e90,  0x1e92,0x1e92,  0x1e94,0x1e94,  0x1e9e,0x1e9e,  0x1ea0,0x1ea0,  0x1ea2,0x1ea2,  0x1ea4,0x1ea4,  0x1ea6,0x1ea6,  0x1ea8,0x1ea8,  0x1eaa,0x1eaa,  0x1eac,0x1eac,  0x1eae,0x1eae,  0x1eb0,0x1eb0,  0x1eb2,0x1eb2,  0x1eb4,0x1eb4,  0x1eb6,0x1eb6,  0x1eb8,0x1eb8,  0x1eba,0x1eba,  0x1ebc,0x1ebc,  0x1ebe,0x1ebe,  0x1ec0,0x1ec0,  0x1ec2,0x1ec2,  0x1ec4,0x1ec4,  0x1ec6,0x1ec6,  0x1ec8,0x1ec8,  0x1eca,0x1eca,  0x1ecc,0x1ecc,  0x1ece,0x1ece,  0x1ed0,0x1ed0,  0x1ed2,0x1ed2,  0x1ed4,0x1ed4,  0x1ed6,0x1ed6,  0x1ed8,0x1ed8,  0x1eda,0x1eda,  0x1edc,0x1edc,  0x1ede,0x1ede,  0x1ee0,0x1ee0,  0x1ee2,0x1ee2,  0x1ee4,0x1ee4,  0x1ee6,0x1ee6,  0x1ee8,0x1ee8,  0x1eea,0x1eea,  0x1eec,0x1eec,  0x1eee,0x1eee,  0x1ef0,0x1ef0,  0x1ef2,0x1ef2,  0x1ef4,0x1ef4,  0x1ef6,0x1ef6,  0x1ef8,0x1ef8,  0x1efa,0x1efa,  0x1efc,0x1efc,  0x1efe,0x1efe,  0x1f08,0x1f0f,  0x1f18,0x1f1d,  0x1f28,0x1f2f,  0x1f38,0x1f3f,  0x1f48,0x1f4d,  0x1f59,0x1f59,  0x1f5b,0x1f5b,  0x1f5d,0x1f5d,  0x1f5f,0x1f5f,  0x1f68,0x1f6f,  0x1fb8,0x1fbb,  0x1fc8,0x1fcb,  0x1fd8,0x1fdb,  0x1fe8,0x1fec,  0x1ff8,0x1ffb,  0x2102,0x2102,  0x2107,0x2107,  0x210b,0x210d,  0x2110,0x2112,  0x2115,0x2115,  0x2119,0x211d,  0x2124,0x2124,  0x2126,0x2126,  0x2128,0x2128,  0x212a,0x212d,  0x2130,0x2133,  0x213e,0x213f,  0x2145,0x2145,  0x2183,0x2183,  0x2c00,0x2c2e,  0x2c60,0x2c60,  0x2c62,0x2c64,  0x2c67,0x2c67,  0x2c69,0x2c69,  0x2c6b,0x2c6b,  0x2c6d,0x2c70,  0x2c72,0x2c72,  0x2c75,0x2c75,  0x2c7e,0x2c80,  0x2c82,0x2c82,  0x2c84,0x2c84,  0x2c86,0x2c86,  0x2c88,0x2c88,  0x2c8a,0x2c8a,  0x2c8c,0x2c8c,  0x2c8e,0x2c8e,  0x2c90,0x2c90,  0x2c92,0x2c92,  0x2c94,0x2c94,  0x2c96,0x2c96,  0x2c98,0x2c98,  0x2c9a,0x2c9a,  0x2c9c,0x2c9c,  0x2c9e,0x2c9e,  0x2ca0,0x2ca0,  0x2ca2,0x2ca2,  0x2ca4,0x2ca4,  0x2ca6,0x2ca6,  0x2ca8,0x2ca8,  0x2caa,0x2caa,  0x2cac,0x2cac,  0x2cae,0x2cae,  0x2cb0,0x2cb0,  0x2cb2,0x2cb2,  0x2cb4,0x2cb4,  0x2cb6,0x2cb6,  0x2cb8,0x2cb8,  0x2cba,0x2cba,  0x2cbc,0x2cbc,  0x2cbe,0x2cbe,  0x2cc0,0x2cc0,  0x2cc2,0x2cc2,  0x2cc4,0x2cc4,  0x2cc6,0x2cc6,  0x2cc8,0x2cc8,  0x2cca,0x2cca,  0x2ccc,0x2ccc,  0x2cce,0x2cce,  0x2cd0,0x2cd0,  0x2cd2,0x2cd2,  0x2cd4,0x2cd4,  0x2cd6,0x2cd6,  0x2cd8,0x2cd8,  0x2cda,0x2cda,  0x2cdc,0x2cdc,  0x2cde,0x2cde,  0x2ce0,0x2ce0,  0x2ce2,0x2ce2,  0x2ceb,0x2ceb,  0x2ced,0x2ced,  0xa640,0xa640,  0xa642,0xa642,  0xa644,0xa644,  0xa646,0xa646,  0xa648,0xa648,  0xa64a,0xa64a,  0xa64c,0xa64c,  0xa64e,0xa64e,  0xa650,0xa650,  0xa652,0xa652,  0xa654,0xa654,  0xa656,0xa656,  0xa658,0xa658,  0xa65a,0xa65a,  0xa65c,0xa65c,  0xa65e,0xa65e,  0xa660,0xa660,  0xa662,0xa662,  0xa664,0xa664,  0xa666,0xa666,  0xa668,0xa668,  0xa66a,0xa66a,  0xa66c,0xa66c,  0xa680,0xa680,  0xa682,0xa682,  0xa684,0xa684,  0xa686,0xa686,  0xa688,0xa688,  0xa68a,0xa68a,  0xa68c,0xa68c,  0xa68e,0xa68e,  0xa690,0xa690,  0xa692,0xa692,  0xa694,0xa694,  0xa696,0xa696,  0xa722,0xa722,  0xa724,0xa724,  0xa726,0xa726,  0xa728,0xa728,  0xa72a,0xa72a,  0xa72c,0xa72c,  0xa72e,0xa72e,  0xa732,0xa732,  0xa734,0xa734,  0xa736,0xa736,  0xa738,0xa738,  0xa73a,0xa73a,  0xa73c,0xa73c,  0xa73e,0xa73e,  0xa740,0xa740,  0xa742,0xa742,  0xa744,0xa744,  0xa746,0xa746,  0xa748,0xa748,  0xa74a,0xa74a,  0xa74c,0xa74c,  0xa74e,0xa74e,  0xa750,0xa750,  0xa752,0xa752,  0xa754,0xa754,  0xa756,0xa756,  0xa758,0xa758,  0xa75a,0xa75a,  0xa75c,0xa75c,  0xa75e,0xa75e,  0xa760,0xa760,  0xa762,0xa762,  0xa764,0xa764,  0xa766,0xa766,  0xa768,0xa768,  0xa76a,0xa76a,  0xa76c,0xa76c,  0xa76e,0xa76e,  0xa779,0xa779,  0xa77b,0xa77b,  0xa77d,0xa77e,  0xa780,0xa780,  0xa782,0xa782,  0xa784,0xa784,  0xa786,0xa786,  0xa78b,0xa78b,  0xa78d,0xa78d,  0xa790,0xa790,  0xa7a0,0xa7a0,  0xa7a2,0xa7a2,  0xa7a4,0xa7a4,  0xa7a6,0xa7a6,  0xa7a8,0xa7a8,  0xff21,0xff3a,  0x10400,0x10427,  0x1d400,0x1d419,  0x1d434,0x1d44d,  0x1d468,0x1d481,  0x1d49c,0x1d49c,  0x1d49e,0x1d49f,  0x1d4a2,0x1d4a2,  0x1d4a5,0x1d4a6,  0x1d4a9,0x1d4ac,  0x1d4ae,0x1d4b5,  0x1d4d0,0x1d4e9,  0x1d504,0x1d505,  0x1d507,0x1d50a,  0x1d50d,0x1d514,  0x1d516,0x1d51c,  0x1d538,0x1d539,  0x1d53b,0x1d53e,  0x1d540,0x1d544,  0x1d546,0x1d546,  0x1d54a,0x1d550,  0x1d56c,0x1d585,  0x1d5a0,0x1d5b9,  0x1d5d4,0x1d5ed,  0x1d608,0x1d621,  0x1d63c,0x1d655,  0x1d670,0x1d689,  0x1d6a8,0x1d6c0,  0x1d6e2,0x1d6fa,  0x1d71c,0x1d734,  0x1d756,0x1d76e,  0x1d790,0x1d7a8,  0x1d7ca,0x1d7ca,  0x0,0x0};
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
	YYCTYPE * buffer_Lu = new YYCTYPE [1437];
	unsigned int buffer_len = encode_utf32 (chars_Lu, sizeof (chars_Lu) / sizeof (unsigned int), buffer_Lu);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lu), reinterpret_cast<const YYCTYPE *> (buffer_Lu + buffer_len)))
		printf("test 'Lu' failed\n");
	delete [] buffer_Lu;
	return 0;
}
