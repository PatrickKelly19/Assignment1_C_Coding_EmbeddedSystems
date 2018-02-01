/*
Author: Patrick Kelly
Date Created: 26/01/2018
*/

#ifndef TEMP_H
#define TEMP_H
#define _CRT_SECURE_NO_WARNINGS //Eliminating deprecation warnings
#include <stdio.h>
#include <math.h>

typedef struct TEMP
{
	char sigName[10];
	float presentTemp;
	float previousTemp;
	void(*Print)(); //Print is a pointer to a function that returns a void

}temperature;

void print_Values(const temperature *const tm, const int x); //Function prototypes

void calculate_Temp(const struct temperature *const tm);

void structs(struct temperature *const tm);

#endif