#pragma once

#include "Party.h"

#define NO_OF_PARTIES 17
#define NO_OF_ALLIANCES 3
#define BARRAGE 7.0

class Parties
{
public:
	Parties();
	Party* getParty(string partyName);
	Party* getParty(int index) { return &parties[index]; };

	void printParliamentaryResults(ofstream& file);
	void distributeSeats(int noOfSeats);
	void calculate(Parties* previous, Parties* foreseen);
	void findSwings(Parties* previous);
	void assessBarrage();
	void backUp();

private:
	Party prevParties[NO_OF_PARTIES];
	Party parties[NO_OF_PARTIES];
};

