#include "Parties.h"

Parties::Parties()
{
	parties[0].setName("AKP");
	parties[0].setAlliance(Alliance::People);
	parties[0].setVoterBase("CHP", 0.67);
	parties[0].setVoterBase("IYIP", 0.33);
	parties[0].setCandidate(Candidate::Erdogan);

	parties[1].setName("MHP");
	parties[1].setAlliance(Alliance::People);
	parties[1].setVoterBase("IYIP", 0.9);
	parties[1].setVoterBase("CHP", 0.1);
	parties[1].setCandidate(Candidate::Erdogan);

	parties[2].setName("CHP");
	parties[2].setAlliance(Alliance::Nation);
	parties[2].setVoterBase("IYIP", 0.67);
	parties[2].setVoterBase("YSP", 0.33);
	parties[2].setCandidate(Candidate::Kilicdaroglu);

	parties[3].setName("IYIP");
	parties[3].setAlliance(Alliance::Nation);
	parties[3].setVoterBase("CHP", 0.5);
	parties[3].setVoterBase("MHP", 0.5);
	parties[3].setCandidate(Candidate::Kilicdaroglu);

	parties[4].setName("SP");
	parties[4].setAlliance(Alliance::Nation);
	parties[4].setVoterBase("AKP", 0.8);
	parties[4].setVoterBase("CHP", 0.2);
	parties[4].setUmbrella("CHP");
	parties[4].setCandidate(Candidate::Kilicdaroglu);

	parties[5].setName("YSP");
	parties[5].setAlliance(Alliance::Labour);
	parties[5].setVoterBase("CHP", 0.8);
	parties[5].setVoterBase("AKP", 0.2);
	parties[5].setCandidate(Candidate::Kilicdaroglu);

	parties[6].setName("DEVA");
	parties[6].setAlliance(Alliance::Nation);
	parties[6].setVoterBase("AKP", 0.9);
	parties[6].setVoterBase("CHP", 0.1);
	parties[6].setUmbrella("CHP");
	parties[6].setCandidate(Candidate::Kilicdaroglu);

	parties[7].setName("GP");
	parties[7].setAlliance(Alliance::Nation);
	parties[7].setVoterBase("AKP", 0.9);
	parties[7].setVoterBase("YSP", 0.1);
	parties[7].setUmbrella("GP");
	parties[7].setCandidate(Candidate::Kilicdaroglu);

	parties[8].setName("TIP");
	parties[8].setAlliance(Alliance::Labour);
	parties[8].setVoterBase("CHP", 0.75);
	parties[8].setVoterBase("YSP", 0.25);
	parties[8].setCandidate(Candidate::Kilicdaroglu);

	parties[9].setName("MP");
	parties[9].setVoterBase("CHP", 0.8);
	parties[9].setVoterBase("IYIP", 0.2);
	parties[9].setCandidate(Candidate::Ince);

	parties[10].setName("ZP");
	parties[10].setVoterBase("MHP", 0.8);
	parties[10].setVoterBase("IYIP", 0.2);
	parties[10].setCandidate(Candidate::Ogan);

	parties[11].setName("BBP");
	parties[11].setAlliance(Alliance::People);
	parties[11].setVoterBase("AKP", 0.5);
	parties[11].setVoterBase("MHP", 0.5);
	parties[11].setCandidate(Candidate::Erdogan);

	parties[12].setName("YRP");
	parties[12].setAlliance(Alliance::People);
	parties[12].setVoterBase("AKP", 0.5);
	parties[12].setVoterBase("SP", 0.5);
	parties[12].setCandidate(Candidate::Erdogan);

	parties[13].setName("DP");
	parties[13].setAlliance(Alliance::Nation);
	parties[13].setVoterBase("IYIP", 0.75);
	parties[13].setVoterBase("CHP", 0.25);
	parties[13].setUmbrella("CHP");
	parties[13].setCandidate(Candidate::Kilicdaroglu);

	parties[14].setName("HUDAPAR");
	parties[14].setAlliance(Alliance::Nation);
	parties[14].setVoterBase("AKP", 0.5);
	parties[14].setVoterBase("SP", 0.5);
	parties[14].setUmbrella("AKP");
	parties[14].setCandidate(Candidate::Erdogan);
}

Party* Parties::getParty(string partyName)
{
	for (int i = 0; i < NO_OF_PARTIES; i++)
		if (parties[i].getName() == partyName)
			return &parties[i];
	
	return nullptr;
}

