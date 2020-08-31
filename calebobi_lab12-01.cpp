//==========================================================
//
//  Title: Text file input - one line per read
//  Description:
//    This C++ console application demonstrates reading one
// line at a time from a text file.
//
//==========================================================
#include <conio.h>	 // For function getch()
#include <cstdlib>	 // For several general-purpose functions
#include <fstream>	 // For file handling
#include <iomanip>	 // For formatted output
#include <iostream>	 // For cin, cout, and system
#include <string>	 // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare variables
	ifstream inFile;
	string line;
	string VIN;
	char code;
	int year;

	// Declare constants
	const string INPUT_FILE_NAME = "VINs.txt";
	const int COLFMT1 = 25;
	const int COLFMT2 = 12;
	const int COLFMT3 = 12;

	// Show application header
	cout << "Welcome to VIN Finders" << endl;
	cout << "----------------------" << endl
		 << endl;

	// Attempt to open input file
	inFile.open(INPUT_FILE_NAME);
	if (!inFile.is_open())
		cout << "Error: unable to open file '"
			 << INPUT_FILE_NAME << "'." << endl
			 << endl;
	else
	{

		// Print read messsage
		cout << "Reading tokens from file '" << INPUT_FILE_NAME
			 << "' ..." << endl
			 << endl;

		// Read and echo header line
		while (inFile.good())
		{
			getline(inFile, line);

			code = line.at(9);
			switch (code)
			{
			case 'A':
				year = 2010;
				break;
			case 'B':
				year = 2011;
				break;
			case 'C':
				year = 2012;
				break;
			case 'D':
				year = 2013;
				break;
			case 'E':
				year = 2014;
				break;
			case 'F':
				year = 2015;
				break;
			case 'G':
				year = 2016;
				break;
			case 'H':
				year = 2017;
				break;
			case 'J':
				year = 2018;
				break;
			case 'K':
				year = 2019;
				break;
			case 'L':
				year = 1990;
				break;
			case 'M':
				year = 1991;
				break;
			case 'N':
				year = 1992;
				break;
			case 'P':
				year = 1993;
				break;
			case 'R':
				year = 1994;
				break;
			case 'S':
				year = 1995;
				break;
			case 'T':
				year = 1996;
				break;
			case 'V':
				year = 1997;
				break;
			case 'W':
				year = 1998;
				break;
			case 'X':
				year = 1999;
				break;
			case 'Y':
				year = 2000;
				break;
			case '1':
				year = 2001;
				break;
			case '2':
				year = 2002;
				break;
			case '3':
				year = 2003;
				break;
			case '4':
				year = 2004;
				break;
			case '5':
				year = 2005;
				break;
			case '6':
				year = 2006;
				break;
			case '7':
				year = 2007;
				break;
			case '8':
				year = 2008;
				break;
			case '9':
				year = 2009;
				break;
			}
			/*cout << setw(COLFMT2) << left << line << endl;
			cout << setw(COLFMT1) << right << year << endl;*/
			cout
				<< setw(COLFMT1) << left << "VIN"
				<< setw(COLFMT2) << right << "Model  Year" << endl
				<< setw(COLFMT1) << left << line << endl
				<< setw(COLFMT2) << right << year << endl;
		}
		// Close input file
		inFile.close();
	}

	// Show application close
	cout << "End of VIN Finders"
		 << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
