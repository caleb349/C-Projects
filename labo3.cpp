//==========================================================
//
// Title:      <calculations apps>
// Course:     CSC 1101
// Lab Number: <Lab03>
// Author:     Caleb obi
// Date:       1/8/2019
// Description:
//   This c++ program is the code template for csc 1101
//Every program created in csc 1101 starts with this
//code
//
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

 // Declare  Variables 
	int width = 2;
	int height = 3;

	int TotalArea;


  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

// calculate total and average 
  TotalArea = 4 * width * height;
  cout << "totalArea" << endl;
  

  // Calculate and show Inputs and Output
  cout << "TotalArea amounts" << endl;
  cout << "width                    " << width << endl;
  cout << "height                   " << height << endl;
  cout << "TotalArea                " << TotalArea << endl;


  // Read from console
  //cout << "Enter a number: ";
  //cin >> i;


  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch(); 

}
