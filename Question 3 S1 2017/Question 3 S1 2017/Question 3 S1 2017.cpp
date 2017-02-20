// Question 2 S1 2017.cpp : Defines the entry point for the console application.
//	Created by Leon Nortje
//  Email Address: leon.nortje@outlook.com
//  Description: assert function - enter two dates and convert to julian format

#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


int main()
{
    
	int daysPerMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day1, day2;
	int month1, month2;
	int julian1, julian2, juliandiff;
	
	julian1 = 0;
	julian2 = 0;


	cout << "Please enter day1: ";
	cin >> day1;
	cout << "Please enter month1: ";
	cin >> month1;
	month1 = month1 - 1;
	assert(day1 <= daysPerMonths[month1]);
	cout << endl;

	while (!month1 == 0)
	{
		julian1 = julian1 + daysPerMonths[month1];
		month1--;
	}
	
	julian1 = julian1 + day1;
	cout << "The first julian date is: " << julian1 << endl;

	cout << endl;

	cout << "Please enter day2: ";
	cin >> day2;
	cout << "Please enter month2: ";
	cin >> month2;
	month2 = month2 - 1;
	assert(day2 <= daysPerMonths[month2]);

	
	cout << endl;


	while (!month2 == 0)
	{
		julian2 = julian2 + daysPerMonths[month2];
		month2--;
	}

	julian2 = julian2 + day2;
	cout << "The second julian date is: " << julian2 << endl;

	if (julian1 > julian2)
	{
		juliandiff = julian1 - julian2;
		cout << "The julian differance = " << juliandiff;
	}
	else
	{
		juliandiff = julian2 - julian1;
		cout << "The julian differance = " << juliandiff;
	}
	
	cout << endl;

	system("pause");
	
	return 0;
}

