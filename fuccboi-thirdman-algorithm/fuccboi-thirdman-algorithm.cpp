
// Author : Randy Lee
// Professor Dada
// 2017-04-06

#include "stdafx.h"

#include <iostream>
#include <list>

using namespace std;

int main() {
	int i;
	int numOfSuitors;
	list<int> suitors;
	cout << "In an ancient land, a princess searches for a suitor. To test their luck, men come from far "
		"and foreign lands to stand in line. The princess decides who will be her suitor by killing every "
		" third man until only ONE remains.\nUsing Linked Lists, this program will determine what position "
		"a man must stand in line in to live through the third-man gauntlet.\n Tell me how many men have arrived today? : " << endl;
	cin >> numOfSuitors;

	// adds element to list
	for (i = 0; i < numOfSuitors; i++)
		suitors.push_back(i);

	// kill every 3rd person
	int killThisGuy = 3;
	i = killThisGuy;
	list<int>::iterator it = suitors.begin();

	// loop until 1 person remains
	while (suitors.size() > 1) {
		if (--i == 0) {
			// check to see if you gotta kill the third person
			list<int>::iterator suitorsPointer = it++; // move iterator 1 pointer 
			suitors.erase(suitorsPointer); // kill suitor
			i = killThisGuy; // re-arm the counter
		}
		else it++; // if the current suitor is not 3rd, move along

		if (it == suitors.end()) it = suitors.begin(); // if at end, go back to begin
	}
	cout << "To survive, you must stand in position : " << suitors.front() + 1 << endl; // list started at 0
	return 0;
}