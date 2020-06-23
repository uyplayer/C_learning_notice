#include "stdio.h"

int main(int argc, char const *argv[])
{
    char name[20];
    char *address;

    strcpy(name, "Harry Lee");
    address = (char*)malloc(50*sizeof(char ));
    strcpy( address, "Lee Fort, 11-B Sans Street");
    printf("Name = %s\n", name );
    printf("Address: %s\n", address );
    return 0;
}
