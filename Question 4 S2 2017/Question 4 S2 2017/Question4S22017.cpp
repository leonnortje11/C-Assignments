//  Question4S22017.cpp : Defines the entry point for the console application.
//	Created by Leon Nortje
//  Email Address: leon.nortje@outlook.com
//  Description: A program that reads text from a file and encrypts it by using a simple technique

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void encrypt(ifstream& in_stream, ofstream& out_stream);

void show_encypt(ifstream& in_stream, ofstream& out_stream);

//Choice between encrypting or decrypting a file
//Specify the input and output file names
//Display both the input and output on the screen

int main()
{

	char in_file_name[20], out_file_name[20];
	ifstream fin;
	ofstream fout;

	cout << "Please enter the file name for the input data (maximum of 20 characters): \n";
	cin >> in_file_name;

	cout << "Please enter the file name for the output data (maximum of 20 characters): \n";
	cin >> out_file_name;

	fin.open(in_file_name);
	fout.open(out_file_name);

	encrypt(fin, fout);

	fin.close();
	fout.close();

	//fin.open(out_file_name); //open the decrypted file
	//show_encypt(fin, fout); //show the decrypted file info on screen

	fin.close();
	fout.close();

	system("pause");

    return 0;
}

void encrypt(ifstream& in_stream, ofstream& out_stream)
{
	char next;

	in_stream.get(next);

	while (!in_stream.eof())

		in_stream.get(next);
	{
		if ((next == 'a') || (next == 'A'))
		{
			out_stream << "b";
			in_stream.get(next);
		}

		else if ((next == 'b') || (next == 'B'))
		{
			out_stream << "c";
			in_stream.get(next);
		}
		else if ((next == 'c') || (next == 'C'))
		{
			out_stream << "d";
			in_stream.get(next);
		}
		else if ((next == 'd') || (next == 'D'))
		{
			out_stream << "e";
			in_stream.get(next);
		}
		else if ((next == 'e') || (next == 'E'))
		{
			out_stream << "f";
			in_stream.get(next);
		}
		else if ((next == 'f') || (next == 'F'))
		{
			out_stream << "g";
			in_stream.get(next);
		}
		else if ((next == 'g') || (next == 'G'))
		{
			out_stream << "h";
			in_stream.get(next);
		}
		else if ((next == 'h') || (next == 'H'))
		{
			out_stream << "i";
			in_stream.get(next);
		}
		else if ((next == 'i') || (next == 'I'))
		{
			out_stream << "j";
			in_stream.get(next);
		}
		else if ((next == 'j') || (next == 'J'))
		{
			out_stream << "k";
			in_stream.get(next);
		}
		else if ((next == 'k') || (next == 'K'))
		{
			out_stream << "l";
			in_stream.get(next);
		}
		else if ((next == 'l') || (next == 'L'))
		{
			out_stream << "m";
			in_stream.get(next);
		}
		else if ((next == 'm') || (next == 'M'))
		{
			out_stream << "n";
			in_stream.get(next);
		}
		else if ((next == 'n') || (next == 'N'))
		{
			out_stream << "o";
			in_stream.get(next);
		}
		else if ((next == 'o') || (next == 'O'))
		{
			out_stream << "p";
			in_stream.get(next);
		}
		else if ((next == 'p') || (next == 'P'))
		{
			out_stream << "q";
			in_stream.get(next);
		}
		else if ((next == 'q') || (next == 'Q'))
		{
			out_stream << "r";
			in_stream.get(next);
		}
		else if ((next == 'r') || (next == 'R'))
		{
			out_stream << "s";
			in_stream.get(next);
		}
		else if ((next == 's') || (next == 'S'))
		{
			out_stream << "t";
			in_stream.get(next);
		}
		else if ((next == 't') || (next == 'T'))
		{
			out_stream << "u";
			in_stream.get(next);
		}
		else if ((next == 'u') || (next == 'U'))
		{
			out_stream << "v";
			in_stream.get(next);
		}
		else if ((next == 'v') || (next == 'V'))
		{
			out_stream << "w";
			in_stream.get(next);
		}
		else if ((next == 'w') || (next == 'W'))
		{
			out_stream << "x";
			in_stream.get(next);
		}
		else if ((next == 'x') || (next == 'X'))
		{
			out_stream << "a";
			in_stream.get(next);
		}
		else if (next == ' ')
		{
			out_stream << "";
			in_stream.get(next);
		}


	}
}

void show_encypt(ifstream& in_stream, ofstream& out_stream)
{
	char encrypt;

	in_stream.get(encrypt);

	while (!in_stream.eof())
	{
		cout << encrypt;
		in_stream.get(encrypt);
	}
}
