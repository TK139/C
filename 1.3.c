#include<stdio.h>
int main()
{
	int a = 6;//int����
	printf("������һ������:");
	scanf_s("%d",&a);//����d
	printf("%d\n" ,a);
    
	float b =3.14 ;//floatС��
	printf("������һ��С��:");
	scanf_s("%f", &b);//С��f
	printf("%.2f\n", b);
	 
	char c = 'w';//char��ĸ
	getchar();//getchar()���λس���
	printf("������һ����ĸ��");
	scanf_s("%c", &c);//��ĸc
	printf("%c", c);
	return 0;
}