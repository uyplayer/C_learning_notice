
// / **
//
// static is sometimes a useful keyword. It is a common misbelief that the only purpose is to make a variable stay in memory.
//
// When you declare a function or global variable as static, you cannot access the function or variable through the extern (see below) keyword from other files in your project. This is called static linkage.
//
//
// When you declare a local variable as static, it is created just like any other variable. However, when the variable goes out of scope (i.e. the block it was local to is finished) the variable stays in memory, retaining its value. The variable stays in memory until the program ends. While this behaviour resembles that of global variables, static variables still obey scope rules and therefore cannot be accessed outside of their scope. This is called static storage duration.
//
// Variables declared static are initialized to zero (or for pointers, NULL[3][4]) by default. They can be initialized explicitly on declaration to any constant value. The initialization is made just once, at compile time.
//
//
// **/



static int  j=0;


void up(void)
{
  /* k is set to 0 when the program starts. The line is then "ignored"
   * for the rest of the program (i.e. k is not set to 0 every time up()
   * is called)
   */
  static int k = 0;
  j++;
  k++;
  printf("up() called.   k= %2d, j= %2d\n", k , j);
}

void down(void)
{
  static int k = 0;
  j--;
  k--;
  printf("down() called. k= %2d, j= %2d\n", k , j);
}
input and output
int main(void)
{
  int i;

  /* call the up function 3 times, then the down function 2 times */
  for (i = 0; i < 3; i++)
     up();
  for (i = 0; i < 2; i++)
     down();

  return 0;
}
