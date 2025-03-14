#ifndef __STC15_H__
#define __STC15_H__

#ifdef __C51__
sfr P0 = 0x80;
sbit P00 = P0 ^ 0;
sbit P01 = P0 ^ 1;
sbit P02 = P0 ^ 2;
sbit P03 = P0 ^ 3;
sbit P04 = P0 ^ 4;
sbit P05 = P0 ^ 5;
sbit P06 = P0 ^ 6;
sbit P07 = P0 ^ 7;

sfr SP = 0x81;
sfr DPL = 0x82;
sfr DPH = 0x83;
sfr S4CON = 0x84;
sfr S4BUF = 0x85;
sfr PCON = 0x87;

sfr TCON = 0x88;
sbit TF1 = TCON ^ 7;
sbit TR1 = TCON ^ 6;
sbit TF0 = TCON ^ 5;
sbit TR0 = TCON ^ 4;
sbit IE1 = TCON ^ 3;
sbit IT1 = TCON ^ 2;
sbit IE0 = TCON ^ 1;
sbit IT0 = TCON ^ 0;

sfr TMOD = 0x89;
sfr TL0 = 0x8A;
sfr TL1 = 0x8B;
sfr TH0 = 0x8C;
sfr TH1 = 0x8D;
sfr AUXR = 0x8E;
sfr INT_CLKO = 0x8F;

sfr P1 = 0x90;
sbit P10 = P1 ^ 0;
sbit P11 = P1 ^ 1;
sbit P12 = P1 ^ 2;
sbit P13 = P1 ^ 3;
sbit P14 = P1 ^ 4;
sbit P15 = P1 ^ 5;
sbit P16 = P1 ^ 6;
sbit P17 = P1 ^ 7;

sfr P1M1 = 0x91;
sfr P1M0 = 0x92;
sfr P0M1 = 0x93;
sfr P0M0 = 0x94;
sfr P2M1 = 0x95;
sfr P2M0 = 0x96;
sfr CLK_DIV = 0x97;

sfr SCON = 0x98;
sbit SM0 = SCON ^ 7;
sbit SM1 = SCON ^ 6;
sbit SM2 = SCON ^ 5;
sbit REN = SCON ^ 4;
sbit TB8 = SCON ^ 3;
sbit RB8 = SCON ^ 2;
sbit TI = SCON ^ 1;
sbit RI = SCON ^ 0;

sfr SBUF = 0x99;
sfr S2CON = 0x9A;
sfr S2BUF = 0x9B;
sfr P1ASF = 0x9D;

sfr P2 = 0xA0;
sbit P20 = P2 ^ 0;
sbit P21 = P2 ^ 1;
sbit P22 = P2 ^ 2;
sbit P23 = P2 ^ 3;
sbit P24 = P2 ^ 4;
sbit P25 = P2 ^ 5;
sbit P26 = P2 ^ 6;
sbit P27 = P2 ^ 7;

sfr BUS_SPEED = 0xA1;
sfr AUXR1 = 0xA2;
sfr P_SW1 = 0xA2;

sfr IE = 0xA8;
sbit EA = IE ^ 7;
sbit ELVD = IE ^ 6;
sbit EADC = IE ^ 5;
sbit ES = IE ^ 4;
sbit ET1 = IE ^ 3;
sbit EX1 = IE ^ 2;
sbit ET0 = IE ^ 1;
sbit EX0 = IE ^ 0;

sfr SADDR = 0xA9;
sfr WKTCL = 0xAA;
sfr WKTCH = 0xAB;
sfr S3CON = 0xAC;
sfr S3BUF = 0xAD;
sfr IE2 = 0xAF;

sfr P3 = 0xB0;
sbit P30 = P3 ^ 0;
sbit P31 = P3 ^ 1;
sbit P32 = P3 ^ 2;
sbit P33 = P3 ^ 3;
sbit P34 = P3 ^ 4;
sbit P35 = P3 ^ 5;
sbit P36 = P3 ^ 6;
sbit P37 = P3 ^ 7;

sbit RD = P3 ^ 7;
sbit WR = P3 ^ 6;
sbit T1 = P3 ^ 5;
sbit T0 = P3 ^ 4;
sbit INT1 = P3 ^ 3;
sbit INT0 = P3 ^ 2;
sbit TXD = P3 ^ 1;
sbit RXD = P3 ^ 0;

sfr P3M1 = 0xB1;
sfr P3M0 = 0xB2;
sfr P4M1 = 0xB3;
sfr P4M0 = 0xB4;
sfr IP2 = 0xB5;

