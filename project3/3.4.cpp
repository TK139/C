#include<stdio.h>
int main()
{
	char a, b;
	scanf_s("%d", &a);
	b = a > 10 ? 'T' : 'F'; // ?表示条件运算符，也就是两个命题，
							// 第一个是真，第二个是假，根据结果去赋值
	printf("%c", b);
	return 0;
}