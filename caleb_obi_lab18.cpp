//==========================================================
//
// Title:      <Tumbering Tigers>
// Course:     CSC 1101
// Lab Number: <lab 18>
// Author:     <caleb obi>
// Date:       <2/28/2019>
// Description:
//   C++ console application that tracks scoring for Detroit Tiger baseball games
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// add the total score for each team
int teamScore(int runs[], int inning)
{
	int score = 0;
	// loooping through an array
	for (int i = 1; i <= inning; i++)
	{
		score = runs[i] + score;
	}
	return(score);
}
int teamHigh(int runs[])
{
	int highScore = 0, index = 0;
	// loop throught the array 
	for (int z = 1; z < 6; z++)
	{
		if (runs[z] > highScore)
		{
			highScore = runs[z];
			index = z;
		}
	}
	return(index);
}
// printscore function to print out the soore after each inning
void printscore(int runsPirate[], int runsTigers[], int innings)
{
	cout << "Box score after " << innings << " inning(s)" << endl;
	cout << "---------------------------------------" << endl;
	cout << setw(9) << left << "Teams";
	//loop to print the inning num
	for (int i = 1; i <= innings; i++)
	{
		cout << setw(5) << right << i;
	}
	cout << setw(5) << right << "T" << endl;
	cout << setw(9) << left << "Pirates: ";
	// loop to print score
	for (int x = 1; x <= innings; x++)
	{
		cout << setw(5) << right << runsPirate[x];
	}
	// get the team score
	cout << setw(5) << right << teamScore(runsPirate, innings);
	cout << endl;
	cout << setw(9) << left << "Tigers: ";
	// loop through the loop to print out the score to the screen
	for (int y = 1; y <= innings; y++)
	{
		cout << setw(5) << right << runsTigers[y];
	}
	cout << setw(5) << right << teamScore(runsTigers, innings) << endl << endl;
}

int main()
{
	// int arrays to score scores for th teams
	int tigerScore[6]; 
	int pirateScore[6];

	// integer variables for score input for each teams
	int tScoreIn; 
	int PScoreIn;

	// show application header
  

  // Show application header
  cout << "Tumbering Tigers!" << endl;
  cout << "--------------------------" << endl << endl;


  // loop to count the innings, will run till 5 innings
  for (int i = 1; i < 6; i++)
  {
	  cout << "Innings " << i << endl;
	  cout << "Enter Tigers runs: ";
	  cin >> PScoreIn;
	  // add the scores to the array
	  pirateScore[i] = PScoreIn;
	  cout << "Enter Blue jays runs: ";
	  cin >> tScoreIn;
	  tigerScore[i] = tScoreIn;
	  cout << endl;
	  printscore(pirateScore, tigerScore, i);
  }
  // print out the highest score from both the teams
  cout << "Team high inning" << endl;
  cout << "Pirates:  " << teamHigh(pirateScore) << endl;
  cout << "tigers:  " << teamHigh(tigerScore) << endl;
  

  // Show application close
  cout << "\nEnd of Tumbering tigers" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