void Parties::printParliamentaryResults(ofstream& file)
{
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		if (parties[i].getVote() < 0.01)
			continue;

		stringstream stream;
		stream << fixed << setprecision(2) << parties[i].getVote();
		file << parties[i].getName() << "; " << stream.str() << "; " << parties[i].getSeats() << endl;
	}
}

void Parties::distributeSeats(int noOfSeats)
{
	string winner;
	float greatest, effective;

	for (int i = 0; i < noOfSeats; i++) {
		greatest = 0;
		winner = "NA";
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			if (parties[j].isOverTheBarrage() == false)
				continue;

			effective = parties[j].getVote() / (parties[j].getSeats() + 1);
			if (effective > greatest) {
				greatest = effective;
				winner = parties[j].getName();
			}
		}
		if (winner != "NA")
			getParty(winner)->grantSeat();
		else
			return;
	}
}

void Parties::findSwings(Parties* previous)
{
	assessBarrage();

	Party* party;
	string voterBase1, voterBase2;
	float voterFactor1, voterFactor2, stolen1, stolen2;
	Parties temp;

	// find out how much votes the new parties will steal away nationally
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = getParty(i);
		if (previous->getParty(i)->getVote() == 0) {
			// initialize variables
			voterBase1 = party->getVoterBase1();
			voterBase2 = party->getVoterBase2();
			voterFactor1 = party->getVoterFactor1();
			voterFactor2 = party->getVoterFactor2();

			// calculate stolen vote
			stolen1 = party->getVote() / (1 + (voterFactor2 * previous->getParty(voterBase2)->getVote()) / (voterFactor1 * previous->getParty(voterBase1)->getVote()));
			stolen2 = party->getVote() - stolen1;
			temp.getParty(voterBase1)->setVote(temp.getParty(voterBase1)->getVote() - stolen1);
			temp.getParty(voterBase2)->setVote(temp.getParty(voterBase2)->getVote() - stolen2);
		}
	}

	// calculate swings and set trends
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		if (previous->getParty(i)->getVote() != 0) {
			getParty(i)->setSwing(getParty(i)->getVote() / (previous->getParty(i)->getVote() + temp.getParty(i)->getVote()));
			if (getParty(i)->getSwing() > 1.00)
				getParty(i)->setTrend(Trend::Rising);
			else
				getParty(i)->setTrend(Trend::Declining);
		}
		else
			getParty(i)->setTrend(Trend::Debut);
	}
}

void Parties::assessBarrage()
{
	Party* party;

	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = getParty(i);
		if (party->getAlliance() == Alliance::None && party->getVote() < BARRAGE)
			party->setOverTheBarrage(false);
	}

	float sum;
	for (int i = 1; i <= NO_OF_ALLIANCES; i++) {
		sum = 0;
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			party = getParty(j);
			if (party->getAlliance() == (Alliance)i)
				sum += party->getVote();
		}
		if (sum < BARRAGE) {
			for (int j = 0; j < NO_OF_PARTIES; j++) {
				party = getParty(j);
				if (party->getAlliance() == (Alliance)i)
					party->setOverTheBarrage(false);
			}
		}
	}
}

