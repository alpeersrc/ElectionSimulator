#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <format>

using namespace std;

enum class Alliance {
	None,
	People,
	Nation,
	Labour
};

enum class Trend {
	Stagnant,
	Debut,
	Rising,
	Declining
};

class Party
{
public:
	Party() {};
	void setName(string partyName) { name = partyName; };
	void setAlliance(Alliance allianceName) { alliance = allianceName; };
	void setTrend(Trend partyTrend) { trend = partyTrend; };
	void setVote(float partyVote) { vote = partyVote; };
	void setSeats(int seats) { noOfSeats = seats; };
	void setVoterBase(string partyName, float factor);
	void setSwing(float partySwing) { swing = partySwing; };
	void setOverTheBarrage(bool barrageStatus) { overTheBarrage = barrageStatus; };
	void grantSeat() { noOfSeats++; };
	string getName() { return name; };
	Alliance getAlliance() { return alliance; };
	Trend getTrend() { return trend; };
	float getVote() { return vote; };
	int getSeats() { return noOfSeats; };
	string getVoterBase1() { return voterBase1; };
	string getVoterBase2() { return voterBase2; };
	float getVoterFactor1() { return voterFactor1; };
	float getVoterFactor2() { return voterFactor2; };
	float getSwing() { return swing; };
	bool isOverTheBarrage() { return overTheBarrage; };

private:
	string name = "NA";
	Alliance alliance = Alliance::None;
	Trend trend = Trend::Stagnant;
	float vote = 0;
	int noOfSeats = 0;
	string voterBase1 = "NA";
	string voterBase2 = "NA";
	float voterFactor1 = 0.50;
	float voterFactor2 = 0.50;
	float swing = 1;
	bool overTheBarrage = true;
};
