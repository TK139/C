#include<stdio.h>
int main()
{
	int i = 1;
	int o = 0;
	while (i <= 100)
	{
		o = i + o;
		i++;
	}
	printf("%d", o);
	getchar();
	int a ,l=0;
	for (a = 1; a <= 100; a++) //括号内第一个是初始值，
							   //第二个循环条件(限制，即什么时候停止)
							   //第三个为计算器更新，即变化
	{
		l = l + a;
	}
	printf("%d", l);   //一样的原理，在for while之内的，每一个结果都打出
					  //在他之外的只打出最后结果
	return 0;
}