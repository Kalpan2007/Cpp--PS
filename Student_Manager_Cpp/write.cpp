#include <iostream>
#include <fstream>
#include "write.h"
using namespace std;

void writeData() {
    ofstream outFile("data.txt", ios::app);
    if (!outFile.is_open()) {
        cout << "-> Unable to open file for writing.\n";
        return;
    }

    string name;
    int roll;
    float marks;

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;

    outFile << name << "," << roll << "," << marks << endl;
    outFile.close();

    cout << "-> Student record added successfully.\n";
}
