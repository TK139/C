#include<stdio.h>
void func()//�պ���
{
	int a = 100;
	printf("%d\n", a);//�����������ı���Ϊ�ֲ�������
}					//��ͬ�����ڵľֲ������໥����
int main()
{
	int a = 0;
	printf("%d\n", a);
	func();//����ǰ��ʼд�ģ�ִ����
	printf("%d\n", a);//
	return 0;
}

	
