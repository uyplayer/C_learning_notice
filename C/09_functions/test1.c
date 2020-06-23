##include "stdio.h"

void printBits(char Value);

int main(int argc, char const *argv[]) {


char var1 = 10;
char var2 = 20;

printBits(var1);
printf("\n");

printBits(var2);
printf("\n");

  return 0;
}


void printBits(char Value) {

for (int i = 7; i >=0; i--) {
  printf("%d\n", (Value>>i)&1);
}

}
