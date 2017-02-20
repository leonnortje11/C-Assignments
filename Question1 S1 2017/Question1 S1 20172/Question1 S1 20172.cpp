// Question1 S1 2017.cpp : Defines the entry point for the console application.
// Author: Leon Nortje
// Email Address: leon.nortje@outlook.com
// Assignment Number: 1 - 2017
// Description: Writing a program that will calculate the circumference of a figure
// Last Changed:

#include "stdafx.h"
#include <iostream>
using namespace std;

void introduction();
//Postcondition: Description of program is written on the screen. 

void selection(char& answer);
//Request the user to indicate the type of circumference that should be calculated r = rectangle or c = circle.

void calcCircumference(double& radius);
//Calculate the circumference of a circle with one parameter of type double

double calcCircumference(double length, double width);
//Calculate the circumference of a square by length * width with two parameters of type double


double const PI = 3.14285;

int main()
{

	char answer;
	double radius;
	double length, width, total;

	introduction();
	selection(answer);

	if (answer == 'c')
	{
		cout << "Please enter the radius of the circle: ";
		cin >> radius;
		calcCircumference(radius);

		cout << "The circumference of the circle: " << radius << endl;;

	}

	if (answer == 'r')
	{
		cout << "Please enter the length and width of the rectangle: ";
		cin >> length;
		cin >> width;
		total = calcCircumference(length, width);

		cout << "The circumference of the rectangle: " << total << endl;;

	}

	system("pause");

	return 0;
}

void introduction()
{
		cout << "You will have a choice to calculate the circumference of a circle or rectangle.\n";
		cout << endl;
}

void selection(char& answer)
{
	do
	{
		cout << "Please indicate if you want to calculate the circumference for a circle or rectangle?\n";
		cout << "c = Circle and r = Rectangle\n";
		cin >> answer;
	} while (!(answer == 'c' || answer == 'r'));

	if (answer == 'c')
		cout << "You have selected to calculate the circumference of a circle.\n";

	if (answer == 'r')
		cout << "You have selected to calculate the circumference of a rectangle.\n";

}

void calcCircumference(double& radius)
{
	radius = radius * radius * PI;
}

double calcCircumference(double length, double width)
{
	return (length*width);
}