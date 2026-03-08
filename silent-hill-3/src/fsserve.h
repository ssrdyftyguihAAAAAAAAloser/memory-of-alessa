#ifndef FSSERVE_H
#define FSSERVE_H

#include "common.h"
#include "sif.h"

typedef struct unk_00488E50
{
    char unk0;
    char unk1;
    char unk2;
    char unk3;
    u_char unk4[0x1C];
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
} unk_00488E50;

void func_00154CD0(int arg2);
int func_00154D10(u_short arg0);
int func_00172EF0(u_short, void (*)(int), int);

extern int D_00488E40[];
extern int D_00484E40[];
extern int *D_00357978; // = (void*)&D_00488E40;
extern int D_00357980;  // = 0x4000;
extern unk_00488E50 D_00488E50[];
extern int D_00357928;
extern int D_00357930;
extern int D_00357940;
extern int D_00357950;
extern int D_00357970;

#endif
