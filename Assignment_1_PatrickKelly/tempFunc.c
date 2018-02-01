/*
Author: Patrick Kelly
Date Created: 26/01/2018
*/

#include "Temp.h"

void structs(temperature *const tm){
	for (int i = 0; i < 4; i++)
	{
		printf("Enter the signal name:\n");
		scanf("%s", tm[i].sigName);
		printf("Enter previous temperature value:\n");
		scanf("%f", &tm[i].previousTemp);
		printf("Enter present temperature value:\n");
		scanf("%f", &tm[i].presentTemp);
		tm[i].Print = print_Values; //set function pointer in each struct to the print function
	}
}

void calculate_Temp(const temperature *const tm){
	float total = 0;
	float average = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		total = total + tm[i].previousTemp;
		total = total + tm[i].presentTemp;
	}
	average = total / (i * 2); //works out temp average
	printf("Average Temperature = %f \n\n", average);
}

void print_Values(const temperature *const tm, const int x) {
		printf("Temperature Values: %d \n", x + 1);
		printf("Singal Name = %s \n", tm[x].sigName);
		printf("Present Temperature = %f \n", tm[x].presentTemp);
		printf("Previous Temperature = %f\n\n", tm[x].previousTemp);
}