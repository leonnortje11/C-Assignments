// Question 3 S1 2017.cpp : Defines the entry point for the console application.
//	Created by Leon Nortje
//  Email Address: leon.nortje@outlook.com
//  Description: assert function - enter two dates and convert to julian format

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
    
	int daysPerMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day1, day2;
	int month1, month2;
	int n;
	int julian;
	n = 0;

	cout << "Please enter day 1: ";
	cin >> day1;
	cout << "Please enter month1: ";
	cin >> month1;

	for (n = 0; n<=3; n++)
		julian = julian + n;
	cout << julian;

	cout << "Please enter day 2: ";
	cin >> day2;
	cout << "Please enter month2: ";
	cin >> month2;


	system("pause");
	
	return 0;
}

