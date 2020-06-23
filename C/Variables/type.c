#include "stdio.h"

int main(int argc, char const *argv[]) {


   int a,b,c,d=10;

  // remember that  we have to use single quet; not bouble quet ; if double quets, it is an error
  /*
   char c ="a"  // error  , it is double qutes
  */

   char t='a';

   // blow is the number as character

   char k=97; /* in ASCII, 97 = 'a' */

  // we can use the same speaial thing blow  as we can ; these are the same character

   char n='\n';
   char j='\t';

   printf("it is ok \n");

    // string  usally in double quest

   const char MY_CONSTANT_PEDANTIC_ITCH[] = "learn the usage context.\n";
   printf("Square brackets after a variable name means it is a pointer to a string of memory blocks the size of the type of the array element.\n");


   // size_t类型是表示sizeof操作符执行结果的无符号整数类型。size_t类型的变量保证具有足够的精度，能够表示一个对象的长度。size_t类型的限制是由SIZE_MAX宏指定的。

   size_t size ;
   int i ;
   size = sizeof(i);
   printf("siz is = %lu bytes \n", size);



   /*
   unsigned  and signed
    In all of the types described above, one bit is used to indicate the sign (positive or negative) of a value. If you decide that a variable will never hold a negative value, you may use the unsigned modifier to use that one bit for storing other data, effectively doubling the range of values while mandating that those values be positive. The unsigned specifier also may be used without a trailing int, in which case the size defaults to that of an int. There is also a signed modifier which is the opposite, but it is not necessary, except for certain uses of char, and seldom used since all types (except char) are signed by default.

   */


   unsigned short int usi;  /* fully qualified -- unsigned short int */
   short si;                /* short int */
   unsigned long uli;       /* unsigned long int */

   return 0;
}