sfr IP = 0xB8;
sbit PPCA = IP ^ 7;
sbit PLVD = IP ^ 6;
sbit PADC = IP ^ 5;
sbit PS = IP ^ 4;
sbit PT1 = IP ^ 3;
sbit PX1 = IP ^ 2;
sbit PT0 = IP ^ 1;
sbit PX0 = IP ^ 0;

sfr SADEN = 0xB9;
sfr P_SW2 = 0xBA;
sfr ADC_CONTR = 0xBC;
sfr ADC_RES = 0xBD;
sfr ADC_RESL = 0xBE;

sfr P4 = 0xC0;
sbit P40 = P4 ^ 0;
sbit P41 = P4 ^ 1;
sbit P42 = P4 ^ 2;
sbit P43 = P4 ^ 3;
sbit P44 = P4 ^ 4;
sbit P45 = P4 ^ 5;
sbit P46 = P4 ^ 6;
sbit P47 = P4 ^ 7;

sfr WDT_CONTR = 0xC1;
sfr IAP_DATA = 0xC2;
sfr IAP_ADDRH = 0xC3;
sfr IAP_ADDRL = 0xC4;
sfr IAP_CMD = 0xC5;
sfr IAP_TRIG = 0xC6;
sfr IAP_CONTR = 0xC7;

sfr P5 = 0xC8;
sbit P50 = P5 ^ 0;
sbit P51 = P5 ^ 1;
sbit P52 = P5 ^ 2;
sbit P53 = P5 ^ 3;
sbit P54 = P5 ^ 4;
sbit P55 = P5 ^ 5;
sbit P56 = P5 ^ 6;
sbit P57 = P5 ^ 7;

sfr P5M1 = 0xC9;
sfr P5M0 = 0xCA;
sfr P6M1 = 0xCB;
sfr P6M0 = 0xCC;
sfr SPSTAT = 0xCD;
sfr SPCTL = 0xCE;
sfr SPDAT = 0xCF;

sfr PSW = 0xD0;
sbit CY = PSW ^ 7;
sbit AC = PSW ^ 6;
sbit F0 = PSW ^ 5;
sbit RS1 = PSW ^ 4;
sbit RS0 = PSW ^ 3;
sbit OV = PSW ^ 2;
sbit F1 = PSW ^ 1;
sbit P = PSW ^ 0;

sfr T4T3M = 0xD1;
sfr T4H = 0xD2;
sfr T4L = 0xD3;
sfr T3H = 0xD4;
sfr T3L = 0xD5;
sfr T2H = 0xD6;
sfr T2L = 0xD7;

sfr T3T4M = 0xD1;
sfr TH4 = 0xD2;
sfr TL4 = 0xD3;
sfr TH3 = 0xD4;
sfr TL3 = 0xD5;
sfr TH2 = 0xD6;
sfr TL2 = 0xD7;

sfr CCON = 0xD8;
sbit CF = CCON ^ 7;
sbit CR = CCON ^ 6;
sbit CCF2 = CCON ^ 2;
sbit CCF1 = CCON ^ 1;
sbit CCF0 = CCON ^ 0;

sfr CMOD = 0xD9;
sfr CCAPM0 = 0xDA;
sfr CCAPM1 = 0xDB;
sfr CCAPM2 = 0xDC;
sfr ACC = 0xE0;
sfr P7M1 = 0xE1;
sfr P7M0 = 0xE2;
sfr CMPCR1 = 0xE6;
sfr CMPCR2 = 0xE7;

sfr P6 = 0xE8;
sbit P60 = P6 ^ 0;
sbit P61 = P6 ^ 1;
sbit P62 = P6 ^ 2;
sbit P63 = P6 ^ 3;
sbit P64 = P6 ^ 4;
sbit P65 = P6 ^ 5;
sbit P66 = P6 ^ 6;
sbit P67 = P6 ^ 7;

sfr CL = 0xE9;
sfr CCAP0L = 0xEA;
sfr CCAP1L = 0xEB;
sfr CCAP2L = 0xEC;
sfr B = 0xF0;
sfr PWMCFG = 0xF1;
sfr PCA_PWM0 = 0xF2;
sfr PCA_PWM1 = 0xF3;
sfr PCA_PWM2 = 0xF4;
sfr PWMCR = 0xF5;
sfr PWMIF = 0xF6;
sfr PWMFDCR = 0xF7;

