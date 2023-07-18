#include<stdio.h>
int main()
{
	int a = 0;
	while (a < 10)
	{
		if (a == 5)
		{
			a = 6;
			continue; //continue跳出下一次循环，但必须给出一条命令，否则他执行不出来
		//break就直接写了
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
		break;//循环嵌套
	}

	return 0;
}