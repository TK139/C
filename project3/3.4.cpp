#include<stdio.h>
int main()
{
	char a, b;
	scanf_s("%d", &a);
	b = a > 10 ? 'T' : 'F'; // ?��ʾ�����������Ҳ�����������⣬
							// ��һ�����棬�ڶ����Ǽ٣����ݽ��ȥ��ֵ
	printf("%c", b);
	return 0;
}