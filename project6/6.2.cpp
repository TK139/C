#include<stdio.h>
int main()
{
	char *a;
	short *b;
	int *c;
	a = (char*)100;
	b = (short*)100;
	c = (int*)100;
	a = a + 1;
	b = b + 1;
	c = c + 1;
	printf("%u\n%u\n%u\n", a, b, c);
	//答案是101，102，104，这几个分别是首地址，占用字节分别是1，2，4
	//所以加一后，分别取各位的首地址

	int i[5];
	printf("%u\n", &i[5]);
	printf("%u\n", &i[1]);
	printf("%u\n", &i[5] - &i[1]);//16个字节，除以int固定的4个字节，等于4
	return 0;
}