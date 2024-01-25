#include <stdio.h>
int main() {
  int integer1, integer2, integer3,
      sum; // 对于同类型的变量声明的时候可以使用,隔开
  printf("Please enter the first integer: ");
  scanf("%d", &integer1);
  printf("Please enter the second integer: ");
  scanf("%d", &integer2);
  printf("Please enter the third integer: ");
  scanf("%d", &integer2);
  sum = integer1 + integer2 + integer3;
  printf("Sum is %d.\n", sum);
  return 0;
}

// 第二种写法，节省变量空间
//  int integer, sum;
//  printf("Please enter the first integer: ");
//  scanf("%d", &integer);
//  sum = integer;
//  printf("Please enter the second integer: ");
//  scanf("%d", &integer);
//  sum += integer;
//  printf("Please enter the third integer: ");
//  scanf("%d", &integer);
//  sum += integer;
//  printf("Sum is %d.\n", sum);
//  return 0;

// 撰写代码时要考虑的点
// 正确性
// 可读性
// 效率
//  占用更多CPU资源 第二种写法，执行的指令更多
//  占用更多内存资源 第一种写法，申请的内存空间更多
// 扩展性 未来如果要做100个数字的加法，哪种写法更容易变更过去
