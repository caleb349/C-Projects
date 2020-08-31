
//==========================================================
//
// Title:      <Wheeled Wrens>
// Course:     CSC 1101
// Lab Number: <lab 16>
// Author:     <caleb obi>
// Date:       <3/12/2019>
// Description:
//   A C++ Application that estimates bicycle speed in miles per hour.
// Use a validation loop to prompt for and get from the user the whole-number wheel diameter of a bicycle in inches in the range 10-50
//
//==========================================================
#include <conio.h>	 // For function getch()
#include <cstdlib>	 // For several general-purpose functions
#include <fstream>	 // For file handling
#include <iomanip>	 // For formatted output
#include <iostream>	 // For cin, cout, and system
#include <string>	 // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// speedEstimate
//==========================================================

double speedEstimate(float diameter, double wheel, double pedal, double bikeSpeed)
{
	bikeSpeed = ((diameter * wheel * pedal * PI) / MILES_PER_INCH) * MILES_PER_hour;
	//Declare variables

	//
	const double pi = 3.14159;
	// float PI = 3.1415;
	// double MILES_PER_INCH;
	double MILES_PER_INCH = 1. / (12 * 5280);
	double MINUTES_PER_HOUR = 60;
	// double = 63360;
	//

	//double r = diameter / 2;
	// diameter = 2 * wheel;
	// double c = diameter * pi;
	// double distance = c * pedal*wheel;
	// double vol = diameter * MILES_PER_INCH * pi / MILES_PER_INCH * MILES_PER_HOUR ;

	return bikeSpeed;
}

int main()
{
	// Declare constants
	const int COLFMT1 = 30;
	const int COLFMT2 = 10;

	// declare variables
	char option;
	float diameter;
	float wheel;
	float pedal;
	double speed;
	double vol;
	double bikeSpeed;

	// Show application header
	cout << "Welcome Wheeled Wrens!" << endl;
	cout << "--------------------------" << endl
		 << endl;

	// Prompt user for options
	cout << "Get a bicycle speed estimate ( Y or N) ?  ";
	cin >> option;
	while (option != 'n')
	{
		cout << "Enter the wheel diameter in inches (10-50) : ";
		cin >> diameter;
		while (diameter < 10 || diameter > 50)
		{
			cout << "Error: the diamter amount is not in range " << endl;
			cout << "Enter the wheel diamter in inches (10-50) :  ";
			cin >> diameter;
		}

		cout << "Enter the number of wheel rotations per pedal (0.1-10) : ";
		cin >> wheel;
		//
		while (wheel < 0.1 || wheel > 10)
		{
			cout << "Error: the pedal rotation amount is not in range " << endl;
			cout << "Enter the number of wheel rotation per pedal (0.1-10) :  ";
			cin >> wheel;
		}
		// cout << "'" << wheel << "'is a valid pedal rotation " << endl;
		//
		cout << "Enter the number of pedal rotaton per minute (1-120) : ";
		cin >> pedal;
		while (pedal < 1 || pedal > 120)
		{
			cout << " Error: the pedal rotation per minute is not in range " << endl;
			cout << "Enter the number of pedal rotaton per minute (1-120) :  ";
			cin >> pedal;
		}
		cout << "'" << pedal << "'is a valid diamter" << endl;

		cout << "Wheel diameter (inches):" << setw(22) << diameter << endl;
		cout << "Wheel-to-pedal ratio:" << setw(25) << wheel << endl;
		cout << "Pedal rotations (per minute per hour):" << setw(8) << pedal << endl;
		cout << "Bike speed (miles per hour):" << setw(19) << bikeSpeed << endl;
		// cout << "Wheel diameter (inches):" << setw(22) << diameter << endl;

		cout << "Get another bicycle speed estimate (y or n)? ";
		cin >> option;

		// Show application close
		cout << "\nEnd of my Application" << endl
			 << endl;

		// Pause before application window closes
		cout << "Press any key to exit ..." << endl;
		_getch();
	}
}
