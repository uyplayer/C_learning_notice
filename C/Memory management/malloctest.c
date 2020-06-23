#include "stdio.h"
int main(int argc, char const *argv[])
{
    int  n,i,*p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory cannot be allocated\n");
    }else
    {
        printf("Enter elements of array:\n");
        for(i=0;i<n;++i)
        {
            scanf("%d",&*(p+i));
        }
        printf("Elements of array are\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",*(p+i));
        }
    }
    

    
    return 0;
}
