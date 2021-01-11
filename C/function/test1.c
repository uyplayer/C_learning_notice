#include "stdio.h"
#include "stdarg.h"

float avarage(int n_args,...);

int main(int argc, char const *argv[]) {
  /* code */


    float a=avarage(5,2,3,4,5,6,7,8,9);

    printf(" avarage = %f\n",a );

  return 0;
}

float avarage(int n_args,...){


  va_list myList;
  va_start(myList,n_args);
  int numbersAdded=0;
  int sum=0;

   printf("n_args =  %d ",n_args);  //  "n_args  is first elemnt in n_args
   /*
  avarage(5,2,3,4,5,6,7,8,9); thern  n_args=5
 avarage(2,2,3,4,5,6,7,8,9); thern  n_args=3
   */

  while (numbersAdded<n_args) {  // here is n_args=5 ; first element
    printf("n_args =  %d  \n",n_args);  //  "n_args =1  n_args =1 n_args =1 n_args =1  always firist element

    /* code */
    int number=va_arg(myList,int);
    sum+=number;
    numbersAdded+=1;
  }
va_end(myList);
float avg=(float)(sum) / (float)(numbersAdded);

return avg;

}
