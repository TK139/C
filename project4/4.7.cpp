#include<stdio.h>
int main()
{
	char str[] = "helloworld";
	int i=0;
	while (str[i] != '\0');
	{
		putchar(str[i++]);
	}
	return 0;
}