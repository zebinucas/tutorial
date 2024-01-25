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
// 对于初学者来说可读性比效率是更加重要的

// c语法的特殊规则，当有很多组字符串相邻的时候可以使用换行直接隔开字符串，在编译的时候会把这些字符串变成一个字符串
/*
 * printf("H     H      A\n"
 *        "H     H     A A\n"
 *        "HHHHHHH    A   A\n"
 *        "H     H   AAAAAAA\n"
 *        "H     H   A     A\n");
 */
