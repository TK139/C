//ָ�룺ռ���ֽڣ�char��1��short��2��int��4��long��4��longlong��8��float��4��double��8
#include<stdio.h>
int main()
{
	int a =123;
	int* pn = &a;//*Ϊ����ָ������
	printf("%u\n%u\n",pn,*pn);//ָ�����͵�ֵ����Ŀ�����ݶ�����׵�ַ
	//��һ��ֵΪ�׵�ַ���ڶ���Ϊ�ռ��С�������ֵ
	return 0;
}