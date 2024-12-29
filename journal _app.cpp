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
}
