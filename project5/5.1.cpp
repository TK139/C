#include<stdio.h>
#include<Windows.h>
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("helloworld %d", i);
		Sleep(500);//windowsϵͳÿ500����ִ��һ��
	}
	return 0;
}