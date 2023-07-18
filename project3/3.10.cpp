#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	switch (a)		//×ª»»
	{
		case 'b':
			printf("bbbb");
			break;
		case 'c':
			printf("cccc");
			break;
		case 'd':
			printf("dddd");
			break;
		default	:
			printf("no");
	}
	return 0;
}