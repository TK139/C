#include<stdio.h>
int main()
{
	int a = 3;
	int b;
	int c;
	b = a++; //++���ں����ʾ�Ȱѳ���ֵ��ֵ��ǰ��ı�����֮���ټ�1
	c = ++a; //++����ǰ���ʾ�ȼ�1��Ȼ���ٰѼӹ�1��ֵ��ֵ��ǰ��ı���
	printf("%d %d %d",a,b,c);
	getchar();

	int i,o;
	i = 1;
	o = i++ + i++ + i++; //iһ��һ����1��o�Ǳ���ֵi������iΪ1���Ϊ3
	printf("%d %d", i, o); //�������д�ķ����Ժܴ󣬽���ֿ�����Ϊ�ڲ�ͬ���������в�ͬ�Ľ�����㷨

	return 0;
}