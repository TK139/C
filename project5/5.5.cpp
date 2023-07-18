#include<stdio.h>
#include<math.h>
int count(double a,double b,double c)//里面要写参数，这样才能调用
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	return 0;
}
double coun(double a,double b,double c)
{
	double p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a)*(p - b)*(p - c));
	return s;
}
int main()
{
	double a, b, c;
	scanf_s("%lf%lf%lf",&a,&b,&c);
	if (count(a, b, c) == 0)
	{
		printf("错误");
		return 0;
	}

	double s;
	s = coun(a, b, c);
	printf("%.1f", s);
	return 0;
}