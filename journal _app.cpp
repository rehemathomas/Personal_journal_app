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
	} else {
	    cout << "No entries found. Start by creating one!" << endl;
	}	
}

// Define function deleteEntries
void deleteEntries() {
	ofstream file("journal.txt", ofstream::trunc);
	if (file.is_open()) {
		file.close();
		cout << "All entries deleted successfully!" << endl;
	} else {
		cout << "Error deleting entries." << endl;
	}
}

// Define function showMenu
void showMenu() {
	int choice;
	do {
		cout << "\nPersonal Journal App Menu" << endl;
		cout << "1. Create a New Journal Entry" << endl;
		cout << "2. View All Journal Entries" << endl;
		cout << "3. Delete All Journal Entries" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch (choice) {
			// cases to be added here
		}
	} while (choice != 4);	
}



