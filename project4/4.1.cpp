#include<stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", a[1]);	//下标开始从0，并且如果数组为满足个数，将用0补齐，超出，超出之后的部分不取
	int b[] = { 12,23,14,32,3,4 };//开始不写数量也可以
	a[0] = 0;
	printf("%d\n", a[0]);//修改下标
	getchar();
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}