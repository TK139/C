#include<stdio.h>
int main()
{
	int a = 3;
	a = 5 > 3;
	printf("1.a���߼�ֵΪ%d\n", a);
	int b = 5;
	b = 6 < 4;
	printf("2.b���߼�ֵΪ%d\n", b);
	//�߼�ֵΪ1��ʾ�棬Ϊ0���
	int x = 100;
	int j = 3;
	j = 25 * 4;
	printf("3.x���߼�ֵ%d\n", j == x);//˫���ں�

	//���㣺�����Ƹ������⣩
	//&&��ʾ���룬һ����Ϊ�٣�
	//||��ʾ��һ����Ϊ�棻
	//����ʾ��
	int g = 0;
    int h = 1;
	printf("4.�������Ϊ%d,�������Ϊ%d,�������Ϊ%d\n", g && h,g||h,!g);
	system("pause");


	return 0;
}