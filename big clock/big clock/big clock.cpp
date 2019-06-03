// big clock.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int x, y, z,n,i;
	cin >> x >> y;
	if (x >= 12 && x < 24)
	{
		if (y == 0)
		{
			n = x-12;
		}
		else if (y != 0)
		{
			n = x-12 + 1;
		}
		for (i = 0; i < n; i++)
		{
			cout << "Dang";
		}
	}
	else
	{
		cout << "Only " << x << ":" << y << ".  Too early to Dang.";
	}
    return 0;
}

