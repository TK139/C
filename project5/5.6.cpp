#include<stdio.h>
void a(int n)
{
	if (n == 6)
		return ;//结束
	printf("第一次%d\n", n);
	a(n + 1);//函数递归，自己调用自己
	printf("第二次%d\n", n);//到结束条件了，return返回
}	//返回到上一个阶段(n是5的阶段)，自下而上，
	//然后输处这条命令把值打出来，以此类推
	//放在递归调用前的语句，在递归过程中执行
	//放在递归调用后的语句，在递归返回时执行
int main()
{
	a(0);
	return 0;
}