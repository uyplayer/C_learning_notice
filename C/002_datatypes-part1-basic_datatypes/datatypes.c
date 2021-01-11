#include "stdio.h"
#include "limits.h"   //  专门用于检测整型数据数据类型的表达值范围。
#include "float.h"   //提供了浮点型的范围和精度的宏，没有类型和函数的定义，一般用于数值分析。

/*
Note: sizeof() may give different output according to machine, we have run our program on 32 bit gcc compiler.

*/


int main(int argc, char const *argv[]) {

 printf("lets show the byte size of every basiv data type\n" );

 printf("\n\n\n\t\t  Here an example graphic and remember 1Byte == 8Bits  \n\n\n");

   printf("char %lu byte\n"  , sizeof(char) );
   printf("short in %lu  bytes \n",    sizeof(short int));
  printf("int  %lu bytes\n",sizeof(int) );

  printf("=============look at this================\n" );
  int a = 0;
    double d = 10.21;
    printf("%lu  bytes \n", sizeof(a + d));
    printf("%lu  bytes  \n",sizeof(3+4) );
    printf("%lu  bytes \n",sizeof("A") );



    printf("==================look at =======================\n" );


    printf("\nAnd now let's print what the min and max value are that each basic data type can hold\n");
printf("To do so we need some macros defined in a header file called limits.h\n\n");

printf("CHAR_BIT   number of bits in a char                = %d\n"   , CHAR_BIT  );
printf("SCHAR_MIN  minimum value for a signed char         = %d\n"   , SCHAR_MIN );
printf("SCHAR_MAX  maximum value for a signed char         = %d\n"   , SCHAR_MAX );
printf("UCHAR_MAX  maximum value for an unsigned char      = %u\n"   , UCHAR_MAX );
printf("CHAR_MIN   minimum value for a char                = %d\n"   , CHAR_MIN  );
printf("CHAR_MAX   maximum value for a char                = %d\n"   , CHAR_MAX  );
printf("SHRT_MIN   minimum value for a short               = %d\n"   , SHRT_MIN  );
printf("SHRT_MAX   maximum value for a short               = %d\n"   , SHRT_MAX  );
printf("USHRT_MAX  maximum value for an unsigned short     = %u\n"   , USHRT_MAX );
printf("INT_MIN    minimum value for an int                = %d\n"   , INT_MIN   );
printf("INT_MAX    maximum value for an int                = %d\n"   , INT_MAX   );
printf("UINT_MAX   maximum value for an unsigned int       = %u\n"   , UINT_MAX  );
printf("LONG_MIN   minimum value for a long                = %ld\n"  , LONG_MIN  );
printf("LONG_MAX   maximum value for a long                = %ld\n"  , LONG_MAX  );
printf("ULONG_MAX  maximum value for an unsigned long      = %lu\n"  , ULONG_MAX );
printf("LLONG_MIN  minimum value for a long long           = %lld\n" , LLONG_MIN );
printf("LLONG_MAX  maximum value for a long long           = %lld\n" , LLONG_MAX );
printf("ULLONG_MAX maximum value for an unsigned long long = %llu\n" , ULLONG_MAX);

printf("\nNotice that there is no unsigned minimum for any of the unsigned types,\n");
printf("because the unsigned minimum is simply 0\n");

printf("\nFloating point values shouldn't be missing in this list.\n");
printf("To display the mins and max for floats we need to include float.h.\n");
printf("Notice that unlike the signed values above, floats are symmetrical.\n");
printf("This means that the minimums are just the negative maximums.\n\n");

printf("FLT_MIN  most negative value of a float       = %f\n" ,  -FLT_MAX);
printf("FLT_MAX  max value of a float                 =  %f\n" ,   FLT_MAX);

printf("\nAttention - below this line you get freaking long numbers. Activate when ready for it ;-).\n");

  return 0;
}
