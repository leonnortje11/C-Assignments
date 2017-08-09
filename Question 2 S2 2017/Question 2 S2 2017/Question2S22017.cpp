// Question2S22017.cpp : Defines the entry point for the console application.
//	Created by Leon Nortje
//  Email Address: leon.nortje@outlook.com
//  Description: assert function - Write a program that determines the difference between two times in 24H00 format - assert macro

#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


int main()
{
	int hours, minutes, seconds;
	int hours1, minutes1, seconds1;
	int hours2, minutes2, seconds2;
	int total_seconds, total_seconds2, total;

	cout << "Please enter two times as hh mm ss: \n";
	cin >> hours >> minutes >> seconds;
	assert(hours <= 24 && minutes <= 60 && seconds <= 60);
	//Assert macro checks that hour <= 24, minuties <= 60 and seconds <= 60

	cin >> hours1 >> minutes1 >> seconds1;
	assert(hours1 <= 24 && minutes1 <= 60 && seconds1 <= 60);
	//Assert macro checks that hour <= 24, minuties <= 60 and seconds <= 60

	cout << "You have endter the first time as - " << hours << ":" << minutes << ":" << seconds << endl;
	cout << "You have endter the second time as - " << hours1 << ":" << minutes1 << ":" << seconds1 << endl;
	cout << endl;

	total_seconds = hours * 60 * 60 + minutes * 60 + seconds;
	total_seconds2 = hours1 * 60 * 60 + minutes1 * 60 + seconds1;


	cout << "Total time one in seconds: " << total_seconds << endl;
	cout << "Total time two in secnds: " << total_seconds2 << endl;
	cout << endl;

	if (total_seconds >= total_seconds2)
	{
		total = total_seconds - total_seconds2;

		hours2 = total / 3600;
		minutes2 = (total - (hours2 * 3600)) / 60;
		seconds2 = (total - hours2 * 3600) - minutes2 * 60;
	
		cout << "The differance between the two times are: " << hours2 << ":" << minutes2 << ":" << seconds2 << endl;
		cout << endl;
	}
	else
	{
		total = total_seconds2 - total_seconds;

		hours2 = total / 3600;
		minutes2 = (total - (hours2 * 3600)) / 60;
		seconds2 = (total - hours2 * 3600) - minutes2 * 60;

		cout << "The differance between the two times are: " << hours2 << ":" << minutes2 << ":" << seconds2 << endl;
		cout << endl;
		
	}

	system("pause");

	return 0;
}

