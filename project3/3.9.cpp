#include<stdio.h>
int main()
{
	int a = 0;
	while (a < 10)
	{
		if (a == 5)
		{
			a = 6;
			continue; //continue������һ��ѭ�������������һ�����������ִ�в�����
		//break��ֱ��д��
		}
			printf("%d", a);
			a++;
	}
	getchar();
	
	for (;;)
	{
		for (;;)
		{
			break;
		}
		break;//ѭ��Ƕ��
	}

	return 0;
}