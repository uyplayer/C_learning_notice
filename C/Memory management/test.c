#include "stdio.h"
int main(int argc, char const *argv[])
{
    
     int *array = malloc(10*sizeof(int)); // returns the pointer to the first element, which is assigned to that pointer.
     //It is not necessary to immediately call malloc after declaring a pointer for the allocated memory. Often a number of statements exist between the declaration and the call to malloc, as follows:

     int *array = NULL;
     printf("Hello World");
     array = malloc(10*sizeof(int)); // dalayedallocation 

    int *pt=malloc(3 * sizeof(int));
    if(pt == NULL){

        fprintf(stderr,"out of menory \n");
        exit(1);

    }




    return 0;
}
