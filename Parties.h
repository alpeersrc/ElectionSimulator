#pragma once

#include "Party.h"

#define NO_OF_PARTIES 15
#define NO_OF_ALLIANCES 3
#define BARRAGE 7.0

class Parties
{
public:
	Parties();
	Party* getParty(string partyName);
	Party* getParty(int index) { return &parties[index]; };

	void printResults(ofstream& file);
	void distributeSeats(int noOfSeats);
	void calculate(Parties* previous, Parties* foreseen);
	void findSwings(Parties* previous);
	void assessBarrage();

private:
	Party parties[NO_OF_PARTIES];
};

