#include "Database.h"

Results results;
ofstream brokenDown;
ofstream overall;

int main()
{
	brokenDown.open("results_brokenDown.csv");
	overall.open("results_overall.csv");
	results.setToPrevious();

	results.calculate();

	results.distributeSeats();
	results.printLocalResults(brokenDown);
	results.printNationalResults(overall);
	overall.close();
	brokenDown.close();
	return 0;
}