sfr P7 = 0xF8;
sbit P70 = P7 ^ 0;
sbit P71 = P7 ^ 1;
sbit P72 = P7 ^ 2;
sbit P73 = P7 ^ 3;
sbit P74 = P7 ^ 4;
sbit P75 = P7 ^ 5;
sbit P76 = P7 ^ 6;
sbit P77 = P7 ^ 7;

sfr CH = 0xF9;
sfr CCAP0H = 0xFA;
sfr CCAP1H = 0xFB;
sfr CCAP2H = 0xFC;

#define PWMC (*(unsigned int volatile xdata *)0xfff0)
#define PWMCH (*(unsigned char volatile xdata *)0xfff0)
#define PWMCL (*(unsigned char volatile xdata *)0xfff1)
#define PWMCKS (*(unsigned char volatile xdata *)0xfff2)
#define PWM2T1 (*(unsigned int volatile xdata *)0xff00)
#define PWM2T1H (*(unsigned char volatile xdata *)0xff00)
#define PWM2T1L (*(unsigned char volatile xdata *)0xff01)
#define PWM2T2 (*(unsigned int volatile xdata *)0xff02)
#define PWM2T2H (*(unsigned char volatile xdata *)0xff02)
#define PWM2T2L (*(unsigned char volatile xdata *)0xff03)
#define PWM2CR (*(unsigned char volatile xdata *)0xff04)
#define PWM3T1 (*(unsigned int volatile xdata *)0xff10)
#define PWM3T1H (*(unsigned char volatile xdata *)0xff10)
#define PWM3T1L (*(unsigned char volatile xdata *)0xff11)
#define PWM3T2 (*(unsigned int volatile xdata *)0xff12)
#define PWM3T2H (*(unsigned char volatile xdata *)0xff12)
#define PWM3T2L (*(unsigned char volatile xdata *)0xff13)
#define PWM3CR (*(unsigned char volatile xdata *)0xff14)
#define PWM4T1 (*(unsigned int volatile xdata *)0xff20)
#define PWM4T1H (*(unsigned char volatile xdata *)0xff20)
#define PWM4T1L (*(unsigned char volatile xdata *)0xff21)
#define PWM4T2 (*(unsigned int volatile xdata *)0xff22)
#define PWM4T2H (*(unsigned char volatile xdata *)0xff22)
#define PWM4T2L (*(unsigned char volatile xdata *)0xff23)
#define PWM4CR (*(unsigned char volatile xdata *)0xff24)
#define PWM5T1 (*(unsigned int volatile xdata *)0xff30)
#define PWM5T1H (*(unsigned char volatile xdata *)0xff30)
#define PWM5T1L (*(unsigned char volatile xdata *)0xff31)
#define PWM5T2 (*(unsigned int volatile xdata *)0xff32)
#define PWM5T2H (*(unsigned char volatile xdata *)0xff32)
#define PWM5T2L (*(unsigned char volatile xdata *)0xff33)
#define PWM5CR (*(unsigned char volatile xdata *)0xff34)
#define PWM6T1 (*(unsigned int volatile xdata *)0xff40)
#define PWM6T1H (*(unsigned char volatile xdata *)0xff40)
#define PWM6T1L (*(unsigned char volatile xdata *)0xff41)
#define PWM6T2 (*(unsigned int volatile xdata *)0xff42)
#define PWM6T2H (*(unsigned char volatile xdata *)0xff42)
#define PWM6T2L (*(unsigned char volatile xdata *)0xff43)
#define PWM6CR (*(unsigned char volatile xdata *)0xff44)
#define PWM7T1 (*(unsigned int volatile xdata *)0xff50)
#define PWM7T1H (*(unsigned char volatile xdata *)0xff50)
#define PWM7T1L (*(unsigned char volatile xdata *)0xff51)
#define PWM7T2 (*(unsigned int volatile xdata *)0xff52)
#define PWM7T2H (*(unsigned char volatile xdata *)0xff52)
#define PWM7T2L (*(unsigned char volatile xdata *)0xff53)
#define PWM7CR (*(unsigned char volatile xdata *)0xff54)

#else
#ifdef SDCC
#define interrupt(x) __interrupt(x)
#define using(x) __using(x)

#define data __data
#define idata __idata
#define bdata __bdata
#define pdata __pdata
#define xdata __xdata
#define bit __bit
#define code __code
#endif

#ifdef __clang__
#define __sfr volatile unsigned char
#define __sbit volatile unsigned char
#define bit unsigned char
#define sbit(id, addr) unsigned char id
#define code const

