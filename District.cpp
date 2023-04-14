#include "District.h"

void District::printParliamentaryResults(ofstream& file)
{
	file << name << "; " << noOfSeats << endl;
	parties.printParliamentaryResults(file);
	file << endl;
}

void District::printPresidentialResults(ofstream& file)
{
	file << name << endl;
	float vote;
	string name;
	for (int i = 0; i < NO_OF_CANDIDATES; i++) {
		vote = 0;
		if (i == 0)
			name = "Erdogan";
		else if (i == 1)
			name = "Kilicdaroglu";
		else if (i == 2)
			name = "Ince";
		else
			name = "Ogan";

		for (int j = 0; j < NO_OF_PARTIES; j++) {
			if ((int)parties.getParty(j)->getCandidate() == i)
				vote += parties.getParty(j)->getVote();
		}

		stringstream stream;
		stream << fixed << setprecision(2) << vote;
		file << name << "; " << stream.str() << endl;
	}
	file << endl;
}

void District::setUmbrella(Alliance alliance, string umbrellaParty)
{
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		if (parties.getParty(i)->getName() != umbrellaParty && parties.getParty(i)->getAlliance() == alliance)
			parties.getParty(i)->setUmbrella(umbrellaParty);
	}
}