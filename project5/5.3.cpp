#include<stdio.h>
#include<conio.h>
int main()
{
	char a, b;
	a = _getch();//只打印输出的东西
	putchar(a);
	//_getch();
	b = _getche();//打印输出的东西，然后在输入输出的东西
	putchar(b);
	return 0;
}