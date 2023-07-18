#include<stdio.h>
int main()
{
	int a = 6;//int整数
	printf("请输入一个整数:");
	scanf_s("%d",&a);//整数d
	printf("%d\n" ,a);
    
	float b =3.14 ;//float小数
	printf("请输入一个小数:");
	scanf_s("%f", &b);//小数f
	printf("%.2f\n", b);
	 
	char c = 'w';//char字母
	getchar();//getchar()屏蔽回车键
	printf("请输入一个字母：");
	scanf_s("%c", &c);//字母c
	printf("%c", c);
	return 0;
}