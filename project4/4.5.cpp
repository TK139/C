#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = "helloworld";
	int len1;
	len1 = strlen(str);//测量str字符串长度
	printf("len1=%d\n", len1);//测量从第一个元素直到\0的字符串长度
								//不用在末尾加一位0
	int len2;
	len2 = strlen("helloworld");//测量"helloworld"字符串常量长度
	printf("len2=%d\n", len2);

	printf("sizeof str %d\n", sizeof(str));//测量数组本身占用空间大小，
	printf("sizeof helloworld %d\n", sizeof("helloworld"));//末尾要加一位0
	return 0;
}