#include<stdio.h>
int main()
{
	float q = 3.2;
	float e = 5.3;
	float w = 0;
	scanf_s("%f %f", &q, &e);
	w = q + e;
	printf("w=%.2f", w);
	system("pause");//����Ķ����Ǽ�����ִ֯��һ��������ͬʱ�������ڻس���������
	//getchar()Ҳ�У���������س�

	int z = 4;
	int c=2;
	c = z*2;
	printf("c=%d", c);
	getchar();

	float j = 4.3;
	float k = 7.3;
	float l = 5.6;
	scanf_s("%f %f", &j, &k);
	l = j / k;
	printf("l=%f\n", l);

	int y = 8.00;
	float i = 6.43;
	float x = 0;
	x = y + i;
	printf("x=%f", x);
	system("pause");

	return 0;
}