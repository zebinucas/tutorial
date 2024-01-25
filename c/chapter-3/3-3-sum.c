#include <stdio.h>
int main() {
  int integer1; // 关键字int表示要声明一个变量，类型是integer整数
                // integer1是这个变量的名称
  // int integer1; 就称为声明一个变量
  // 告诉电脑需要在内存中使用一个空间用来存储这个变量，将integer1这个名字对应到这个空间
  int integer2;
  int sum;
  printf("Please enter the first integer: ");
  scanf("%d", &integer1);
  // scanf 是c语言内建的函数，包含在stdio.h文件中
  // 这个函数用于从键盘输入信息，第一个参数接受一个字符串，表示应该如何读取
  // %d表示要从键盘读入一个十进制的整数
  // &integer1表示将读取到的内容保存到integer1的位置，这里&表示取地址运算符
  printf("Please enter the second integer: ");
  scanf("%d", &integer2);
  sum = integer1 + integer2;
  // + 和数学中的加号相同，=
  // 则是表示赋值运算符号，表示将右边运算的结果赋值给左边
  printf("Sum is %d.\n", sum);
  return 0;
}
