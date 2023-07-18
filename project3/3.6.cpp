#include<stdio.h>
int main()
{
	int a ;
	do {
		scanf_s("%d", &a); //do while，首先do会先执行一次循环，即命令
	} while (a == 1);   //其次，如果while里的条件符合则继续循环
	printf("%d", a);	 //否则，直接执行退出，即while下的命令
	return 0;
}