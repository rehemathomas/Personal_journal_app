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

// Define function viewEntries
void viewEntries() {
	ifstream file("journal.txt");
	if (file.is_open()) {
		string line;
		cout << "\nYour Journal Entries:\n";
		cout << "-----------------------" << endl;
		while (getline(file, line)) {
			cout << "- " << line << endl;
		}
		file.close();
		cout << "-----------------------\n" << endl;
}

