#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = "helloworld";
	int len1;
	len1 = strlen(str);//����str�ַ�������
	printf("len1=%d\n", len1);//�����ӵ�һ��Ԫ��ֱ��\0���ַ�������
								//������ĩβ��һλ0
	int len2;
	len2 = strlen("helloworld");//����"helloworld"�ַ�����������
	printf("len2=%d\n", len2);

	printf("sizeof str %d\n", sizeof(str));//�������鱾��ռ�ÿռ��С��
	printf("sizeof helloworld %d\n", sizeof("helloworld"));//ĩβҪ��һλ0
	return 0;
}