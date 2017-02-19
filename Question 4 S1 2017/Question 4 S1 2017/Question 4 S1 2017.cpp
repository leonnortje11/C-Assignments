//	Question 4 S1 2017.cpp : Defines the entry point for the console application.
//	Created by Leon Nortje
//  Email Address: leon.nortje@outlook.com
//  Description: Write a progarm that will create userids for email addresses of a company


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;



int main()
{
	char next;
	int count;
	char in_file_name[16], out_file_name[16];

	count = 0;

	cout << "Enter the input file name (max 15 characters): ";
	cin >> in_file_name;
	cout << endl;

	cout << "Enter the output file name (max 15 characters): ";
	cin >> out_file_name;
	cout << endl;

	ifstream in_stream;
	ofstream out_stream;

	in_stream.open(in_file_name);
	if (in_stream.fail())
	{
		cout << "input file opening failed.\n";
		exit(1);
	}

	out_stream.open(out_file_name);
	if (out_stream.fail())
	{
		cout << "Output file opening failed.\n";
		exit(1);
	}

	cout << "processing...";

	
	in_stream.get(next);

	while (!in_stream.eof())
	{
		

		do
		{
			if (next != ' ')
			{
				next = tolower(next);
				out_stream << (next);
				in_stream.get(next);
				count++;
			}
			
			else
			{
				in_stream.get(next);
			}
			
		

		} while ((count != 8) || (next == ';'));

		out_stream << "@domain.com" << endl;
		count = 0;
		//in_stream.get(next);
		
		while (next != ';')
			{
				in_stream.get(next);
			}	

	}


	in_stream.close();
	out_stream.close();

	system("pause");
	return 0;
}

