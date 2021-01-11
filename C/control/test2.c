#include<stdio.h>

/*here is where the 'check' function is being defined.*/
void check(int x)
{
        if (x<60)
                printf("Sorry! You will need to try this course again.\n");
        else
                printf("Enjoy your vacations! You are approved.\n");
}

/*here the program actually starts, and use the check function three times.*/
int main()
{
        int a, b, c;

        printf("Type your grade in Mathematics (whole number). \n");
        scanf("%d", &a);
        check(a);

        printf("Type your grade in Science (whole number). \n");
        scanf("%d", &b);
        check(b);

        printf("Type your grade in Programming (whole number). \n");
        scanf("%d", &c);
        check(c);

        /* this program should be replaced by something more meaningful.*/
        return 0;
}
