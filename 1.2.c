#include<stdio.h>//输入输出
int main()
{
	int a = 6;
	printf("wath's your favorite number:");//你最喜欢的数字？
	scanf_s("%d", &a);//%d表示数字用法，&取地址
	printf("OK-%d", a);
	return 0;
	//双引号里表字符串或关键词，外表示你额外定义的东西
}