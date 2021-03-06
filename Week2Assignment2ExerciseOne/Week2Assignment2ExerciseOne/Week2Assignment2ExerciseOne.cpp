// Week2Assignment2Exercise1
// Paxston Gulledge
//
#include "stdafx.h"
#include <iostream> 
#include <iomanip>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

const int maxCandidates = 5;
string tempString = "";
double tempVotes = 0;
double totalVotes = 0;
double maxVotes = 0;
int winner = 0;
vector<string> candidateList;
vector<double> candidateVotes;

int main()
{

	//For loop to push the vectors back as many candidates are necessary, set in the constant above.
	for (int i = 0; i < maxCandidates; i++)
	{
		cout << "Please input the " << maxCandidates << " candidates names followed by the number of votes they received i.e. Brady 3000: " << endl;
		cin >> tempString >> tempVotes;
		candidateList.push_back(tempString);
		candidateVotes.push_back(tempVotes);
		//Totalvotes is used to calculate percentage of votes each candidate gets later
		totalVotes = totalVotes + tempVotes;
		//maxVotes stores the highest votes a candidate has and sets winner to their array index
		if (tempVotes > maxVotes)
		{
			maxVotes = tempVotes;
			winner = i;
		}
	}
	//formatting for display
	cout << "Name:" << setw(15) << "Votes:" << setw(15) << "Percentage:" << endl;
	for (int i = 0; i < maxCandidates; i++)
	{
		//displays name and percentage of votes they received
		cout << candidateList[i] << setw(15) << candidateVotes[i] << setw(15);
		double percentage = (candidateVotes[i] / totalVotes) * 100;
		cout << percentage << "%" << endl;
	}
	cout << "The winner of the election is: " << candidateList[winner] << endl;



	// Force the console to stay open until a key is pressed
	cout << endl;
	system("pause");
	return 0;
}