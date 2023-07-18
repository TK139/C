#include<stdio.h>
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("选择的值为%d\n", a[1]);//正常顺序1对应1
    int b[10] = { 1,2,3,4,5,6,7,8,9,10};
	printf("选择的值为%d\n", b[1]);//计算机顺序按照0开头，所以0表1，1表2
	int c[10] = { 1,3,5,7,9,11,13,15,17,19, };
	printf("选择的值为%d", c[1]);//乱序按照正常输入
	getchar();

	int x = 0;
	int y = 0;
	int t = 5;
	x = t++;//t的值为5，赋予给x，后+1；所以这时x=1，t=6
	y = ++t;//t先+1，所以t=7，再赋给y，所以y=7
	//简单来说++在前先+1，++在后先赋值在加
	printf("t=%d x=%d y=%d", t, x, y);
	getchar();
	int q = 0;
	int e = 0;
	int w = 6;
	q = --w;
	e = w--;
	printf("w=%d，q=%d,e=%d", w, q, e);
	//--同理


	return 0;
}