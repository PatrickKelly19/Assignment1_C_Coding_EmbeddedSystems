/*
Author: Patrick Kelly
Date Created: 26/01/2018
*/

#define _CRT_SECURE_NO_WARNINGS //Eliminating deprecation warnings
#include "Temp.h"

int main()
{
	while (1) {
		temperature tm[4]; //make 4 structures
		structs(&tm); //pass structures to a function to be filled with information
		calculate_Temp(&tm); //function which calculates the average temperature from all info entered and print it 

		tm->Print(&tm, 0); //call the print structure of struct 0
		tm->Print(&tm, 1);
		tm->Print(&tm, 2);
		tm->Print(&tm, 3);
	}
	return 0;
}