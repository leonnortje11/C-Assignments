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
	cout << "Matematics:\n";
	cin >> mathematics;
	cout << "Physical Science:\n";
	cin >> physical_science;
	cout << "English:\n";
	cin >> english;

	//Add this as a function call
	assert(mathematics > 100) || (physical_science > 100) || (english > 100);
	while (((mathematics >= 60) && (physical_science >= 60) && (english >= 60)))
	{
		cout << "Congrats!";
	}

		cout << "You dont qualify!";
	
	return 0;
}

