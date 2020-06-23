#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {

  static const char *colors[] = {"read","yellow"};
  static const char *widths[] = {"thin","thick"};
  char pentext[20];

  int pencolor =3,penthink=2;
  strcpy(pentext,colors[pencolor]);
  printf("my open is  %s\n",pentext );


  return 0;
}
