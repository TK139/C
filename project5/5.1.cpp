#include<stdio.h>
#include<Windows.h>
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("helloworld %d", i);
		Sleep(500);//windows系统每500毫秒执行一次
	}
	return 0;
}