#define __at(x)
#define interrupt(x)
#define using(x)
#define __xdata
#define __pdata
#define data
#define idata
#define bdata
#define xdata
#define pdata
#endif

__sfr __at(0x80) P0;
__sbit __at(0x80) P00;
__sbit __at(0x81) P01;
__sbit __at(0x82) P02;
__sbit __at(0x83) P03;
__sbit __at(0x84) P04;
__sbit __at(0x85) P05;
__sbit __at(0x86) P06;
__sbit __at(0x87) P07;

__sfr __at(0x81) SP;
__sfr __at(0x82) DPL;
__sfr __at(0x83) DPH;
__sfr __at(0x84) S4CON;
__sfr __at(0x85) S4BUF;
__sfr __at(0x87) PCON;

__sfr __at(0x88) TCON;
__sbit __at(0x8F) TF1;
__sbit __at(0x8E) TR1;
__sbit __at(0x8D) TF0;
__sbit __at(0x8C) TR0;
__sbit __at(0x8B) IE1;
__sbit __at(0x8A) IT1;
__sbit __at(0x89) IE0;
__sbit __at(0x88) IT0;

__sfr __at(0x89) TMOD;
__sfr __at(0x8A) TL0;
__sfr __at(0x8B) TL1;
__sfr __at(0x8C) TH0;
__sfr __at(0x8D) TH1;
__sfr __at(0x8E) AUXR;
__sfr __at(0x8F) INT_CLKO;

__sfr __at(0x90) P1;
__sbit __at(0x90) P10;
__sbit __at(0x91) P11;
__sbit __at(0x92) P12;
__sbit __at(0x93) P13;
__sbit __at(0x94) P14;
__sbit __at(0x95) P15;
__sbit __at(0x96) P16;
__sbit __at(0x97) P17;

__sfr __at(0x91) P1M1;
__sfr __at(0x92) P1M0;
__sfr __at(0x93) P0M1;
__sfr __at(0x94) P0M0;
__sfr __at(0x95) P2M1;
__sfr __at(0x96) P2M0;
__sfr __at(0x97) CLK_DIV;

__sfr __at(0x98) SCON;
__sbit __at(0x9F) SM0;
__sbit __at(0x9E) SM1;
__sbit __at(0x9D) SM2;
__sbit __at(0x9C) REN;
__sbit __at(0x9B) TB8;
__sbit __at(0x9A) RB8;
__sbit __at(0x99) TI;
__sbit __at(0x98) RI;

__sfr __at(0x99) SBUF;
__sfr __at(0x9A) S2CON;
__sfr __at(0x9B) S2BUF;
__sfr __at(0x9D) P1ASF;

__sfr __at(0xA0) P2;
__sbit __at(0xA0) P20;
__sbit __at(0xA1) P21;
__sbit __at(0xA2) P22;
__sbit __at(0xA3) P23;
__sbit __at(0xA4) P24;
__sbit __at(0xA5) P25;
__sbit __at(0xA6) P26;
__sbit __at(0xA7) P27;

__sfr __at(0xA1) BUS_SPEED;
__sfr __at(0xA2) AUXR1;
__sfr __at(0xA2) P_SW1;

__sfr __at(0xA8) IE;
__sbit __at(0xAF) EA;
__sbit __at(0xAE) ELVD;
__sbit __at(0xAD) EADC;
__sbit __at(0xAC) ES;
__sbit __at(0xAB) ET1;
__sbit __at(0xAA) EX1;
__sbit __at(0xA9) ET0;
__sbit __at(0xA8) EX0;

__sfr __at(0xA9) SADDR;
__sfr __at(0xAA) WKTCL;
__sfr __at(0xAB) WKTCH;
__sfr __at(0xAC) S3CON;
__sfr __at(0xAD) S3BUF;
__sfr __at(0xAF) IE2;

__sfr __at(0xB0) P3;
__sbit __at(0xB0) P30;
__sbit __at(0xB1) P31;
__sbit __at(0xB2) P32;
__sbit __at(0xB3) P33;
__sbit __at(0xB4) P34;
__sbit __at(0xB5) P35;
__sbit __at(0xB6) P36;
__sbit __at(0xB7) P37;

__sbit __at(0xB7) RD;
__sbit __at(0xB6) WR;
__sbit __at(0xB5) T1;
__sbit __at(0xB4) T0;
__sbit __at(0xB3) INT1;
__sbit __at(0xB2) INT0;
__sbit __at(0xB1) TXD;
__sbit __at(0xB0) RXD;

