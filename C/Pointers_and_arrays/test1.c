#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    
     long  myArray[20];
    long  *pArray;
    int  i;
    
    /* Assign values to the entries of myArray */
    pArray = myArray;
    for (i=0; i<10; ++i) {
    *pArray++ = 5 + 3*i + 12*i*i; // pArray always first element  
    printf("1*pArray : %li \n",*pArray);
    *pArray++ = 6 + 2*i + 7*i*i;
    printf("2*pArray : %li \n",*pArray);
    }
    
    return 0;
}
