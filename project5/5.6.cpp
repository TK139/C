#include<stdio.h>
void a(int n)
{
	if (n == 6)
		return ;//����
	printf("��һ��%d\n", n);
	a(n + 1);//�����ݹ飬�Լ������Լ�
	printf("�ڶ���%d\n", n);//�����������ˣ�return����
}	//���ص���һ���׶�(n��5�Ľ׶�)�����¶��ϣ�
	//Ȼ���䴦���������ֵ��������Դ�����
	//���ڵݹ����ǰ����䣬�ڵݹ������ִ��
	//���ڵݹ���ú����䣬�ڵݹ鷵��ʱִ��
int main()
{
	a(0);
	return 0;
}