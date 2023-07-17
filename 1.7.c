#include<stdio.h>
int main()
{
	char c = 'b';
	printf("c=%d\nc=%c", c, c);
	getchar();
	char k = 68;
	printf("k=%c\nk=%d", k, k);
	getchar();
	//此操作表示ASCII码

	//大小写字母差32
	char i = "a";
	printf("大写字母：");
	i=getchar();//类似于省略scanf_s的输出
	i = i + 32;
	printf("小写字母：");
	putchar(i);//表示固定输入一个字母
	getchar();

	return 0;
}