#include<stdio.h>
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int c;
	c = add(1, 2);
	printf("结果为:%d", c);
	return 0;
}
// main函数为主函数，add是我自己定义的函数，表示两个数的相加
// 程序自上而下，所以先定义函数，把东西准备齐全，在执行你要的命令