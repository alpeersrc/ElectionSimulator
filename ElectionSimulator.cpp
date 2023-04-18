#include "Results.h"

Results results;
ifstream dataset;
ofstream brokenDownParliament;
ofstream overallParliament;
ofstream brokenDownPresident;
ofstream overallPresident;
ofstream compact;

int main()
{
	brokenDownParliament.open("results_brokenDown_parliament.csv");
	overallParliament.open("results_overall_parliament.csv");
	brokenDownPresident.open("results_brokenDown_president.csv");
	overallPresident.open("results_overall_president.csv");
	compact.open("results_compact.csv");

	char input;
	cout << "Use dataset or manual input? (d/i)" << endl;
	cin >> input;
	if (input == 'i')
		results.takeInput();
	else {
		cout << "The following datasets were found:" << endl;
		dataset.open("dataset.csv");
		string line;
		getline(dataset, line);
		for (int i = 1; getline(dataset, line); i++) {
			stringstream str(line);
			string pollName;
			getline(str, pollName, ',');
			cout << i << "." << pollName << endl;
		}
		cout << "Please type the number of the dataset you'd like to use." << endl;
		int number;
		cin >> number;
		dataset.clear();
		dataset.seekg(0);
		results.takeDataset(dataset, number);
		dataset.close();
	}

	results.determineTrends();
	results.setToPrevious();
	results.configureUmbrella();
	results.calculate();
	results.distributeSeats();
	results.printLocalResults(brokenDownParliament, brokenDownPresident);
	results.printNationalResults(overallParliament, overallPresident);
	results.printCompactResults(compact);
	overallParliament.close();
	brokenDownParliament.close();
	overallPresident.close();
	brokenDownPresident.close();

	return 0;
}
