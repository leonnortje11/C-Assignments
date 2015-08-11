// Question2 S2 2015.cpp : Defines the entry point for the console application.
// Author: Leon Nortje
// Email Address: nortje.leon@gmail.com
// Assignment Number: 2
// Description: using assert function.
// Last Changed: August 201

#include "stdafx.h"
#include <iostream>
#include <cassert>
using namespace std;


int main()
{
	int mathematics, physical_science, english;

	cout << "Please enter your marks for the follow subjects to determine if you qualify for Computer Science.\n";
	cout << "Mathematics:\n";
	cin >> mathematics;
	
	cout << "Physical Science:\n";
	cin >> physical_science;
	cout << "English:\n";
	cin >> english;

	assert((mathematics <= 100) && (physical_science <= 100) && (english <= 100));
	while ((mathematics >= 60) && (physical_science >= 60) && (english >= 60))
	{
		cout << endl;
		cout << "Your have entered the following marks:\n"
			<< "Mathematics = " << mathematics << endl
			<< "Physical science = " << physical_science << endl
			<< "English = " << english << endl;
		cout << "Congrats, you qualify for Computer Science!";
		break;
	}
	
	cout << endl;
	cout << "Your have entered the following marks:\n"
		<< "Mathematics = " << mathematics << endl
		<< "Physical science = " << physical_science << endl
		<< "English = " << english << endl;
	cout << "You dont qualify for Computer Science!";
	
	return 0;
}

