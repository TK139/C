#include<stdio.h>
void func()//空函数
{
	int a = 100;
	printf("%d\n", a);//函数内声明的变量为局部变量，
}					//不同函数内的局部变量相互独立
int main()
{
	int a = 0;
	printf("%d\n", a);
	func();//调用前开始写的，执行它
	printf("%d\n", a);//
	return 0;
}

	
