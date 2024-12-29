#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Define function createEntry
void createEntry() {
	string entry;
	cout << "Enter your journal entry: ";
	cin.ignore();
	getline(cin, entry);
	
	ofstream file("journal.txt", ios::app);
	if (file.is_open()) {
		file << entry << endl;
		file.close();
		cout << "Entry saved successfully!" << endl;
	} else {
	    cout << "Error opening file." << endl;	
	}
}
