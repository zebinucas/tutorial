#include <stdio.h>

/*
 * 练习解析
 * H     H      A
 * H     H     A A
 * HHHHHHH    A   A
 * H     H   AAAAAAA
 * H     H   A     A
 */

int main() {
  printf("H     H      A\n");
  printf("H     H     A A\n");
  printf("HHHHHHH    A   A\n");
  printf("H     H   AAAAAAA\n");
  printf("H     H   A     A\n");
  return 0;
}

// 最少使用printf的方式3-1-4-exerise
// 两种方式体现出来的是可读性，3-2-1可读性更强
// 3-1-4只调用了一次printf，但不代表效率一定更高，编译器优化之后生成的机器码可能是相同的
