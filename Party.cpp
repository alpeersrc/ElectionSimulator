#include "Party.h"

void Party::setVoterBase(string partyName, float factor)
{
	if (voterBase1 == "NA") {
		voterBase1 = partyName;
		voterFactor1 = factor;
	}
	else {
		voterBase2 = partyName;
		voterFactor2 = factor / (factor + voterFactor1);
		voterFactor1 = voterFactor1 / (factor + voterFactor1);
	}
}

void Party::setJointList(string partyName, int listOrder)
{
	if (jointList1 == "NA") {
		jointList1 = partyName;
		jointListOrder1 = listOrder;
	}
	else {
		jointList2 = partyName;
		jointListOrder2 = listOrder;
	}
}