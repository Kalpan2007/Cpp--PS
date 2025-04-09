#include <iostream>
#include <fstream>
#include <sstream>
#include "search.h"
using namespace std;

void searchByRoll() {
    ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        cout << "-> No student records found.\n";
        return;
    }

    int searchRoll;
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    string line;
    bool found = false;

    while (getline(inFile, line)) {
        stringstream ss(line);
        string name;
        int roll;
        float marks;
        char comma;

        getline(ss, name, ',');
        ss >> roll >> comma >> marks;

        if (roll == searchRoll) {
            cout << "\n-> Student Found:\n";
            cout << "Name: " << name << "\nRoll No: " << roll << "\nMarks: " << marks << endl;
            found = true;
            break;
        }
    }
    inFile.close();

    if (!found) {
        cout << "-> Student with Roll No. " << searchRoll << " not found.\n";
    }
}
