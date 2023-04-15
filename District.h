#pragma once
#include "Parties.h"

class District
{
public:
	District() {};
	void setName(string partyName) { name = partyName; };
	void setCensus(int districtCensus) { census = districtCensus; }
	void setVote(string partyName, float partyVote) { parties.getParty(partyName)->setVote(partyVote); };
	void setNoOfSeats(int number) { noOfSeats = number; };
	void setUmbrella(string party, string umbrellaParty) { parties.getParty(party)->setUmbrella(umbrellaParty); };
	void setUmbrella(Alliance alliance, string umbrellaParty);
	void setJointList(string party, string listedParty, int order) { parties.getParty(party)->setJointList(listedParty, order); };
	string getName() { return name; };
	int getCensus() { return census; };
	float getVote(string partyName) { return parties.getParty(partyName)->getVote(); };
	int getNoOfSeats() { return noOfSeats; };
	int getNoOfSeats(string partyName) { return parties.getParty(partyName)->getSeats(); };

	void printParliamentaryResults(ofstream& file);
	void printPresidentialResults(ofstream& file);
	void distributeSeats() { parties.distributeSeats(noOfSeats); };
	void calculate(Parties* previous, Parties* foreseen) { parties.calculate(previous, foreseen); };

private:
	string name = "NA";
	int census = 1;
	int noOfSeats = 1;
	Parties parties;
};

