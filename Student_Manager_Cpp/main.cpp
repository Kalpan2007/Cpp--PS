#include <iostream>
#include "write.h"
#include "read.h"
#include "search.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n======== Student Manager ========\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeData();
                break;
            case 2:
                readData();
                break;
            case 3:
                searchByRoll();
                break;
            case 4:
                cout << "-> Exiting program. Goodbye!\n";
                break;
            default:
                cout << "-> Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
