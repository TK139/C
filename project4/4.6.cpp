#include<stdio.h>
int main()
{
	char c;
	c = getchar();//输入，输入一个数给c变量
	c = c - 32;//转换大写
	putchar(c);//输出开始输入的变量的大写
	return 0;
}