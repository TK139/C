#include<stdio.h>
#include<memory.h>//内存赋值函数
int main()
{
	int a[5] = {};
	int b[5] = { 1,2,3,4,5 };
	memcpy(a, b, sizeof(a));//第一个为目标数组，第二个为原始数组，第三个为需要复制多少数据
	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}