__sfr __at(0xB1) P3M1;
__sfr __at(0xB2) P3M0;
__sfr __at(0xB3) P4M1;
__sfr __at(0xB4) P4M0;
__sfr __at(0xB5) IP2;

__sfr __at(0xB8) IP;
__sbit __at(0xBF) PPCA;
__sbit __at(0xBE) PLVD;
__sbit __at(0xBD) PADC;
__sbit __at(0xBC) PS;
__sbit __at(0xBB) PT1;
__sbit __at(0xBA) PX1;
__sbit __at(0xB9) PT0;
__sbit __at(0xB8) PX0;

__sfr __at(0xB9) SADEN;
__sfr __at(0xBA) P_SW2;
__sfr __at(0xBC) ADC_CONTR;
__sfr __at(0xBD) ADC_RES;
__sfr __at(0xBE) ADC_RESL;

__sfr __at(0xC0) P4;
__sbit __at(0xC0) P40;
__sbit __at(0xC1) P41;
__sbit __at(0xC2) P42;
__sbit __at(0xC3) P43;
__sbit __at(0xC4) P44;
__sbit __at(0xC5) P45;
__sbit __at(0xC6) P46;
__sbit __at(0xC7) P47;

__sfr __at(0xC1) WDT_CONTR;
__sfr __at(0xC2) IAP_DATA;
__sfr __at(0xC3) IAP_ADDRH;
__sfr __at(0xC4) IAP_ADDRL;
__sfr __at(0xC5) IAP_CMD;
__sfr __at(0xC6) IAP_TRIG;
__sfr __at(0xC7) IAP_CONTR;

__sfr __at(0xC8) P5;
__sbit __at(0xC8) P50;
__sbit __at(0xC9) P51;
__sbit __at(0xCA) P52;
__sbit __at(0xCB) P53;
__sbit __at(0xCC) P54;
__sbit __at(0xCD) P55;
__sbit __at(0xCE) P56;
__sbit __at(0xCF) P57;

__sfr __at(0xC9) P5M1;
__sfr __at(0xCA) P5M0;
__sfr __at(0xCB) P6M1;
__sfr __at(0xCC) P6M0;
__sfr __at(0xCD) SPSTAT;
__sfr __at(0xCE) SPCTL;
__sfr __at(0xCF) SPDAT;

__sfr __at(0xD0) PSW;
__sbit __at(0xD7) CY;
__sbit __at(0xD6) AC;
__sbit __at(0xD5) F0;
__sbit __at(0xD4) RS1;
__sbit __at(0xD3) RS0;
__sbit __at(0xD2) OV;
__sbit __at(0xD1) F1;
__sbit __at(0xD0) P;

__sfr __at(0xD1) T4T3M;
__sfr __at(0xD2) T4H;
__sfr __at(0xD3) T4L;
__sfr __at(0xD4) T3H;
__sfr __at(0xD5) T3L;
__sfr __at(0xD6) T2H;
__sfr __at(0xD7) T2L;

__sfr __at(0xD1) T3T4M;
__sfr __at(0xD2) TH4;
__sfr __at(0xD3) TL4;
__sfr __at(0xD4) TH3;
__sfr __at(0xD5) TL3;
__sfr __at(0xD6) TH2;
__sfr __at(0xD7) TL2;

__sfr __at(0xD8) CCON;
__sbit __at(0xDF) CF;
__sbit __at(0xDE) CR;
__sbit __at(0xDA) CCF2;
__sbit __at(0xD9) CCF1;
__sbit __at(0xD8) CCF0;

__sfr __at(0xD9) CMOD;
__sfr __at(0xDA) CCAPM0;
__sfr __at(0xDB) CCAPM1;
__sfr __at(0xDC) CCAPM2;
__sfr __at(0xE0) ACC;
__sfr __at(0xE1) P7M1;
__sfr __at(0xE2) P7M0;
__sfr __at(0xE6) CMPCR1;
__sfr __at(0xE7) CMPCR2;

__sfr __at(0xE8) P6;
__sbit __at(0xE8) P60;
__sbit __at(0xE9) P61;
__sbit __at(0xEA) P62;
__sbit __at(0xEB) P63;
__sbit __at(0xEC) P64;
__sbit __at(0xED) P65;
__sbit __at(0xEE) P66;
__sbit __at(0xEF) P67;

