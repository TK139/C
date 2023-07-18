//指针：占用字节：char：1，short：2，int：4，long：4，longlong：8，float：4，double：8
#include<stdio.h>
int main()
{
	int a =123;
	int* pn = &a;//*为声明指针类型
	printf("%u\n%u\n",pn,*pn);//指针类型的值就是目标数据对象的首地址
	//第一个值为首地址，第二个为空间大小即具体的值
	return 0;
}