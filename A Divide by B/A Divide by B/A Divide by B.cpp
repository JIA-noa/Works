// A Divide by B.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
	float n,A,B;
	cin >> A >> B;
	if (B > 0)
	{
		n = A / B;
		cout << A << "/" << B<<"=";
		cout << setiosflags(ios::fixed) << setprecision(2) << n;
	}
	if (B < 0)
	{
		n = A / B;
		cout << A << "/" <<"("<<B<<")"<<"=";
		cout << setiosflags(ios::fixed) << setprecision(2) << n;
	}
	if (B == 0)
	{
		cout << A << "/" << B << "="<< "Error";
	}
		return 0;
}