void Parties::calculate(Parties* previous, Parties* foreseen)
{
	// assess the barrage situation
	for (int i = 0; i < NO_OF_PARTIES; i++)
		getParty(i)->setOverTheBarrage(foreseen->getParty(i)->isOverTheBarrage());

	Parties temp;
	float localVoterBase, nationalVoterBase;
	Party* party;
	string voterBase1, voterBase2;
	float voterFactor1, voterFactor2, sum, stolen;

	// find out how much votes the new parties will steal away in this district
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = foreseen->getParty(i);
		if (party->getTrend() == Trend::Debut) {
			// initialize variables
			voterBase1 = party->getVoterBase1();
			voterBase2 = party->getVoterBase2();
			voterFactor1 = party->getVoterFactor1();
			voterFactor2 = party->getVoterFactor2();
			localVoterBase = getParty(voterBase1)->getVote() * voterFactor1 + getParty(voterBase2)->getVote() * voterFactor2;
			nationalVoterBase = previous->getParty(voterBase1)->getVote() * voterFactor1 + previous->getParty(voterBase2)->getVote() * voterFactor2;

			// calculate the debutant party's local vote
			stolen = party->getVote() * localVoterBase / nationalVoterBase;
			temp.getParty(i)->setVote(stolen);

			// find how much vote was lost by existing parties to the debutant party
			voterFactor1 *= getParty(voterBase1)->getVote() / (getParty(voterBase1)->getVote() + getParty(voterBase2)->getVote());
			voterFactor2 *= getParty(voterBase2)->getVote() / (getParty(voterBase1)->getVote() + getParty(voterBase2)->getVote());
			sum = voterFactor1 + voterFactor2;
			voterFactor1 /= sum;
			voterFactor2 /= sum;
			temp.getParty(voterBase1)->setVote(temp.getParty(voterBase1)->getVote() - stolen * voterFactor1);
			temp.getParty(voterBase2)->setVote(temp.getParty(voterBase2)->getVote() - stolen * voterFactor2);
		}
	}

	// transfer votes from declining parties to rising parties
	float totalPool = 0;
	// find out how much votes were gained by rising parties in this district
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = foreseen->getParty(i);
		if (party->getTrend() == Trend::Rising) {
			voterBase1 = party->getVoterBase1();
			voterBase2 = party->getVoterBase2();
			voterFactor1 = party->getVoterFactor1();
			voterFactor2 = party->getVoterFactor2();
			localVoterBase = getParty(voterBase1)->getVote() * voterFactor1 + getParty(voterBase2)->getVote() * voterFactor2;
			nationalVoterBase = previous->getParty(voterBase1)->getVote() * voterFactor1 + previous->getParty(voterBase2)->getVote() * voterFactor2;
			totalPool += party->getVote() * (1 - (1 / party->getSwing())) * localVoterBase / nationalVoterBase;
		}
	}

	float lost;
	// find out how much votes were lost by declining parties in this district
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = foreseen->getParty(i);
		if (party->getTrend() == Trend::Declining) {
			voterBase1 = party->getVoterBase1();
			voterBase2 = party->getVoterBase2();
			voterFactor1 = party->getVoterFactor1();
			voterFactor2 = party->getVoterFactor2();
			localVoterBase = getParty(voterBase1)->getVote() * voterFactor1 + getParty(voterBase2)->getVote() * voterFactor2;
			nationalVoterBase = previous->getParty(voterBase1)->getVote() * voterFactor1 + previous->getParty(voterBase2)->getVote() * voterFactor2;
			lost = (getParty(i)->getVote() + temp.getParty(i)->getVote()) * (1 - party->getSwing()) * (localVoterBase / nationalVoterBase);
			temp.getParty(i)->setVote(temp.getParty(i)->getVote() - lost);

			for (int j = 0; j < NO_OF_PARTIES; j++) {
				party = foreseen->getParty(j);
				if (party->getTrend() == Trend::Rising) {
					voterBase1 = party->getVoterBase1();
					voterBase2 = party->getVoterBase2();
					voterFactor1 = party->getVoterFactor1();
					voterFactor2 = party->getVoterFactor2();
					localVoterBase = getParty(voterBase1)->getVote() * voterFactor1 + getParty(voterBase2)->getVote() * voterFactor2;
					nationalVoterBase = previous->getParty(voterBase1)->getVote() * voterFactor1 + previous->getParty(voterBase2)->getVote() * voterFactor2;
					stolen = lost * party->getVote() * (1 - (1 / party->getSwing())) * (localVoterBase / nationalVoterBase) / totalPool;
					temp.getParty(j)->setVote(temp.getParty(j)->getVote() + stolen);
				}
			}
		}
	}

	// override previous result with the calculated one
	for (int i = 0; i < NO_OF_PARTIES; i++)
		getParty(i)->setVote(getParty(i)->getVote() + temp.getParty(i)->getVote());

	// assign votes of parties under their respective umbrella parties
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		if (getParty(i)->getUmbrella() != "NA") {
			party = getParty(getParty(i)->getUmbrella());
			party->setVote(party->getVote() + getParty(i)->getVote());
			getParty(i)->setVote(0);
		}
	}

	// normalize the votes to 100%
	sum = 0;
	for (int i = 0; i < NO_OF_PARTIES; i++)
		sum += getParty(i)->getVote();

	for (int i = 0; i < NO_OF_PARTIES; i++)
		getParty(i)->setVote(getParty(i)->getVote() / sum * 100);
}