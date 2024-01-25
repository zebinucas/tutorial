#include <stdio.h>

// main函数是c语言程序执行的入口(entry point)
int main() {
  printf("Hello World"); // ; 表示一个语句的结束
  // c 当中句子是按照顺序执行的，一个句子执行之后才会执行下一句
  return 0;
} // {} 所组成的内容称为一个区块(block)

/*
 * printf("Hello World"); printf
 * 目前可以理解为另外一段写好的代码，c语言内建就写好的 "Hello
 * World\n"是一个字符串是用双引号围住的部分，用于和代码中其他的指令作区别
 */

/*
 * #include <stdio.h>
 * 表示让编译器找到stdio.h这个文件，这个文件是c语言内建好的，里面包含了printf这个函数
 */

/*
 * return 语句表示返回一个结果，这个块结束了，这里在main函数的末尾return
 * 0;表示这个程序正常结束了
 */
