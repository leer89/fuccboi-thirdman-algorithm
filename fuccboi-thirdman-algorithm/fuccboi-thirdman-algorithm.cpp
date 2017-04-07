// fuccboi-thirdman-algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <list>

using namespace std;

int main() {
	int i;
	int numOfSuitors;
	list<int> suitors;
	cout << "How many boys came over? : ";
	cin >> numOfSuitors;

	// adds element to list
	for (i = 0; i < numOfSuitors; i++)
		suitors.push_back(i);

	// kill every 3rd fuccboi
	int killThisGuy = 3;
	i = killThisGuy;
	list<int>::iterator it = suitors.begin();

	// loop until 1 fuccboi remains
	while (suitors.size() > 1) {
		if (--i == 0) {
			// check to see if you gotta kill the third fuccboi
			list<int>::iterator suitorsPointer = it++; // move iterator 1 pointer 
			suitors.erase(suitorsPointer); // kill suitor
			i = killThisGuy; // re-arm the counter
		}
		else it++; // was not third, simply goes on

		if (it == suitors.end()) it = suitors.begin(); // if at end, go back to begin
	}
	cout << "The last fuccboi is dude number: " << suitors.front() + 1 << endl; // list started at 0
	return 0;
}