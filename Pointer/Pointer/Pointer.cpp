// Pointer.cpp : reads string into Pointer, displays string forward, backward, forward again
// @author Michael Forman

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

void countForward(size_t itemLength, const char* myPtr);//function for displaying forward
void countBackward(size_t itemLength, const char* myPtr);//function for displaying backward

int main()
{
	char anyKey; //char to cause pause
	const char* myPtr{ "John Doe" }; //string to load
	size_t itemLength{ strlen(myPtr) }; //get length of string

	countForward(itemLength, myPtr); //display forward function call
	countBackward(itemLength, myPtr); //display backward function call
	countForward(itemLength, myPtr); //display forward function call

	cout << "\nPress space key to quit";
	cin >> anyKey;
		exit(0);
}

/* Function to display string forward
/ @param itemLength - length of string
/ @param myPtr - pointer to start of string
*/
void countForward(size_t itemLength, const char* myPtr) {
	for (size_t i{ 0 }; i <= itemLength - 1; ++i) {
		cout << *(myPtr + i);
	}
	cout << "\n";
}

/* Function to display string backward
/ @param itemLength - length of string
/ @param myPtr - pointer to start of string
*/
void countBackward(size_t itemLength, const char* myPtr) {
	for (size_t i{ 1 }; i <= itemLength; ++i) {
		size_t o{ itemLength - i };
		cout << *(myPtr + o);
	}
	cout << "\n";
}
	


