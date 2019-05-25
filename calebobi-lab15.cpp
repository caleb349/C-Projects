//==========================================================
//
// Title: Euler's Constant Approximator
// Course: CSC 1101
// Lab Number: 15
// Author: caleb obi
// Date: March 19, 2019
// Description:
// Approximate the value of e by using a value-returning function
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
double euler(int num) {
	double e_approx = 1;
	double factorial = 1;
	// Euler's formula
	for (int i = 1; i <= num; i += 1)
	{
		factorial = factorial / i;
		e_approx += factorial;
	}
	return e_approx;
}
int main()
{
	// Declare variables
	int n;
	double e;
	// Show application header
	cout << "Welcome to the Euler's Constant Approximator!" << endl;
	cout << "---------------------------------------------" << endl <<
		endl;
	// Read from console
	cout << "Enter the number of terms you would like to use to approximate Euler constant: ";
	cin >> n;
	e = euler(n);
	//// Validation loop to approximate pi
	while (n < 1) {
		cout << "Error: the number of terms needed to estimate emust be";
		cout << " at least 1." << endl;
		cout << "Enter the number of terms you would like to use to approximate Euler's constant: ";
		cin >> n;
	}
	// Output Euler's constant approximation
	cout << fixed << setprecision(16); cout << endl;
	cout << "Using " << n << " terms to approximate e: ";
	cout << e;
	cout << endl << endl;
	// Show application close
	cout << "\nEnd of Euler's Constant Approximator" << endl << endl;
	// pause before application window closes
	cout << "press any key to exit ..." << endl;
	_getch();
}