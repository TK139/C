#include<stdio.h>
int main()
{
	int i = 1;
	int o = 0;
	while (i <= 100)
	{
		o = i + o;
		i++;
	}
	printf("%d", o);
	getchar();
	int a ,l=0;
	for (a = 1; a <= 100; a++) //�����ڵ�һ���ǳ�ʼֵ��
							   //�ڶ���ѭ������(���ƣ���ʲôʱ��ֹͣ)
							   //������Ϊ���������£����仯
	{
		l = l + a;
	}
	printf("%d", l);   //һ����ԭ����for while֮�ڵģ�ÿһ����������
					  //����֮���ֻ��������
	return 0;
}