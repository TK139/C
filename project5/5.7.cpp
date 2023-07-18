#include<stdio.h>
int a(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;//满足条件，就返回return后面的值
	}	
	return n * a(n - 1);//我调用值4，后面是3，因为a()所以再调用，4为第一个值
	//3继续，后面是2，以此类推，满足结束条件，返回去，最后一个值是1，上一个是2
	//执行命令两个相乘，以此类推，最后1*2*3*4=24
}
int main()
{
	int result = a(4);//声明变量，把值赋过去，因为局部变量相互独立，
	printf("%d\n", result);//所以赋值取值
	return 0;
}