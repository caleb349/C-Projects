//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <number>
// Author:     <name>
// Date:       <date>
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
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
	//int i;
	//double r;
	//string s;
	//char c;

	// Show application header
	cout << "Welcome Speedskating Application!" << endl;
	cout << "--------------------------" << endl
		 << endl;

	// Read from console
	//cout << "Enter a number: ";
	//cin >> i;

	// Write to screen
	cout << "Hello World!" << endl;
	cout << "skater (m-men; w-women)\t\t\Country\t\Event(meters)\t\t\Time(minutes:seconds)\tAverage Speed(km)" << endl;

	cout << "Pavel Kulizhnikov(m)\t\t\Russia\t\t500\t\t0:33.98\t\t\t0.87"
		 << (21766711. / 296789356) << endl;
	cout << "Shani Davis (m)\t\t\tUSA\t\t1000\t\t1:06.42\t\t\t0.87"
		 << (21766711. / 2967893) << endl;
	cout << "Lee Sang-Hwa(w)\t\t\tSouth Korea\t500\t\t0:36.36\t\t\t0.82"
		 << (21766711. / 2967893) << endl;
	cout << "Nao Kodaira(w)\t\t\tJapan\t\1000\t\t\t1:12.09\t\t\t0.83"
		 << (1336718015. / 3705386) << endl;

	// Show application close
	cout << "\nEnd of my Application" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
