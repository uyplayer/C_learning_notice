#include "stdio.h"

int main(int argc, char const *argv[]) {


puts("  hello world     ");  //  no placeholders


int a ;

//  for string   scanf("\n",a );    for other type  scanf("%d\n",&a );
//  This is because, whenever you use a format specifier for a string (%s), the variable that you use to store the value will be an array and, the array names (in this case - a) themselves point out to their base address and hence, the address of operator is not required.

scanf("%d\n",&a );

//   puts(a);  this line is wrong   ..   puts() function is a very simple way to send a string to the screen

puts("here  ");

  return 0;
}
