#include "stdio.h"

int abs(int x){
if (x>0)
   return x;
  else return -x;

}
int main(int argc, char const *argv[]) {


int x,y;
printf("Type the coordinates of a point in 2-plane, say P = (x,y). First x=");

scanf("%d\n",&x );
printf("second u=\n" );
scanf("%d\n",&y );

printf("The distance of the P point to the x-axis is %d. \n Its distance to the y-axis is %d. \n", abs(y), abs(x));


  return 0;
}
