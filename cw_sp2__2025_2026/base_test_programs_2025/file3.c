#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int data[8192] = {0};
int contextStack[8192] = {0}, contextStackIndex = 0;
int opStack[8192] = {0}, opStackIndex = 0, opTemp = 0;
int lastBindDataIndex = 0;

int main() {
    contextStackIndex = 0;
    opStackIndex = 0;
    opTemp = 0;
    lastBindDataIndex = 0;

    //";"

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"input"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"input"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //ident "_LCB"(as label) previous ":"
LABEL__0000018BB1B3BAD8:

    //";"

    //"if"

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2BEAA8;

    //"goto" previous ident "_LCE"(as label)
    goto LABEL__0000018BB1B42C28;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2BEAA8:

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"*"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex]; --opStackIndex;

    //"24"
    opStack[++opStackIndex] = opTemp = 0x00000018;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"_TMP"
    opStack[++opStackIndex] = opTemp = data[0x00000018];

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"+"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"goto" previous ident "_LCB"(as label)
    goto LABEL__0000018BB1B3BAD8;

    //null statement (non-context)

    //";"

    //ident "_LCE"(as label) previous ":"
LABEL__0000018BB1B42C28:

    //";"

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //ident "_LAB"(as label) previous ":"
LABEL__0000018BB1B42CE8:

    //";"

    //"if"

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2CE830;

    //"goto" previous ident "_LAE"(as label)
    goto LABEL__0000018BB1B316C8;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2CE830:

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //ident "_LBB"(as label) previous ":"
LABEL__0000018BB1B31788:

    //";"

    //"if"

    //"_CYB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2D4BF0;

    //"goto" previous ident "_LBE"(as label)
    goto LABEL__0000018BB1B50248;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2D4BF0:

    //"_XVA"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"+"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"_CYB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"+"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"goto" previous ident "_LBB"(as label)
    goto LABEL__0000018BB1B31788;

    //null statement (non-context)

    //";"

    //ident "_LBE"(as label) previous ":"
LABEL__0000018BB1B50248:

    //";"

    //"_CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"+"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"goto" previous ident "_LAB"(as label)
    goto LABEL__0000018BB1B42CE8;

    //null statement (non-context)

    //";"

    //ident "_LAE"(as label) previous ":"
LABEL__0000018BB1B316C8:

    //";"

    //"_XVA"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    return 0;
}