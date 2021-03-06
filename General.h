#ifndef GENERAL_IMPORT
#define GENERAL_IMPORT

#define BIT_31                       (1 << 31)
#define BIT_30                       (1 << 30)
#define BIT_29                       (1 << 29)
#define BIT_28                       (1 << 28)
#define BIT_27                       (1 << 27)
#define BIT_26                       (1 << 26)
#define BIT_25                       (1 << 25)
#define BIT_24                       (1 << 24)
#define BIT_23                       (1 << 23)
#define BIT_22                       (1 << 22)
#define BIT_21                       (1 << 21)
#define BIT_20                       (1 << 20)
#define BIT_19                       (1 << 19)
#define BIT_18                       (1 << 18)
#define BIT_17                       (1 << 17)
#define BIT_16                       (1 << 16)
#define BIT_15                       (1 << 15)
#define BIT_14                       (1 << 14)
#define BIT_13                       (1 << 13)
#define BIT_12                       (1 << 12)
#define BIT_11                       (1 << 11)
#define BIT_10                       (1 << 10)
#define BIT_9                        (1 << 9)
#define BIT_8                        (1 << 8)
#define BIT_7                        (1 << 7)
#define BIT_6                        (1 << 6)
#define BIT_5                        (1 << 5)
#define BIT_4                        (1 << 4)
#define BIT_3                        (1 << 3)
#define BIT_2                        (1 << 2)
#define BIT_1                        (1 << 1)
#define BIT_0                        (1 << 0)

#define CLK_FREQ 40000000
#define PBCLK_FREQ 10000000

#define ALL_DIGITAL_IO() (ANSELA=0,ANSELB=0,ANSELC=0,ANSELD=0,ANSELE=0,ANSELF=0,ANSELG = 0)
#define ENABLE_MULTIVECTOR_INTERRUPTS() \
{ \
    unsigned int val = 0;\
    asm volatile("mfc0 %0,$13":"=r"(val));  \
    val |= 0x00800000;  \
    asm volatile("mtc0 %0,$13" : "+r"(val)); \
    INTCONbits.MVEC = 1; \
    __builtin_enable_interrupts(); \
}
#endif

