// SpeedTrapFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// @author Michael Forman - SpeeTrapFunctions program for calculating fines based on speed differences

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
constexpr auto BASE_TICKET = 60.25; //base ticket fine

using namespace std;

double calcTicket(int d); //function for calculating ticket cost
int calcSpeed(int s, int a); // function for calculating speed difference


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	char again; //char var for asking if users wants another go
	int actualSpeed; //int var takes in speed driver was going from user
	int speedDiff; //holds calculated speed
	double ticketFine;// total fine after calculation
	 
	do {
		int speedLimit = 25 + rand() % 40; //created random speed between 25 and 65
		cout << "The speed limit is " << speedLimit << "\n"
		<< "Enter the driver's speed " << endl;
			cin >> actualSpeed;

		speedDiff = calcSpeed(speedLimit, actualSpeed);//function calls
		ticketFine = calcTicket( speedDiff );

		cout << "The speed limit is " << speedLimit << "\n"
			<< "The driver's speed was " << actualSpeed << "\n";
		cout << setprecision(2) << fixed; //set decimal places
		cout << "The speeding fine is $" << ticketFine << endl;
		cout << "\nWould you like to calculate another ticket?";// go again?
		cin >> again;

	}//end do
	while (again == 'y' || again == 'Y'); //user answeres anything else its no go

	}
/* function to calculate speed difference
/ @param s speed limit from random number
/ @param a actual speed input by user
/ @return mph difference between limit and actual
*/
int calcSpeed(int s, int a) {
	return a - s;
}

/* function to calculate fine based on speed difference
/ @param d  mph difference between limit and actual
/ @return total fine based on difference between limit and actual
*/
double calcTicket(int d) {
	if (d <= 0)
		return 0;
	if (d < 5)
		 return BASE_TICKET;
	if (d < 10)
		return BASE_TICKET + (BASE_TICKET * .05);
	if (d < 20)
		return BASE_TICKET + (BASE_TICKET * .1);
	if (d >= 20 )
		return BASE_TICKET + (BASE_TICKET * .2);
	return 0;

}



