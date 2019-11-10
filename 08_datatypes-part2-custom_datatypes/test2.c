#include "stdio.h"



struct Person
{
    char         Name[100];
    unsigned int Birthyear;
    unsigned int Height;
};


typedef struct
{
    char         Name[100];
    unsigned int Birthyear;
    unsigned int Height;
} Person1;

Person Marco = {"Marco", 1980, 170};

int main(int argc, char const *argv[]) {

 struct Person uy = {"Marco", 1980, 170};

 Person1 u = {"Marco", 1980, 170};

  return 0;
}
