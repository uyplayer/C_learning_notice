#include "stdio.h"
int main(int argc, char const *argv[]) {

int i =9;  //  big scope

{

printf("before %d\n",i );  //9

int i=4;

printf("after  %d \n",i );  //4

}

printf("out of blook   %d\n",i );  // 9

  return 0;
}
