#include<stdio.h>
int main()
{
	int a ;
	do {
		scanf_s("%d", &a); //do while������do����ִ��һ��ѭ����������
	} while (a == 1);   //��Σ����while����������������ѭ��
	printf("%d", a);	 //����ֱ��ִ���˳�����while�µ�����
	return 0;
}