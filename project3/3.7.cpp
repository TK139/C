#include<stdio.h>
int main()
{
	for (char a = 'A'; a <= 'E'; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			printf("%c%d ", a,b);
		}
		printf("\n"); //这个换行很重要，如果没有他，则会变成一条行
					 //按照顺序，在第一个for执行后，第二个for开始执行，
					//输出完毕后，退出嵌套for执行换行，再继续第一个for，以此类推 
	}
	return 0;
}