__sfr __at(0xE9) CL;
__sfr __at(0xEA) CCAP0L;
__sfr __at(0xEB) CCAP1L;
__sfr __at(0xEC) CCAP2L;
__sfr __at(0xF0) B;
__sfr __at(0xF1) PWMCFG;
__sfr __at(0xF2) PCA_PWM0;
__sfr __at(0xF3) PCA_PWM1;
__sfr __at(0xF4) PCA_PWM2;
__sfr __at(0xF5) PWMCR;
__sfr __at(0xF6) PWMIF;
__sfr __at(0xF7) PWMFDCR;

__sfr __at(0xF8) P7;
__sbit __at(0xF8) P70;
__sbit __at(0xF9) P71;
__sbit __at(0xFA) P72;
__sbit __at(0xFB) P73;
__sbit __at(0xFC) P74;
__sbit __at(0xFD) P75;
__sbit __at(0xFE) P76;
__sbit __at(0xFF) P77;

__sfr __at(0xF9) CH;
__sfr __at(0xFA) CCAP0H;
__sfr __at(0xFB) CCAP1H;
__sfr __at(0xFC) CCAP2H;

__xdata volatile unsigned short __at(0xFFF0) PWMC;
__xdata volatile unsigned char __at(0xFFF0) PWMCH;
__xdata volatile unsigned char __at(0xFFF1) PWMCL;
__xdata volatile unsigned char __at(0xFFF2) PWMCKS;
__xdata volatile unsigned short __at(0xFF00) PWM2T1;
__xdata volatile unsigned char __at(0xFF00) PWM2T1H;
__xdata volatile unsigned char __at(0xFF01) PWM2T1L;
__xdata volatile unsigned short __at(0xFF02) PWM2T2;
__xdata volatile unsigned char __at(0xFF02) PWM2T2H;
__xdata volatile unsigned char __at(0xFF03) PWM2T2L;
__xdata volatile unsigned char __at(0xFF04) PWM2CR;
__xdata volatile unsigned short __at(0xFF10) PWM3T1;
__xdata volatile unsigned char __at(0xFF10) PWM3T1H;
__xdata volatile unsigned char __at(0xFF11) PWM3T1L;
__xdata volatile unsigned short __at(0xFF12) PWM3T2;
__xdata volatile unsigned char __at(0xFF12) PWM3T2H;
__xdata volatile unsigned char __at(0xFF13) PWM3T2L;
__xdata volatile unsigned char __at(0xFF14) PWM3CR;
__xdata volatile unsigned short __at(0xFF20) PWM4T1;
__xdata volatile unsigned char __at(0xFF20) PWM4T1H;
__xdata volatile unsigned char __at(0xFF21) PWM4T1L;
__xdata volatile unsigned short __at(0xFF22) PWM4T2;
__xdata volatile unsigned char __at(0xFF22) PWM4T2H;
__xdata volatile unsigned char __at(0xFF23) PWM4T2L;
__xdata volatile unsigned char __at(0xFF24) PWM4CR;
__xdata volatile unsigned short __at(0xFF30) PWM5T1;
__xdata volatile unsigned char __at(0xFF30) PWM5T1H;
__xdata volatile unsigned char __at(0xFF31) PWM5T1L;
__xdata volatile unsigned short __at(0xFF32) PWM5T2;
__xdata volatile unsigned char __at(0xFF32) PWM5T2H;
__xdata volatile unsigned char __at(0xFF33) PWM5T2L;
__xdata volatile unsigned char __at(0xFF34) PWM5CR;
__xdata volatile unsigned short __at(0xFF40) PWM6T1;
__xdata volatile unsigned char __at(0xFF40) PWM6T1H;
__xdata volatile unsigned char __at(0xFF41) PWM6T1L;
__xdata volatile unsigned short __at(0xFF42) PWM6T2;
__xdata volatile unsigned char __at(0xFF42) PWM6T2H;
__xdata volatile unsigned char __at(0xFF43) PWM6T2L;
__xdata volatile unsigned char __at(0xFF44) PWM6CR;
__xdata volatile unsigned short __at(0xFF50) PWM7T1;
__xdata volatile unsigned char __at(0xFF50) PWM7T1H;
__xdata volatile unsigned char __at(0xFF51) PWM7T1L;
__xdata volatile unsigned short __at(0xFF52) PWM7T2;
__xdata volatile unsigned char __at(0xFF52) PWM7T2H;
__xdata volatile unsigned char __at(0xFF53) PWM7T2L;
__xdata volatile unsigned char __at(0xFF54) PWM7CR;
#endif
#endif
