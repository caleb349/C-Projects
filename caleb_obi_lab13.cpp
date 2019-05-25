//==========================================================
//
// Title: Pass-by-value and pass-by-reference
// Description:
//   This C++ console application shows the difference 
// between calling a function using pass-by-value and using 
// pass-by-reference.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

//==========================================================
// Global constants
//==========================================================
const int COLFMT1 = 40;
const int COLFMT2 = 20;

//==========================================================
// changeValues
//==========================================================
void changeValues(int num, string arr[])
{

  //// Show values before change
  //cout << setw(COLFMT1) << left
  //  << "In changeValues call - before changes"
  //  << setw(COLFMT2) << left << num
  //  << setw(COLFMT2) << left << arr[0]
  //  << setw(COLFMT2) << left << arr[1]
  //  << setw(COLFMT2) << left << arr[2] << endl;

  //// Change values
  //num = 2020;
  //arr[2] = "Challenger";

  //// Show values after change
  //cout << setw(COLFMT1) << left
  //  << "In changeValues call - after changes"
  //  << setw(COLFMT2) << left << num
  //  << setw(COLFMT2) << left << arr[0]
  //  << setw(COLFMT2) << left << arr[1]
  //  << setw(COLFMT2) << left << arr[2] << endl;

}

//==========================================================
// main
//==========================================================
int returnInt(int num)
{
	int num2 = num * num;
	return num2;
}
int main()
{

  // Declare variables
	int num1;
	int num3;


	cout << "Welcome to Interger Application!" << endl;
	cout << "--------------------------" << endl << endl;

	cout << "Enter an integer Value: ";
	cin >> num1;
	cout << "Please Enter another integer value: ";
	cin >> num3;

	int num2 = returnInt(num1);
	int num4 = returnInt(num3);



	cout << setw(COLFMT1) << left << "User Input" << setw(COLFMT2) << "Sqaured" << endl;
	cout << setw(COLFMT1) << num1 << setw(COLFMT2) << num2 << endl;
	cout << setw(COLFMT1) << num3 << setw(COLFMT2) << num4 << endl;
	
	

  // Show application close
  cout << "\nEnd of Pass-by-value and Pass-by-reference" 
    << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
