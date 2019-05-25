//==========================================================
//
// Title:      <Spherical Squids>
// Course:     CSC 1101
// Lab Number: <labo4-02>
// Author:     <Caleb obi>
// Date:       <1/27/2019>
// Description:
//   A C++ console application that displays the following world records for speedskating 
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare  constants
	const double pi = 3.14159;
	const int COLFMT1 = 28;
	const int COLFMT2 = 12;

	// Declare variables
	double Radius;
	double Volume;
	double Circumference;
	double SurfaceArea;


	// Show application header
	cout << "Welcome to Spherical Squids!" << endl;
	cout << "--------------------------" << endl << endl;

	// prompt for and get Radius
	cout << "Enter the radius in cm: ";
	cin >> Radius;

	// Volume of a sphere
	Volume = (1.333*3.14159*Radius*Radius*Radius);
	// circumference of a sphere
	Circumference = 2 * pi * Radius;
	// surface area of a sphere :
	SurfaceArea = 4 * pi * (Radius*Radius);


	// Calculate and show inputs and outputs
	cout << endl;
	cout << setw(COLFMT1) << left << "radius:"
		<< setw(COLFMT2) << right << Radius << endl;
	cout << setw(COLFMT1) << left << "Volume:"
		<< setw(COLFMT2) << right << Volume << endl;
	cout << setw(COLFMT1) << left << "Circumference:"
		<< setw(COLFMT2) << right << Circumference << endl;
	cout << setw(COLFMT1) << left << "SurfaceArea:"
		<< setw(COLFMT2) << right << SurfaceArea << endl;



	//cout << "Radius  : " << Radius << endl;
	//cout << right << endl; 
	//cout << "Circumference : " << Circumference << endl;
	//cout << "Surface Area : " << SurfaceArea << endl;

	// Show application close
	cout << "\nEnd of my Application" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}

