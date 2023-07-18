#include<stdio.h>
int main()
{		//切记一点一个字符串的字节长度sizeof永远要加上一位，因为末尾要加0
	char str[11] = "helloworld";//{}形式也可以
	printf(str);//或者("%s",str)
	return 0;
}