#include "stdio.h"

void m(void);
void b(void);
int main(int argc, char const *argv[])
{
    
    // m();
    b();
    
    return 0;
}

void m(void){

    printf(" fuc  m   \n");
    int number;
    printf("please inter a number : \n");
    scanf("%d",&number);
    printf("input number is : %d \n ",number);

    if(number%2==0){
        
        printf("input number is : %d  is even \n",number);

    }else{
        printf("input number is : %d  is odd \n",number);
    }
}

void b(void){

    printf(" fuc  b   \n");
    int number;
    printf("please inter a number : \n");
    scanf("%d",&number);
    printf("input number is : %d \n ",number);



    if((number << 7)==10000000){
        
        printf("input number is : %d  is even \n",number);

    }else{
        printf("input number is : %d  is odd \n",number);
    }
}
