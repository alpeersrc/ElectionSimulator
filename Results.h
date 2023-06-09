#pragma once

#include "District.h"

#define NO_OF_DISTRICTS 87

class Results
{
public:
	Results();
	void setToPrevious();
	void printLocalResults(ofstream& parliament, ofstream& president);
	void printNationalResults(ofstream& parliament, ofstream& president);
	void printCompactResults(ofstream& file);
	void distributeSeats();
	void calculate();
	void determineTrends();
	void takeInput();
	void takeDataset(ifstream& file, int index);
	void configureUmbrella();
	District* getDistrict(string districtName);

private:
	District districts[NO_OF_DISTRICTS];
	Parties foreseen;
	Parties previous;
	Parties results;
};

