#include "stdio.h"
int main(int argc, char const *argv[]) {

char y;
int z = 9;
//    char    range    :  -128     ~   +128    ;
//   if    char point[6] = { 1, 2, 3, 800, 5, 300 };    this  line will be  error   ,because ASCII  300 and 800  out of  range  of char (-128 ,128)

char point[6] = { 1, 2, 3, 4, 5, 5 };

/*
look at the  ASCII table ; you can find that   point[3])==4 ,  but in  the  table   it is  : 0000 0100
04
4
0x04
EOT (end of transmission)
传输结束 ;  unprintable  thing  so   printf(" c  : %c\n", point[3]) == 0

*/
printf(" c  : %c\n", point[3]);   // 0    why  ?

printf("d  : %d\n", point[3]);   //4

//examples of accessing outside the array. A compile error is not always raised

y = point[15];
printf("point[15]  :   %d\n", y);    //34
y = point[-4];
printf("point[-4]  :   %d\n", y);  //0
y = point[z];
printf("point[-z]  :   %d\n", y);  // - 100

printf("-------------ok------------------\n" );

/*



*/


  return 0;
}
