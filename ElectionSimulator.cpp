#include "Results.h"

Results results;
ofstream brokenDown;
ofstream overall;

int main()
{
	brokenDown.open("results_brokenDown.csv");
	overall.open("results_overall.csv");

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
	results.printLocalResults(brokenDown);
	results.printNationalResults(overall);
	overall.close();
	brokenDown.close();

	cout << "See results_overall.csv for overall results." << endl;
	cout << "See results_brokenDown for results in every district." << endl;

	return 0;
}
