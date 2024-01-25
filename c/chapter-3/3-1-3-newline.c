#include <stdio.h>

int main() {
  printf("Hello\n");
  printf("World!");
  return 0;
}

/*
 * printf("Hello
 * World!");
 * 以上的代码编译都不会通过，因为在c语言中不允许直接使用enter对字符串进行换行表示
 */

/*
 * 因此\n用于表示不可以直接输入的换行符，\n这样用来表示无法直接输入的字符的方式被称为转义字符
 */

/*
 * 类似的例子，如何打印出Hello "C"
 * World，如何在源码里面表示双引号，字符串本身就使用""，编译器无法理解
 * 因此可以使用\"表示"，
 */
