#include <stdio.h>
int main() {
  int integer1, integer2;
  printf("Please enter first integer: ");
  scanf("%d", &integer1); // 3
  printf("Please enter second integer: ");
  scanf("%d", &integer2); // 5

  // 错误的代码1
  // integer1 = integer2;
  // integer2 = integer1; // 错误的原因，代码是顺序执行的
  // 错误的代码2
  // (integer1, integer2) = (integer2, integer1); //
  // c不支持这种语法，其他现代语言有

  // 参考写法1
  int temp = integer1;
  integer2 = integer1;
  integer1 = temp;

  // 参考写法2 限制不允许额外的变量
  // integer1 = integer1 + integer2; // integer1 = 3 + 5; => integer1 8
  // integer2 = integer1 - integer2; // integer2 = 8 - 5; => integer2 3
  // integer1 = integer1 - integer2; // integer1 = 8 - 3; => integer1 5

  // 参考写法3 异或运算
  // integer1 ^= integer2;
  // integer2 ^= integer1;
  // integer1 ^= integer2;
  printf("integer1: %d\n", integer1);
  printf("integer2: %d\n", integer2);
  return 0;
}
