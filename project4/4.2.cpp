#include<stdio.h>
#include<memory.h>//�ڴ渳ֵ����
int main()
{
	int a[5] = {};
	int b[5] = { 1,2,3,4,5 };
	memcpy(a, b, sizeof(a));//��һ��ΪĿ�����飬�ڶ���Ϊԭʼ���飬������Ϊ��Ҫ���ƶ�������
	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}