#include<stdio.h>
int main()
{
	char c = 'b';
	printf("c=%d\nc=%c", c, c);
	getchar();
	char k = 68;
	printf("k=%c\nk=%d", k, k);
	getchar();
	//�˲�����ʾASCII��

	//��Сд��ĸ��32
	char i = "a";
	printf("��д��ĸ��");
	i=getchar();//������ʡ��scanf_s�����
	i = i + 32;
	printf("Сд��ĸ��");
	putchar(i);//��ʾ�̶�����һ����ĸ
	getchar();

	return 0;
}