#include<stdio.h>
int main()
{	// \12其实就是\n的意思，\是转义字符的意思就是把字符和数字转换
	// 同时大小写字母相差32
	printf("hello\12world\n");
	printf("hello\0world");
	printf("\a你好，\b\b\b");
	return 0;
}