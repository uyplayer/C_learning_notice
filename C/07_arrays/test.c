#include "stdio.h"


#define NUM_OF_ARR_ELEMENTS 3

int main(int argc, char const *argv[]) {



  int MyArray[3];



  MyArray[0] = 12;
  MyArray[1] = 65;
  MyArray[2] = 987;


    for(int i=0; i < 3 ; i++)
  {
      printf("%d\n", i);
  }



  int MyArray[NUM_OF_ARR_ELEMENTS];

  for(int i=0; i <  NUM_OF_ARR_ELEMENTS; i++)
  {
      printf("%d\n", i);
  }

  return 0;
}
