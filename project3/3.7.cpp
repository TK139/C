#include<stdio.h>
int main()
{
	for (char a = 'A'; a <= 'E'; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			printf("%c%d ", a,b);
		}
		printf("\n"); //������к���Ҫ�����û�����������һ����
					 //����˳���ڵ�һ��forִ�к󣬵ڶ���for��ʼִ�У�
					//�����Ϻ��˳�Ƕ��forִ�л��У��ټ�����һ��for���Դ����� 
	}
	return 0;
}