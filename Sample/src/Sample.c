/*
 ============================================================================
 Name        : Sample.c
 Author      : herozhou1314
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) /*内存中的两个空间 a,b */
/*形参*/
{
	a += 1; /*a加1 结束后 值不变*/
	return (a + b);
}

int main(void) {
	int a = 5;
	int b = 6;

	int c = add(a, b); /*增加栈空间，修改完之后 释放栈空间 对内存中的数据没有影响*/
	/*实参*/
	printf("%d", c);
	/*double c = a + b;时(很少用到)  所有的数据都会被转化成double型
	 （各种数据类型之间都是从简单到难类型转化的） */

	return 0; /*结束操作*/
}

/*#include <stdio.h>
 int main(void) {
 int a = -10;
 unsigned int b = 6;
 }
 if ((a+b) < b)
 {
 printf("hello\n");
 }
 else
 {
 printf("world\n");

 }
 printf ("\n");
 return 0;
 }*/
