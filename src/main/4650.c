#include "common.h"

extern s32 D_800E2010;
extern s32 D_800E2028;
extern s32 D_8013A040;
extern s32 D_8013B1F0;
extern s32 D_80138E90;

void func_800034E8(s32);
s32 func_80003A50(void);
void func_80003EE0(void);
void func_80004ABC(s32);
void func_80008018(void);
void func_800221A0(s32*, s32, void*, s32, s32*, s32);
void func_800222F0(s32*);
void func_80022440(s32);
void func_800227A0(s32, s32*, s32*, s32);
void func_80022A80(s32, s32);
s32 func_8001EF10(void);
s32 func_80022B60(void);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003A50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003B48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003DC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003EE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003FEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800040D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004560.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004714.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004798.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800049D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004ABC.s")

void func_80004D00(s32 arg0) {
    func_80022440(0xFE);
    func_80003EE0();
    func_800034E8(1);
    func_800227A0(0x96, &D_800E2010, &D_800E2028, 0x32);
    func_800221A0(&D_8013A040, 3, &func_80004ABC, arg0, &D_8013B1F0, 0x64);
    func_800222F0(&D_8013A040);
    func_80008018();
    func_80022A80(0, 0);
loop_1:
    goto loop_1;
}

void bootproc(void) {
    func_8001EF10();
    func_80022B60();
    func_80003A50();
    func_800221A0(&D_80138E90, 1, &func_80004D00, 0, &D_8013A040, 0xFF);
    func_800222F0(&D_80138E90);
}
