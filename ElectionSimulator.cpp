#include "Results.h"

Results results;
ofstream brokenDownParliament;
ofstream overallParliament;
ofstream brokenDownPresident;
ofstream overallPresident;

int main()
{
	brokenDownParliament.open("results_brokenDown_parliament.csv");
	overallParliament.open("results_overall_parliament.csv");
	brokenDownPresident.open("results_brokenDown_president.csv");
	overallPresident.open("results_overall_president.csv");

	char input;
	cout << "Use default or input? (d/i)" << endl;
	cin >> input;
	if (input == 'i')
		results.takeInput();

	results.determineTrends();
	results.setToPrevious();
	results.configureUmbrella();
	results.calculate();
	results.distributeSeats();
	results.printLocalResults(brokenDownParliament, brokenDownPresident);
	results.printNationalResults(overallParliament, overallPresident);
	overallParliament.close();
	brokenDownParliament.close();
	overallPresident.close();
	brokenDownPresident.close();

	return 0;
}
