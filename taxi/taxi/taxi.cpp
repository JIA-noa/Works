// taxi.cpp : 定义控制台应用程序的入口点。
//
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	int c, d, A;
	scanf("%lf %d", &a, &c);
	if (a <= 3)
	{
		b = 10;
	}
	else if (a > 3 && a <= 10)
	{
		b = 10 + (a - 3) * 2;
	}
	else
	{
		b = 24 + (a - 10) * 3;
	}
	d = (c / 5) * 2;
	A = (int)(d + b + 0.5);
	printf("%d", A);
	return 0;
}

