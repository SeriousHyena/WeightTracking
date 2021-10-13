/*
* Project name: WeightTracking
* Author: Ernest Mack
* Date: 10/13/21
* Description:
* -> use technique of parallel arrays to store data
* -> this will allow for corresponding indices of related data in both arrays
* -> One vector will be for storing person's name
* -> the second vector will be for storing person's weight
* -> prompt the user for the name and weight of five different people
* -> promt out sentance for each person stating their name and weight
* -> use cin.get() to consume the newline character after each entry
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

//create the vectors
vector<int> weightVector;				//store the person's weight
vector<string> nameVector;		//store the person's name
string nameInput;
int weightInput;
int counter = 0;					//initialize a counter for the number of entries (5 max)

int main()
{
	//iterate through the number of entries (5) we want in the vector array
	while (counter <=4)
	{
		counter++;
		cout << "Enter the Person's name: ";
		cin >> nameInput;
		nameVector.push_back(nameInput);		//store the keyboard input into the array
		cout << endl;
		cin.get();

		
		cout << "Enter the person's weight: ";
		cin >> weightInput;
		weightVector.push_back(weightInput);	//store the keyboard input into the array
		cout << endl;
		cin.get();
	}

	//print out the contents of both vectors
	for (int i = 0; i < weightVector.size(); i++)
	{
		cout << (i) <<"."<<" " << nameVector.at(i) << " weighs: " << weightVector.at(i) << " pounds." << endl;
	}

	cout <<endl <<"Vector size is: " << weightVector.size();

	return 0;
}