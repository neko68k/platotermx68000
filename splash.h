#include "protocol.h"

padByte splash[] = 
{
 0x1B,
0x02,
0X1B,
0X0C,
0X1B,
0X12,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1B,
0XE1,
0XFF,
0XFF,
0XFF,
0XFF,
0X1B,
0XE2,
0XC0,
0XC0,
0XC0,
0XC0,
0X1B,
0X0C,
0X1B,
0X12,
0X1D,
0XAF,
0XF0,
0XC0,
0X1B,
0X5A,
0X1B,
0XD1,
0XC0,
0X44,
0X41,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1B,
0X0C,
0X1B,
0X12,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1B,
0X5A,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1D,
0X2E,
0XF0,
0X21,
0XC0,
0X1B,
0X5A,
0X1D,
0X2D,
0XEE,
0XA0,
0XC9,
0XAF,
0X71,
0XC9,
0XF5,
0XCA,
0X77,
0XCC,
0XF9,
0X4E,
0XFA,
0XCF,
0X7B,
0XD4,
0X7B,
0X21,
0X44,
0XFA,
0XC9,
0X78,
0XCC,
0XF6,
0X50,
0X74,
0XD1,
0X71,
0X53,
0XEE,
0X55,
0X6C,
0X56,
0X66,
0XD7,
0XE1,
0XD7,
0X2E,
0XFC,
0X56,
0XF9,
0XD4,
0XF6,
0XD2,
0X74,
0X50,
0X72,
0X4D,
0XF0,
0XC9,
0XEE,
0XC3,
0XED,
0XA0,
0X5A,
0X59,
0X2D,
0XEE,
0X59,
0XC9,
0X1D,
0X2E,
0XFC,
0X59,
0XAF,
0X6C,
0X59,
0X6C,
0X21,
0XC0,
0X42,
0XEB,
0XC3,
0X6A,
0X44,
0X69,
0XC5,
0XE7,
0XC6,
0X65,
0X47,
0XE1,
0XC6,
0X2E,
0X7E,
0X44,
0XFC,
0X41,
0XC0,
0XFC,
0XA0,
0X59,
0X1D,
0X2D,
0XF6,
0X21,
0XDB,
0XAF,
0XFA,
0XDB,
0XFA,
0X22,
0X4B,
0X2D,
0XFC,
0X4B,
0XFC,
0XA3,
0X42,
0XEE,
0X42,
0XEE,
0X22,
0X44,
0X42,
0XF0,
0X21,
0X5F,
0X72,
0X5C,
0XF6,
0XDB,
0X1D,
0XEE,
0XA3,
0X41,
0XAF,
0XF5,
0XD7,
0X77,
0XD8,
0X78,
0X59,
0XFA,
0X5A,
0X7B,
0XDB,
0XFC,
0XDE,
0X7D,
0X24,
0XC0,
0X42,
0XFC,
0XC5,
0XFA,
0X48,
0X78,
0XC9,
0XF6,
0X4B,
0X2D,
0XEE,
0XA5,
0X41,
0XEE,
0X24,
0X50,
0X7D,
0XCC,
0X7D,
0XA3,
0XD7,
0XEE,
0XD1,
0X41,
0X1D,
0X2E,
0X6C,
0X5A,
0XAF,
0XED,
0X24,
0X41,
0X2E,
0X6C,
0X48,
0X6C,
0XA3,
0X5A,
0X1D,
0X2D,
0XEE,
0XA5,
0XC9,
0XAF,
0XED,
0XC9,
0XED,
0X24,
0X5A,
0X7B,
0X5A,
0X7B,
0XA6,
0X47,
0XED,
0X47,
0XED,
0XA5,
0X59,
0X2D,
0XEE,
0X59,
0XC9,
0X1D,
0X2E,
0XF0,
0X27,
0XC6,
0X1D,
0X2D,
0XEE,
0XC9,
0X6F,
0XC0,
0XF0,
0XA6,
0X5C,
0X71,
0XD8,
0XF5,
0X53,
0X78,
0XD1,
0XFC,
0X4D,
0X2E,
0X60,
0XCA,
0X63,
0XCA,
0X66,
0X48,
0X6C,
0XC6,
0X74,
0X44,
0XF5,
0X44,
0XF9,
0X44,
0X7D,
0XC5,
0XAF,
0XE1,
0XC6,
0X65,
0X48,
0XE8,
0XCA,
0X6C,
0XCC,
0XEE,
0X4E,
0XF0,
0X50,
0XF3,
0X53,
0XF5,
0X55,
0X77,
0XD8,
0X78,
0XDB,
0XFA,
0X5F,
0XFC,
0X27,
0XC5,
0X7D,
0X4D,
0X4E,
0XFC,
0XD4,
0X7B,
0X59,
0XF9,
0XDE,
0X77,
0X28,
0X41,
0XF6,
0XC3,
0X74,
0XC6,
0X71,
0X48,
0XEE,
0X4B,
0X6A,
0X4E,
0X65,
0X50,
0XE1,
0XD2,
0X2E,
0XFC,
0XD4,
0XFA,
0XD4,
0XF5,
0XD4,
0X72,
0XD4,
0X6C,
0X53,
0X69,
0XD2,
0XE4,
0X50,
0XE1,
0XCF,
0X2D,
0X7D,
0XCC,
0XFA,
0XC9,
0XF6,
0XC6,
0XF3,
0XC3,
0X71,
0X27,
0XDE,
0X6F,
0XDB,
0XEE,
0X56,
0XC9,
0X1D,
0XAF,
0X6C,
0XC9,
0X4D,
0XEB,
0XD2,
0X6A,
0X55,
0XE7,
0X5A,
0X65,
0XDD,
0XE1,
0X5F,
0X2E,
0X7D,
0X28,
0X41,
0XFA,
0X42,
0XF6,
0XC3,
0XF3,
0XC3,
0XED,
0X42,
0X6A,
0XC0,
0XE7,
0X27,
0XDE,
0XE4,
0XDD,
0X63,
0X5A,
0XE1,
0XD8,
0X2D,
0XFF,
0XD4,
0X7E,
0X50,
0X7D,
0X4D,
0XCA,
0X7E,
0XC5,
0X2E,
0X60,
0X42,
0XE2,
0XA6,
0X5F,
0X63,
0X5C,
0X66,
0X5A,
0X69,
0XD8,
0XEB,
0XD7,
0X6C,
0X56,
0XF0,
0X55,
0X74,
0X55,
0X78,
0X55,
0X7D,
0XD7,
0XAF,
0XE1,
0X59,
0XE4,
0X5C,
0X65,
0XDD,
0XE7,
0X5F,
0XE8,
0X27,
0XC0,
0X69,
0X41,
0X6A,
0XC3,
0XEB,
0XC5,
0X6C,
0XC9,
0X1D,
0X2D,
0XEE,
0XA9,
0X41,
0XAF,
0XED,
0X41,
0XED,
0X28,
0XD2,
0X7B,
0XD2,
0X7B,
0XA9,
0X5F,
0XED,
0X5F,
0XD1,
0X2D,
0XEE,
0XD1,
0X41,
0X1D,
0XFC,
0XAA,
0XC6,
0XAF,
0X71,
0XC6,
0X74,
0X47,
0X77,
0X48,
0X78,
0X48,
0XF9,
0XC9,
0XFA,
0XCA,
0X7B,
0XCC,
0XFC,
0XCF,
0XFC,
0X2B,
0XCC,
0X6C,
0XCC,
0X6C,
0XAA,
0X55,
0X2E,
0X7E,
0X55,
0X7E,
0X2B,
0X4B,
0XF0,
0X4B,
0XF0,
0XAA,
0X55,
0X2D,
0X7E,
0X55,
0X7E,
0X2B,
0XCC,
0XEE,
0XCC,
0XEE,
0XAA,
0X50,
0X6F,
0X4D,
0XF0,
0X4B,
0X71,
0XCA,
0X72,
0X48,
0X74,
0X47,
0XF6,
0XC6,
0XFC,
0XC6,
0X1D,
0XEE,
0X2B,
0X4E,
0XAF,
0X71,
0X4E,
0XF5,
0XCF,
0X77,
0X50,
0XD1,
0X78,
0XD2,
0XF9,
0X53,
0XFA,
0XD4,
0X7B,
0X55,
0X7B,
0XAC,
0XC9,
0X4B,
0XFA,
0X4E,
0XF9,
0XD1,
0X78,
0X53,
0X77,
0X55,
0XF6,
0X56,
0XF5,
0XD7,
0XF3,
0X59,
0X72,
0X5A,
0X71,
0XDB,
0X6F,
0X5C,
0XEE,
0XDD,
0X6C,
0XDE,
0X69,
0X5F,
0XE7,
0X5F,
0X65,
0X5F,
0X63,
0X5F,
0X2E,
0XFF,
0XDE,
0XFC,
0XDD,
0X7B,
0X5C,
0XF9,
0XDB,
0X77,
0X59,
0XF5,
0XD7,
0X74,
0X55,
0XF3,
0XD2,
0X72,
0XD1,
0X71,
0XCF,
0X2D,
0XEE,
0X2D,
0X44,
0XEE,
0XAC,
0X50,
0X2E,
0X6F,
0XC0,
0X71,
0X2B,
0X5F,
0X74,
0X5F,
0X77,
0XAC,
0XC0,
0XF9,
0X42,
0XFA,
0X44,
0X7B,
0XC5,
0XFC,
0XC6,
0X48,
0X7E,
0X4B,
0XAF,
0X60,
0X4D,
0XE2,
0X4D,
0X66,
0X4D,
0X69,
0XCC,
0XEB,
0XCA,
0XED,
0X48,
0XED,
0X2B,
0XDE,
0X2D,
0XEE,
0XDE,
0X4E,
0X1D,
0XEE,
0X2D,
0X42,
0XAF,
0XF5,
0X42,
0X78,
0XC3,
0XFA,
0XC5,
0X7B,
0X47,
0XFC,
0XCA,
0XCC,
0X7B,
0XD1,
0XFA,
0XD4,
0X78,
0X55,
0X77,
0X56,
0XF5,
0XD7,
0X2E,
0X63,
0X2E,
0XC6,
0XAF,
0XF5,
0XD2,
0X77,
0X53,
0XF9,
0X55,
0XFA,
0X56,
0X7B,
0XD7,
0XFC,
0XD8,
0X7D,
0XDB,
0X5F,
0XFC,
0XAF,
0X42,
0XFA,
0XC5,
0X78,
0X47,
0XF5,
0XC9,
0X72,
0XC9,
0X2D,
0XEE,
0XC9,
0XEE,
0X2E,
0XDB,
0XAF,
0X65,
0XDB,
0X2D,
0XF5,
0X4E,
0X72,
0X4E,
0XF0,
0XCC,
0XEE,
0XC9,
0XC3,
0XF0,
0XC0,
0X71,
0X2D,
0X5F,
0X72,
0XDE,
0X78,
0XDD,
0X7E,
0XDB,
0X2E,
0XE4,
0X59,
0XEB,
0XD7,
0XAF,
0XE4,
0XCF,
0X2D,
0XEE,
0XCF,
0X42,
0X1D,
0X2E,
0XF0,
0XAF,
0XDB,
0X1B,
0X59,
0X50,
0X41,
0XC0,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1D,
0XAC,
0XEB,
0XA9,
0XDE,
0X1B,
0X5A,
0X9F,
0X1B,
0X12,
0X1B,
0XCC,
0X1B,
0XCF,
0X1B,
0XCA,
0X66,
0X6F,
0X72,
0X1B,
0XCC,
0X1B,
0X4E,
0X1B,
0XCA,
0X1D,
0X22,
0XFA,
0XA0,
0XC0,
0X1B,
0X5A,
0X1D,
0XAA,
0X69,
0X22,
0X4B,
0X2B,
0X66,
0XA3,
0X48,
0XAA,
0X69,
0X5A,
0X69,
0X22,
0X4B,
0X1D,
0XED,
0X56,
0X7D,
0XA3,
0XC6,
0XED,
0XD1,
0XED,
0X22,
0X56,
0X1D,
0X69,
0X24,
0XC0,
0XAC,
0XE8,
0X22,
0XDB,
0XE8,
0X24,
0X4E,
0XAA,
0X69,
0XA5,
0XD2,
0X69,
0X24,
0XC0,
0X1D,
0XEE,
0XC3,
0XAC,
0XE4,
0XA3,
0X44,
0XE4,
0X24,
0XC9,
0XAA,
0XEE,
0XA5,
0XC9,
0XEE,
0X24,
0XC3,
0X1D,
0X2B,
0XEB,
0XA5,
0X44,
0XAC,
0XE8,
0X24,
0X53,
0XE8,
0XA6,
0X41,
0X2B,
0XEB,
0XA5,
0X44,
0X1D,
0XF3,
0XC5,
0XAC,
0XE4,
0X56,
0XE4,
0X24,
0X5C,
0X2B,
0XF3,
0XA5,
0XC5,
0X1D,
0XAA,
0XED,
0XA6,
0XCC,
0XEE,
0XC6,
0X6F,
0XC3,
0X71,
0X41,
0XF3,
0XC0,
0X74,
0XA5,
0X5F,
0XF6,
0X5F,
0XF9,
0X5F,
0X2B,
0XFA,
0XA6,
0XC5,
0X7D,
0XC6,
0XFF,
0X47,
0XAC,
0XE1,
0XC9,
0X63,
0XCC,
0XE4,
0XCF,
0X65,
0X53,
0X66,
0XD8,
0X66,
0X27,
0XCA,
0X65,
0X4E,
0X63,
0XD1,
0XE1,
0X53,
0X2B,
0X7E,
0XD4,
0X78,
0XD4,
0XF3,
0X53,
0X4B,
0X78,
0X4B,
0XFA,
0XCA,
0X7B,
0X48,
0X7B,
0XA6,
0XD7,
0X53,
0XF9,
0X50,
0X77,
0X4E,
0XF3,
0X4D,
0XEE,
0XCC,
0X6F,
0XCF,
0XF0,
0XD4,
0XF0,
0X27,
0XC5,
0X6F,
0XCA,
0XEE,
0X4D,
0XEB,
0X50,
0X69,
0XD1,
0X65,
0XD1,
0X60,
0XD1,
0XAA,
0XFC,
0X50,
0X78,
0XCF,
0X74,
0X4D,
0XF0,
0XCA,
0XEE,
0X47,
0XED,
0XC3,
0XED,
0XA6,
0XCC,
0X1D,
0XF5,
0XDD,
0X4E,
0XF6,
0X4B,
0X77,
0XC9,
0XFA,
0XC9,
0X2B,
0XE2,
0XCA,
0X66,
0XCC,
0XE7,
0XCF,
0XE8,
0X55,
0XE8,
0X27,
0X42,
0XE7,
0X44,
0X65,
0X47,
0X63,
0X47,
0XAA,
0XFC,
0XC6,
0XF9,
0XC5,
0XF6,
0X41,
0XF5,
0XA6,
0XDE,
0X1D,
0X74,
0X28,
0X53,
0XC3,
0XF5,
0X27,
0X5F,
0XF6,
0XDD,
0X77,
0X5C,
0XF9,
0XDB,
0XFC,
0XDB,
0XFF,
0X5C,
0X2B,
0X63,
0XDE,
0XE4,
0X5F,
0X65,
0X28,
0XC0,
0X66,
0XC3,
0X55,
0X65,
0X5A,
0XE2,
0X5C,
0XAA,
0XFF,
0X5C,
0X77,
0X5A,
0XF5,
0XD7,
0X74,
0X55,
0X53,
0X1D,
0X2B,
0XEE,
0XD7,
0XCA,
0XC5,
0X6F,
0XC3,
0X72,
0X42,
0X7B,
0XC3,
0X7D,
0XC6,
0X7E,
0X4B,
0XD8,
0XDB,
0X7D,
0XDE,
0X7B,
0XA9,
0XC0,
0X78,
0XC0,
0X71,
0X28,
0XDE,
0X6F,
0X5C,
0XEE,
0XD8,
0X1D,
0XAC,
0X66,
0XCA,
0X5F,
0X65,
0XA9,
0XC3,
0XE4,
0XC6,
0XE1,
0X48,
0X60,
0XC9,
0X2B,
0X7E,
0XC9,
0XFA,
0XC9,
0X74,
0X48,
0X6F,
0XC6,
0X6A,
0X42,
0X65,
0XC5,
0XE1,
0XC5,
0XAA,
0XFC,
0XC5,
0XF5,
0XC3,
0X71,
0X41,
0X6F,
0X28,
0XDE,
0XEE,
0XDB,
0XED,
0XD7,
0X41,
0XED,
0X27,
0XDD,
0X6F,
0XD7,
0X72,
0XD4,
0XF5,
0X53,
0XFA,
0X53,
0X2B,
0X60,
0XD4,
0X65,
0X55,
0XE8,
0XD8,
0X6A,
0XDB,
0XED,
0X59,
0X71,
0XD8,
0X77,
0X59,
0X7D,
0XDB,
0XAC,
0XE1,
0XDE,
0XE4,
0X28,
0X41,
0X66,
0XC9,
0X1D,
0XAA,
0XED,
0XAA,
0XC5,
0XED,
0XA9,
0X59,
0XEE,
0XD1,
0XF0,
0X4B,
0X74,
0XC9,
0XF9,
0XC9,
0X2B,
0X7B,
0XCF,
0XAC,
0XE1,
0X53,
0X63,
0X56,
0XE4,
0X59,
0X65,
0XDD,
0X66,
0XAA,
0X44,
0XCF,
0X65,
0X55,
0XE4,
0XD8,
0XE2,
0X5A,
0X60,
0X5C,
0X2B,
0XFC,
0XDD,
0X78,
0XDD,
0X71,
0X5C,
0XAA,
0X74,
0X56,
0X72,
0XD4,
0XF0,
0XD2,
0XEE,
0X4E,
0XED,
0XC9,
0XC5,
0X1D,
0XF5,
0XC3,
0XF5,
0XA9,
0XD7,
0XF6,
0X53,
0XF9,
0X50,
0XFC,
0X50,
0X2B,
0X77,
0X55,
0X7B,
0XD8,
0X7D,
0X5C,
0X7D,
0XAA,
0XCF,
0XFC,
0XD4,
0X77,
0X55,
0XAA,
0XFA,
0XCF,
0X77,
0X4D,
0XF6,
0X4B,
0XF5,
0X48,
0XC3,
0X1D,
0XF5,
0X2B,
0X59,
0X4B,
0XF6,
0X47,
0X78,
0XC5,
0XFA,
0X44,
0X2B,
0X66,
0XC6,
0XF9,
0X4B,
0X7B,
0X4D,
0XFC,
0X4E,
0X7D,
0XD1,
0X7D,
0XAC,
0X44,
0XFA,
0XC9,
0XF3,
0XC9,
0XAA,
0XF9,
0X42,
0X77,
0XC0,
0XF6,
0X2B,
0X5F,
0XF5,
0X5C,
0X59,
0X1D,
0XED,
0XDD,
0X48,
0X6F,
0X41,
0X72,
0XAA,
0XDD,
0XF9,
0X5C,
0X2B,
0XF3,
0X2B,
0X41,
0XFA,
0XC3,
0XFF,
0XC6,
0XAC,
0X63,
0XCA,
0XE4,
0X4E,
0X65,
0XD4,
0X66,
0X56,
0X66,
0XAC,
0X42,
0X65,
0XC9,
0XE4,
0X4B,
0XE1,
0XCF,
0X2B,
0X7D,
0XD1,
0X78,
0XD1,
0X74,
0XD1,
0X6C,
0XCF,
0XAA,
0X71,
0X48,
0X6F,
0X44,
0XEE,
0XC0,
0XED,
0X2B,
0XDD,
0X1D,
0XED,
0X2D,
0XCC,
0XC0,
0XED,
0XAC,
0X5A,
0X6F,
0X55,
0X71,
0XD2,
0XF5,
0X50,
0X78,
0X50,
0X7E,
0XD1,
0X2B,
0XFA,
0XD7,
0XAC,
0X60,
0X5A,
0XE2,
0XDD,
0X63,
0X5F,
0X65,
0X2D,
0XC3,
0X66,
0XC9,
0X56,
0XE4,
0XDE,
0X63,
0X2E,
0X41,
0X60,
0XC3,
0X2B,
0XFF,
0X44,
0XFC,
0XC5,
0XF9,
0XC5,
0X74,
0X44,
0XEB,
0XC3,
0XAA,
0XF3,
0X2D,
0X5C,
0X72,
0XDB,
0XF0,
0X59,
0XEE,
0X55,
0XED,
0XD1,
0XCC,
0X1D,
0XF5,
0X4E,
0XC0,
0XF6,
0XAC,
0XDB,
0X77,
0X59,
0X78,
0XD8,
0XFC,
0XD8,
0X2B,
0XF3,
0X5C,
0X78,
0XDE,
0XFC,
0X2D,
0X41,
0X7D,
0X44,
0XD8,
0XFC,
0XDB,
0XFA,
0X5C,
0X78,
0XDD,
0X72,
0X5C,
0XAA,
0X7B,
0XD7,
0X77,
0XD4,
0XF5,
0XD1,
0X4E,
0X1B,
0XD1,
0XC0,
0X50,
0XC0,
0X1D,
0XA9,
0X60,
0XA0,
0XC0,
0X1B,
0X5A,
0X9F,
0X1B,
0X12,
0XC3,
0X6F,
0XF0,
0XF9,
0X72,
0X69,
0XE7,
0XE8,
0X74,
0XA0,
0X28,
0X1B,
0XC3,
0XC0,
0X1B,
0X42,
0XA9,
0XA0,
0XB2,
0X30,
0XB1,
0XB8,
0XA0,
0XC9,
0XD2,
0X41,
0XD4,
0X41,
0X2E,
0XCF,
0X4E,
0XCC,
0XC9,
0X4E,
0XC5,
0X2E,
0XA0,
0XD4,
0XE8,
0X69,
0XF3,
0XA0,
0X74,
0X65,
0X72,
0XED,
0X69,
0XEE,
0XE1,
0X6C,
0XA0,
0X69,
0XF3,
0XA0,
0X72,
0X65,
0X6C,
0X65,
0XE1,
0XF3,
0X65,
0XE4,
0XA0,
0XF5,
0XEE,
0XE4,
0X65,
0X72,
0X8D,
0X74,
0XE8,
0X65,
0XA0,
0X47,
0X4E,
0X55,
0XA0,
0X50,
0XF5,
0XE2,
0X6C,
0X69,
0X63,
0XA0,
0XCC,
0X69,
0X63,
0X65,
0XEE,
0XF3,
0X65,
0X2E,
0XA0,
0XD2,
0XF5,
0XEE,
0XA0,
0X74,
0XE8,
0X65,
0XA0,
0XF0,
0X72,
0X6F,
0XE7,
0X72,
0XE1,
0XED,
0XA0,
0X47,
0X50,
0XCC,
0XAC,
0XA0,
0X66,
0X6F,
0X72,
0XA0,
0XE4,
0X65,
0X74,
0XE1,
0X69,
0X6C,
0XF3,
0X2E,
0X1D,
0X1B,
0X12,
0X28,
0XF0,
0X2E,
0X48,
0X1D,
0XA9,
0X74,
0XA0,
0XC0,
0X74,
0XAF,
0X5F,
0X1D,
0X28,
0X6C,
0XA0,
0XC0,
0X6C,
0XAF,
0X5F,
0x1B,
0x03
};

