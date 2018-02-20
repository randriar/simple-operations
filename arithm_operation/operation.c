#include <stdio.h>
#include<stdlib.h>
#include "operation.h"
#include <math.h>


//Main
int main (int argc, char *argv[]){
  printf("  #### *** REPORT *** ####\n ");
  printf("  Name: Rindra N.\n");
  printf("         Randriamanantena\n");
  printf("  OPERATIONS\n\n\n");
  ADD(2102,250);
  printf("  \n");
  SUB(201,1024);
  printf("  \n");
  AND(23,250);
  printf("  \n");
  OR(91,250);
  printf("\n");
  XOR(23,1924);
  printf("\n");
  LSL(2012,5);
  printf("\n");
  LSR(12023,4);
  printf("\n");
  negate(0);
  printf("\n");
  logic();
  //printHexadecimal(23);
  return 0;
}
void logic(){
  for(int i=0;i<11;i++){
    int r=(int) pow(2.0,i);
    printf("2^%i=%i\n",i,r);
  }
}

void printBinary(int n){
  printf("    ");
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & n){
      printf("1");
    }else{
      printf("0");
    }
  }
  printf("  <=%i\n",n);
}

void printHexadecimal(int n){
  printf("0x%08X\n", n);
}

void ADD(int a,int b){
  printf("ADD(%i,%i)\n",a,b);
  int bits1[32];
  int bits2[32];

  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & a){
      bits1[i]=1;
    }else{
      bits1[i]=0;
    }
  }
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & b){
      bits2[i]=1;
    }else{
      bits2[i]=0;
    }
  }

  int carry[32];
  printf("   ");
  for( int i=31;i>=0;i--){
    if((bits1[i]+bits2[i])==2){
      carry[i]=1;
      printf("%i",carry[i]);
    }else {
      carry[i]=0;
      printf("%i",carry[i]);
    }
  }
  printf("   <=carry\n");
  printBinary(a);
  printBinary(b);
  printf("  =\n");
  printBinary(a+b);
  printf("\n");
}

void SUB(int a,int b){
  printf("SUB(%i,%i)\n",a,b);
  b=~b+1;
  int bits1[32];
  int bits2[32];

  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & a){
      bits1[i]=1;
    }else{
      bits1[i]=0;
    }
  }
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & b){
      bits2[i]=1;
    }else{
      bits2[i]=0;
    }
  }

  int carry[32];
  printf("   ");
  for( int i=31;i>=0;i--){
    if((bits1[i]+bits2[i])==2){
      carry[i]=1;
      printf("%i",carry[i]);
    }else {
      carry[i]=0;
      printf("%i",carry[i]);
    }
  }
  printf("   <=carry\n");
  printBinary(a);
  printBinary(b);
  printf("  =\n");
  printBinary(a+b);
  printf("\n");
}

void AND(int a,int b){
  printf("AND(%i,%i)\n",a,b);
  int bits1[32];
  int bits2[32];

  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & a){
      bits1[i]=1;
    }else{
      bits1[i]=0;
    }
  }
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & b){
      bits2[i]=1;
    }else{
      bits2[i]=0;
    }
  }
  printBinary(a);
  printBinary(b);
  printf("  =\n");
  printBinary(a&b);
  printf("\n");
}

void OR(int a,int b){
  printf("OR(%i,%i)\n",a,b);
  int bits1[32];
  int bits2[32];

  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & a){
      bits1[i]=1;
    }else{
      bits1[i]=0;
    }
  }
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & b){
      bits2[i]=1;
    }else{
      bits2[i]=0;
    }
  }
  printBinary(a);
  printBinary(b);
  printf("  =\n");
  printBinary(a|b);
  printf("\n");
}

void XOR(int a,int b){
  printf("XOR(%i,%i)\n",a,b);
  printf("By using DeMorgan's Law (which is: ~(x|y)=(~x & ~y)), \n");
  printf("XOR ==> (x & ~y) | (~x & y)= ~(~(x & ~y) & ~(~x & y))\n");
  int bits1[32];
  int bits2[32];

  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & a){
      bits1[i]=1;
    }else{
      bits1[i]=0;
    }
  }
  for(int i=31;i>=0;i--){
    if((int) pow(2.0,i) & b){
      bits2[i]=1;
    }else{
      bits2[i]=0;
    }
  }
  printBinary(a);
  printBinary(b);
  printf("  =\n");
  printBinary(a^b);
  printf("\n");
}

void LSL(int a,int n){
  printf("%i << %i\n",a,n);
  printBinary(a);
  printf("<<\n");
  printBinary(a<<n);
  printf("\n");
}

void LSR(int a,int n){
  printf("%i >> %i\n",a,n);
  printBinary(a);
  printf(">>\n");
  printBinary(a>>n);
  printf("\n");
}

void negate(int a){
    printf("NEGATE %i\n",a );
    printBinary(0);
    printf("==>\n");
    printBinary(~a);
}
