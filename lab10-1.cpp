//==========================================================
//
// Title:      Letter Lovers, V2
// Course:     CSC 1101
// Lab Number: 10-1
// Author:     Dan Ouellette
// Date:       11 February 2019
// Description:
//   This C++ console application analyzes the types of
// characters in a string entered by the user.  It prompts
// for and gets from the user a string containing at least
// ten characters.  If the string contains fewer than ten
// characters, it prints an error message.  If the string
// contains at least ten characters, it tests the third,
// sixth, and ninth characters to answer the following:
//   -Is the character a digit?
//   -Is the character alphanumeric?
//   -Is the character punctuation?
// It shows the results for each character analysis.
//
//==========================================================
#include <conio.h>   // For function getch()
#include <cstdlib>   // For several general-purpose functions
#include <fstream>   // For file handling
#include <iomanip>   // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>    // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare constants
  const int COLFMT1 = 18;
  const int COLFMT2 = 12;

  // Declare variables
  string s;

  // Format real numbers
  cout << fixed << setprecision(2);

  // Show application header
  cout << "Welcome to Letter Lovers, V2" << endl;
  cout << "------------------------" << endl
       << endl;

  // Prompt for and get string
  cout << "Enter a string with at least ten characters: ";
  getline(cin, s);
  // using validation
  /*while (s <= 10 || s > 10)
  {
	  cout << "Error: invalid year of " << s << "." << endl;
	  cout << "\nEnter a string with at least ten characters: ";
	  cin >> s;
  }*/
  // validation loop: loop until valid tempereature entered
  //cout << "Enter a String with at least ten characters: ";
  //cin >> s;
  //while (s <= 10 || s > 10)
  // // Using Kayla four - digit validation
  //{
  // cout << "Error:invalid year of " << s << endl;
  // cout << "Enter a String with at least ten characters: ";
  // cin >> s;

  //}
  // Test if string has less than ten characters
  if (s.length() < 10)
    cout << endl
         << "Error: the string must contain at "
         << "least ten characters." << endl;
  else
  {

    // Show inputs and outputs
    cout << endl;
    cout << "Output key: zero-false; non-zero-true" << endl;

    // Show inputs and outputs
    cout << endl;
    cout << setw(COLFMT1) << left << "String:"
         << setw(COLFMT2) << right << s << endl;
    cout << setw(COLFMT1) << left << "Length:"
         << setw(COLFMT2) << right << s.length() << endl;

    // Print third character stats
    cout << endl;
    cout << setw(COLFMT1) << left << "Third character:"
         << setw(COLFMT2) << right << s[2] << endl;
    cout << setw(COLFMT1) << left << "-Digit?"
         << setw(COLFMT2) << right << isdigit(s[2]) << endl;
    cout << setw(COLFMT1) << left << "-Alpha?"
         << setw(COLFMT2) << right << isalpha(s[2]) << endl;
    cout << setw(COLFMT1) << left << "-Punct?"
         << setw(COLFMT2) << right << ispunct(s[2]) << endl;

    // Print sixth character stats
    cout << endl;
    cout << setw(COLFMT1) << left << "Sixth character:"
         << setw(COLFMT2) << right << s[5] << endl;
    cout << setw(COLFMT1) << left << "-Digit?"
         << setw(COLFMT2) << right << isdigit(s[5]) << endl;
    cout << setw(COLFMT1) << left << "-Alpha?"
         << setw(COLFMT2) << right << isalpha(s[5]) << endl;
    cout << setw(COLFMT1) << left << "-Punct?"
         << setw(COLFMT2) << right << ispunct(s[5]) << endl;

    // Print ninth character stats
    cout << endl;
    cout << setw(COLFMT1) << left << "Ninth character:"
         << setw(COLFMT2) << right << s[8] << endl;
    cout << setw(COLFMT1) << left << "-Digit?"
         << setw(COLFMT2) << right << isdigit(s[8]) << endl;
    cout << setw(COLFMT1) << left << "-Alpha?"
         << setw(COLFMT2) << right << isalpha(s[8]) << endl;
    cout << setw(COLFMT1) << left << "-Punct?"
         << setw(COLFMT2) << right << ispunct(s[8]) << endl;
  }

  // Show application close
  cout << "\nEnd of Letter Lovers" << endl
       << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();
}
