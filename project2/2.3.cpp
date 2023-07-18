#include<stdio.h>
int main()
{
	int a = 3;
	int b;
	int c;
	b = a++; //++放在后面表示先把常量值赋值给前面的变量，之后再加1
	c = ++a; //++放在前面表示先加1，然后再把加过1的值赋值给前面的变量
	printf("%d %d %d",a,b,c);
	getchar();

	int i,o;
	i = 1;
	o = i++ + i++ + i++; //i一个一个加1，o是被赋值i，三个i为1相加为3
	printf("%d %d", i, o); //这个代码写的风险性很大，建议分开，因为在不同编译器中有不同的结果和算法

	return 0;
}