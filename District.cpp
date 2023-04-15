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
	float vote[NO_OF_CANDIDATES];
	string name;
	for (int i = 0; i < NO_OF_CANDIDATES; i++) {
		vote[i] = 0;
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			if ((int)parties.getParty(j)->getCandidate() == i)
				vote[i] += parties.getParty(j)->getVote();
		}
	}

	float prevGreatest = 100;
	float greatest;
	int index = 0;
	for (int i = 0; i < NO_OF_CANDIDATES; i++) {
		greatest = 0;
		for (int j = 0; j < NO_OF_CANDIDATES; j++) {
			if (vote[j] > greatest && vote[j] < prevGreatest) {
				index = j;
				greatest = vote[j];
			}
		}
		prevGreatest = greatest;

		if (index == 0)
			name = "Erdogan";
		else if (index == 1)
			name = "Kilicdaroglu";
		else if (index == 2)
			name = "Ince";
		else
			name = "Ogan";

		stringstream stream;
		stream << fixed << setprecision(2) << vote[index];
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