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
void decrypt(ifstream& in_stream, ofstream& out_stream);

void show_encypt(ifstream& in_stream, ofstream& out_stream);

void show_decypt(ifstream& in_stream, ofstream& out_stream);


int main()
{

	char in_file_name[20], out_file_name[20];
	char choice;
	ifstream fin;
	ofstream fout;

	cout << "Enter your choice to encryp or decrypt your file: ";
	cin >> choice;

	switch (choice)
	{
	case 'E':
	case 'e':

		cout << "Please enter the file name for the input data (maximum of 20 characters): \n";
		cin >> in_file_name;

		cout << "Please enter the file name for the output data (maximum of 20 characters): \n";
		cin >> out_file_name;

		fin.open(in_file_name);
		fout.open(out_file_name);

		encrypt(fin, fout);

		fin.close();
		fout.close();

		fin.open(out_file_name); //open the encrypted file
		show_encypt(fin, fout); //show the encrypted file info on screen

		fin.close();
		fout.close();

		fin.open(in_file_name); //open the decrypted file
		show_decypt(fin, fout); //show the decrypted file info on screen

		fin.close();
		fout.close();
		cout << endl;
		break;

	case 'D':
	case 'd':
		cout << "Please enter the file name for the input data (maximum of 20 characters): \n";
		cin >> in_file_name;

		cout << "Please enter the file name for the output data (maximum of 20 characters): \n";
		cin >> out_file_name;

		fin.open(in_file_name);
		fout.open(out_file_name);

		decrypt(fin, fout);

		fin.close();
		fout.close();

		fin.open(out_file_name); //open the encrypted file
		show_encypt(fin, fout); //show the encrypted file info on screen

		fin.close();
		fout.close();

		fin.open(in_file_name); //open the decrypted file
		show_decypt(fin, fout); //show the decrypted file info on screen

		fin.close();
		fout.close();
		cout << endl;
		break;

	default:
		cout << "Thats not the correct choice.\n";
	}
	
	system("pause");

    return 0;
}

void encrypt(ifstream& in_stream, ofstream& out_stream)
{
	char next;

	in_stream.get(next);

	while (!in_stream.eof())

		//in_stream.get(next);
	{
		if ((next == 'a') || (next == 'A'))
		{
			next = 'b';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'b') || (next == 'B'))
		{
			next = 'c';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'c') || (next == 'C'))
		{
			next = 'd';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'd') || (next == 'D'))
		{
			next = 'e';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'e') || (next == 'E'))
		{
			next = 'f';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'f') || (next == 'F'))
		{
			next = 'g';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'g') || (next == 'G'))
		{
			next = 'h';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'h') || (next == 'H'))
		{
			next = 'i';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'i') || (next == 'I'))
		{
			next = 'j';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'j') || (next == 'J'))
		{
			next = 'k';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'k') || (next == 'K'))
		{
			next = 'l';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'l') || (next == 'L'))
		{
			next = 'm';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'm') || (next == 'M'))
		{
			next = 'n';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'n') || (next == 'N'))
		{
			next = 'o';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'o') || (next == 'O'))
		{
			next = 'p';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'p') || (next == 'P'))
		{
			next = 'q';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'q') || (next == 'Q'))
		{
			next = 'r';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'r') || (next == 'R'))
		{
			next = 's';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 's') || (next == 'S'))
		{
			next = 't';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 't') || (next == 'T'))
		{
			next = 'u';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'u') || (next == 'U'))
		{
			next = 'v';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'v') || (next == 'V'))
		{
			next = 'w';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'w') || (next == 'W'))
		{
			next = 'x';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'x') || (next == 'X'))
		{
			next = 'y';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'y') || (next == 'Y'))
		{
			next = 'z';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'z') || (next == 'Z'))
		{
			next = 'a';
			out_stream << next;
			in_stream.get(next);
		}


		else if (next == ' ')
		{
			next = ' ';
			out_stream.put(next);
			in_stream.get(next);
		}
	}
}

void decrypt(ifstream& in_stream, ofstream& out_stream)
{
	char next;

	in_stream.get(next);

	while (!in_stream.eof())

		//in_stream.get(next);
	{
		if ((next == 'b') || (next == 'B'))
		{
			next = 'a';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'c') || (next == 'C'))
		{
			next = 'b';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'd') || (next == 'D'))
		{
			next = 'c';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'e') || (next == 'E'))
		{
			next = 'd';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'f') || (next == 'F'))
		{
			next = 'e';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'g') || (next == 'G'))
		{
			next = 'f';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'h') || (next == 'H'))
		{
			next = 'g';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'i') || (next == 'I'))
		{
			next = 'h';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'j') || (next == 'J'))
		{
			next = 'i';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'k') || (next == 'K'))
		{
			next = 'j';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'l') || (next == 'L'))
		{
			next = 'k';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'm') || (next == 'M'))
		{
			next = 'l';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'n') || (next == 'N'))
		{
			next = 'm';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'o') || (next == 'O'))
		{
			next = 'n';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'p') || (next == 'P'))
		{
			next = 'o';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'q') || (next == 'Q'))
		{
			next = 'p';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'r') || (next == 'R'))
		{
			next = 'q';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 's') || (next == 'S'))
		{
			next = 'r';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 't') || (next == 'T'))
		{
			next = 's';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'u') || (next == 'U'))
		{
			next = 't';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'v') || (next == 'V'))
		{
			next = 'u';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'w') || (next == 'W'))
		{
			next = 'v';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'x') || (next == 'X'))
		{
			next = 'w';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'y') || (next == 'Y'))
		{
			next = 'x';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'z') || (next == 'Z'))
		{
			next = 'y';
			out_stream << next;
			in_stream.get(next);
		}

		else if ((next == 'a') || (next == 'A'))
		{
			next = 'z';
			out_stream << next;
			in_stream.get(next);
		}

		else if (next == ' ')
		{
			next = ' ';
			out_stream.put(next);
			in_stream.get(next);
		}
	}
}


void show_encypt(ifstream& in_stream, ofstream& out_stream)
{
	char encrypt;

	in_stream.get(encrypt);
	cout << endl;
	cout << "Content of the encryptyd file: ";

	while (!in_stream.eof())
	{	
		cout << encrypt;
		in_stream.get(encrypt);
	}
}

void show_decypt(ifstream& in_stream, ofstream& out_stream)
{
	char decrypt;

	in_stream.get(decrypt);
	cout << endl;
	cout << "Content of the decrypted file: ";

	while (!in_stream.eof())
	{
		cout << decrypt;
		in_stream.get(decrypt);
	}
}