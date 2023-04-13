#include "District.h"

void District::printResults(ofstream& file)
{
	file << name << "; " << noOfSeats << endl;
	parties.printResults(file);
	file << endl;
}