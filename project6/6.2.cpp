#include<stdio.h>
int main()
{
	char *a;
	short *b;
	int *c;
	a = (char*)100;
	b = (short*)100;
	c = (int*)100;
	a = a + 1;
	b = b + 1;
	c = c + 1;
	printf("%u\n%u\n%u\n", a, b, c);
	//����101��102��104���⼸���ֱ����׵�ַ��ռ���ֽڷֱ���1��2��4
	//���Լ�һ�󣬷ֱ�ȡ��λ���׵�ַ

	int i[5];
	printf("%u\n", &i[5]);
	printf("%u\n", &i[1]);
	printf("%u\n", &i[5] - &i[1]);//16���ֽڣ�����int�̶���4���ֽڣ�����4
	return 0;
}