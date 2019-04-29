// time and date.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CYider
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int check();
public:
	CYider();
	CYider(int y, int m, int d,int h,int f,int s);
	int setYider(int y, int m, int d, int h, int f, int s);
	void exportCYider();
	void addOneDay();
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMinute();
	int getSecond();
};
CYider::CYider()
{
	year = 2019;
	month = 1;
	day = 1;
	hour = 0;
	minute = 0;
	second = 0;
}
CYider::CYider(int y, int m, int d, int h, int f, int s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = f;
	second = s;
	if (check() == 1 || check() == -1)
	{
		month = 1;
		day = 1;
		cout << "日期错误，月日已重制为1" << endl;
	}
	if (check() == 1 || check() == -1)
	{
		hour = 0;
		minute = 0;
		second = 0;
		cout << "时间错误，已重制为0点" << endl;
	}
}
int CYider::setYider(int y, int m, int d, int h, int f, int s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = f;
	second = s;
	if (check() == 1 || check() == -1)
	{
		month = 1;
		day = 1;
		cout << "日期错误，月日已重制为1" << endl;
		return -1;
	}
	if (check() == 1 || check() == -1)
	{
		hour = 0;
		minute = 0;
		second = 0;
		cout << "时间错误，已重制为0点" << endl;
		return -1;
	}
	return 0;
}
int CYider::check()
{
	int CommonYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int LeapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (month > 12 || month < 1)
		return -1;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		if (LeapYearDays[month - 1] < day || day < 1)
			return 1;
		else
		{
			if (CommonYearDays[month - 1] < day || day < 1)
				return 1;
		}
	}
	return 0;
}
void CYider::addOneDay()
{
	int CommonYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int LeapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (second > 59 || second < 1)
	{
		second = 0;
		minute++;
	}
	if (minute > 59 || second < 0)
	{
		minute = 0;
		hour++;
	}
	if (hour > 23 || hour < 0)
	{
		hour = 0;
		day++;
	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		if (LeapYearDays[month - 1] < day || day < 1)
		{
			month++;
			day = 1;
		}
		else
		{
			if (CommonYearDays[month - 1] < day || day < 1)
			{
				month++;
				day = 1;
			}
		}
		if (month > 12)
		{
			year++;
			month = 1;
		}
	}
}
int CYider::getYear()
{
	return year;
}
int CYider::getMonth()
{
	return month;
}
int CYider::getDay()
{
	return day;
}
int CYider::getHour()
{
	return hour;
}
int CYider::getMinute()
{
	return minute;
}
int CYider::getSecond()
{
	return second;
}
void CYider::exportCYider()
{
	cout << year << "年" << month << "月" << day << "日" << hour << "点" << minute << "分" << second << "秒" << endl;
}
int main()
{
	CYider od;
	od.setYider();
	od.exportCYider();
	return 0;
}