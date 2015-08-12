// Question1 S2 2015.cpp : Defines the entry point for the console application.
// Author: Leon Nortje
// Email Address: nortje.leon@gmail.com
// Assignment Number: 2
// Description: Calculate weekly pay for the employee.
// Last Changed: August 2015

#include "stdafx.h"
#include <iostream>
using namespace std;

double calcWeeklyPay(double annual_salary_par);
//Calculates the weekly pay based on Salaried employees or hourly paid employees

double calcWeeklyPay(double hourly_rate_par, int hours_worked_par);
//Calculates the weekly pay based on Salaried employees or hourly paid employees

int main()
{
    
	double weekly_pay, annual_salary, hourly_rate;
	int hours_worked;
	char selection;

	cout << "Please indicate if you are a salary 'S' or Hourly Paid employee 'H'\n";
	cin >> selection;

	switch (selection)
	{
	case 'S':
		cout << "Please enter your annual salary: ";
		cin >> annual_salary;
		weekly_pay = calcWeeklyPay(annual_salary);
		cout << "Your weekly pay will be R " << weekly_pay;
		break;

	case 's':
		cout << "Please enter your annual salary: ";
		cin >> annual_salary;
		weekly_pay = calcWeeklyPay(annual_salary);
		cout << "Your weekly pay will be R " << weekly_pay;
		break;


	case 'H':
		cout << "Please enter your hourly rate: ";
		cin >> hourly_rate;
		cout << "Please enter your hours worked for the week: ";
		cin >> hours_worked;
		weekly_pay = calcWeeklyPay(hourly_rate, hours_worked);
		cout << "Your weekly pay will be R " << weekly_pay;
		break;

	case 'h':
		cout << "Please enter your hourly rate: ";
		cin >> hourly_rate;
		cout << "Please enter your hours worked for the week: ";
		cin >> hours_worked;
		weekly_pay = calcWeeklyPay(hourly_rate, hours_worked);
		cout << "Your weekly pay will be R " << weekly_pay;
		break;
	default:
		cout << "That was not a required selection\n";
	}

	return 0;
}

double calcWeeklyPay(double annual_salary_par)
{
	int weeks;
	double weekly_pay;

	weeks = 52;
	weekly_pay = annual_salary_par / weeks;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	return (weekly_pay);
}

double calcWeeklyPay(double hourly_rate_par, int hours_worked_par)
{
	
	double weekly_pay;

	weekly_pay = hourly_rate_par * hours_worked_par;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	return (weekly_pay);
}