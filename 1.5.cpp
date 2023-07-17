#include<stdio.h>
#define a 3  //符号常量，一开始就定义一个东西固定死的
int main()
{
	int b = 100;//变量初始化，有类型加持，所以是变量初始化，但如果没有类型的话，便是赋值
	int c;
	c = a * b;
	printf("a*b=%d\n", c);
	printf("d=%d", sizeof('d'));
	return 0;
}