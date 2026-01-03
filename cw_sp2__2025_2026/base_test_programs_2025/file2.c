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

    //null statement (non-context)

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"input"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //null statement (non-context)

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"input"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"if"

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //"&&"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] && opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2BD5E0;

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2BD5E0:

    //"else" (part of "elseif")
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7EC2BF2F8;

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex]; --opStackIndex;

    //"&&"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] && opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "elseif")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2C20B0;

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"}" (after "then"-part of elseif-operator)
    opTemp = 1;
LABEL__AFTER_ELSE_00007FF7EC2BF2F8:
LABEL__AFTER_THEN_00007FF7EC2C20B0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7EC2C3DC8;

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF7EC2C3DC8:

    //null statement (non-context)

    //"_MAX"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //"if"

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"&&"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] && opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2CA188;

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2CA188:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7EC2CBA78;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF7EC2CBA78:

    //"if"

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] <= opStack[opStackIndex]; --opStackIndex;

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] <= opStack[opStackIndex]; --opStackIndex;

    //"||"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] || opStack[opStackIndex]; --opStackIndex;

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] <= opStack[opStackIndex]; --opStackIndex;

    //"||"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] || opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2D11C0;

    //"-1"
    opStack[++opStackIndex] = opTemp = 0xFFFFFFFF;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2D11C0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7EC2D2AB0;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF7EC2D2AB0:

    //"if"

    //"_AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"_BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"_CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"+"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] <= opStack[opStackIndex]; --opStackIndex;

    //"!!"
    opTemp = opStack[opStackIndex] = !opStack[opStackIndex];

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7EC2D6D30;

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF7EC2D6D30:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7EC2D8620;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"output"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF7EC2D8620:

    return 0;
}