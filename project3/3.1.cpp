#include<stdio.h>
int main()
{
	int a = 1;
	if (a > 0)  // if else 语句，花括号包括表示复合语句，可以写多条命令
	{
		printf("yes");
	}
	else if (a<0)  //else if 其实可以理解为elif多个选项
	{
		printf("no");
	}

	return 0;
}