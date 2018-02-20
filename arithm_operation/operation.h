#ifndef OPERATION_H
#define OPERATION_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

/*** generate the structure *****************************/

void printBinary(int n);

void printDecimal();

void printHexadecimal(int n);

void ADD(int a,int b);

void SUB(int a,int b);

void AND(int a,int b);

void OR(int a,int b);

void XOR(int a,int b);

void LSL(int a,int n);
void LSR(int a,int n);
void negate(int a);
void logic();
#endif
