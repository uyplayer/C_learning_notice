#include "stdio.h"

int main(int argc, char const *argv[]) {

static struct MyStruct *  vall,val2,val3,val4;

struct MyStruct *ASillyFunction(int b){

struct MyStruct *myReturn;

if (b==1) myReturn = &val1;
else if (b==2) myReturn = &val2;
else if (b==3) myReturn = &val3;
else myReturn = &val4;

return myReturn;

}



int c,d;

int *pj;

struct MyStruct astruct;
 struct MyStruct *bb;


 c = 10;
 pj=&c;
 d=*pj;
 pj=&d;
 *pj=12;

 bb= &astruct;

 (*bb).m_aNumber = 3;
 bb->num2 = 44.3;
 *pj = bb->m_aNumber;

  return 0;
}
