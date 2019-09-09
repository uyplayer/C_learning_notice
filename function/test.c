#include "stdio.h"
#include "stdarg.h"

void fu(int,...);


int main(int argc, char const *argv[]) {
  /* code */
  fu(1,2,3,4,5,6,7,8,9,10,0);
  return 0;
}

void fu(int a,...) {
  /* code */
  va_list agrs;
  va_start(agrs,a);
  int agrmunents;
  int count=0;
  while (agrmunents=va_arg(argpointer,int)) {
    printf(“parameter%d:%d\n”, ++count, argument);
    /* code */
  }
}
