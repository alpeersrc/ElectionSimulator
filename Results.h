#pragma once

#include "District.h"

#define NO_OF_DISTRICTS 87

class Results
{
public:
	Results();
	void setToPrevious();
	void printLocalResults(ofstream& file);
	void printNationalResults(ofstream& file);
	void distributeSeats();
	void calculate();
	void determineTrends();
	void takeInput();

private:
	District districts[NO_OF_DISTRICTS];
	Parties foreseen;
	Parties previous;
};

