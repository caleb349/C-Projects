//==========================================================
//
// Title:      Alf's Aeronautics
// Course:     CSC 1101
// Lab Number: 10-2
// Author:     Dan Ouellette
// Date:       22 October 2018
// Description:
//   This C++ console application converts planet data.  It
// reads a file by scanning past the header row.  Each 
// detail row in the file contains three tokens (planet, 
// diameter, length of day).  For each detail row, it reads
// each token from the file, converts the diameter from 
// miles to kilometers, and converts the length of day from
// hours to days.  The application then prints both the 
// input and corresponding output tokens.
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

  // Declare constants
  const int COLFMT1 = 11;
  const int COLFMT2 = 10;
  const int COLFMT3 = 19;
  const string INPUT_FILE_NAME = "VINs.txt";

  // Declare variables
  ifstream inFile;
  int lineCount;
  string line;
  string planet;
  double diameterMI;
  double diameterKM;
  double lengthHours;
  double lengthDays;

  // Format real numbers
  cout << fixed << setprecision(1);
  
  // Show application header
  cout << "Welcome to Alf's Aeronautics" << endl;
  cout << "----------------------------" << endl << endl;

  // Attempt to open input file
  inFile.open(INPUT_FILE_NAME);
  if (!inFile.is_open())
    cout << "Error: unable to open file '" 
      << INPUT_FILE_NAME << "'." << endl << endl;
  else 
  {

    // Print read messsage
    cout << "Reading tokens from file '" << INPUT_FILE_NAME
      << "' ..." << endl << endl;

    // Read header row and print column headers
    getline(inFile, line);
    cout << setw(COLFMT1) << left << "Planet"
      << setw(COLFMT2) << right << "Diameter"
      << setw(COLFMT3) << right << "Length"
      << endl;

    // Loop to read from input file
    lineCount = 1;
    while (inFile.good())
    {

      // Read tokens
      inFile >> planet;
      inFile >> diameterMI;
      inFile >> lengthHours;

      // Convert values
      diameterKM = diameterMI / 0.62137;
      lengthDays = lengthHours / 24.;

      // Print input and output values
      cout << setw(COLFMT1) << left << planet
        << setw(COLFMT2) << right << diameterMI
        << setw(COLFMT3) << right << lengthHours
        << endl;
      cout << setw(COLFMT1) << left << planet
        << setw(COLFMT2) << right << diameterKM
        << setw(COLFMT3) << right << lengthDays
        << endl << endl;

      // Increment line pointer
      lineCount = lineCount + 1;

    }

    // Close input file
    inFile.close();
    cout << endl << lineCount << " line(s) read from file '" 
      << INPUT_FILE_NAME << "'." << endl << endl;

  }

  // Show application close
  cout << "End of Alf's Aeronautics" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
