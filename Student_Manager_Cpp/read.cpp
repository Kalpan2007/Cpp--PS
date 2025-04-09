#include <iostream>
#include <fstream>
#include "read.h"
using namespace std;

void readData() {
    ifstream inFile("data.txt");

    if (!inFile.is_open()) {
        cout << "-> Unable to open file.\n";
        return;
    }

    string line;
    bool found = false;

    while (getline(inFile, line)) {
        if (line.empty()) continue; // skip blank lines

        if (!found) {
            cout << "\n-> All Student Records:\n";
        }

        cout << "-> " << line << endl;
        found = true;
    }

    inFile.close();

    if (!found) {
        cout << "-> No student records found.\n";
    }
}
