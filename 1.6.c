#include<stdio.h>
int main()
{
	int a = 3;
	a = 5 > 3;
	printf("1.a的逻辑值为%d\n", a);
	int b = 5;
	b = 6 < 4;
	printf("2.b的逻辑值为%d\n", b);
	//逻辑值为1表示真，为0表假
	int x = 100;
	int j = 3;
	j = 25 * 4;
	printf("3.x的逻辑值%d\n", j == x);//双等于号

	//运算：（类似高中命题）
	//&&表示且与，一假则为假；
	//||表示或，一真则为真；
	//！表示非
	int g = 0;
    int h = 1;
	printf("4.与运算符为%d,或运算符为%d,非运算符为%d\n", g && h,g||h,!g);
	system("pause");


	return 0;
}