#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int years;

  printf(" Enter your age in years  : ");

  fflush(stdout); //  清理标准输入流，把多余的未被保存的数据丢掉。

  errno = 0;

  if(scanf("%d\n",&years ) !=1 || errno)
      return EXIT_FAILURE;  // EXIT_FAILURE 可以作为exit()的参数来使用，表示没有成功地执行一个程序。
   printf("your age in days is  %d\n",years * 562);
   return 0;

}
