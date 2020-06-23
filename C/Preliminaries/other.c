#include "stdio.h"

int main(int argc, char const *argv[]) {

int i = 6;


  // there is a block


  // most inportanly  =============   in the blow this block wo redefine i  : int i =122;   it is ok  because i  is in deffret block ;  if the same block it is not ok  ;

  {

    printf("before   i   in  block   %d\n", i);   // 6

  int i =122;

  printf("after  i   in  block   %d\n", i);   // 122


  }

  printf("outside   block   %d\n", i);   //    6  ;  block cannot effect here


  return 0;
}
