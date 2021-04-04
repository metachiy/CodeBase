//递归实现阶乘
#include <stdio.h>

int refact(int num)
{
   if (num == 0 || num == 1)    // 递归终止条件
      return 1;
   return num * refact(num - 1);
}

int main(void)
{
   int a = 5, b;
   b = refact(a);
   printf("%d! is %d\n", a,  b);
   return 0;
}
