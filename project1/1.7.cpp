#include<stdio.h>
int main()     // printf��ʹ��
{
	char a = 0;
	short b = 1;
	int c = 2;
	long d = 3;
	long long e = 4;
	printf("%d %d %d %ld %d ", a, b, c, d, e);
	getchar();
	// ��ӡ�ַ���������ռλ����С��int��int����������int����Ҫ��ld
	// ͬʱ��������ʹ�ò�ͬ��ռλ�������������ͬ�Ľ������f��e��c��s
	unsigned int f = 1;
	printf("%u", f);
	// unsigned ��ʾ�޷������ͣ����ǲ���������ԭ�������һ��
	getchar();
	int l = 100;
	printf("l=%lld", l);
	// l��ll��h��hh�ֱ��ʾlong��longlong��short��char��ͬһ����˼��������С�ֽ�
	getchar();
	float p = 3.14;
	printf("%.2f\n", p);
	int i = 424;
	printf("%06d\n", i); //ռλ���ո�,����0������0����ո�
	printf("%-d",i);  //- �� + ��ʾ�������Ҷ���


	return 0;
}
