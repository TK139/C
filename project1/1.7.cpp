#include<stdio.h>
int main()     // printf的使用
{
	char a = 0;
	short b = 1;
	int c = 2;
	long d = 3;
	long long e = 4;
	printf("%d %d %d %ld %d ", a, b, c, d, e);
	getchar();
	// 打印字符串，整形占位符，小于int的int包括，大于int的需要用ld
	// 同时根据需求，使用不同的占位符，可以输出不同的结果，如f、e、c、s
	unsigned int f = 1;
	printf("%u", f);
	// unsigned 表示无符号类型，就是不分正负，原理和上面一样
	getchar();
	int l = 100;
	printf("l=%lld", l);
	// l、ll、h、hh分别表示long、longlong、short、char，同一个意思，扩大缩小字节
	getchar();
	float p = 3.14;
	printf("%.2f\n", p);
	int i = 424;
	printf("%06d\n", i); //占位符空格,加上0可以用0代替空格
	printf("%-d",i);  //- 和 + 表示左对齐和右对齐


	return 0;
}
