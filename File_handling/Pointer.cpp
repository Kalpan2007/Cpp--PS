#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in);
    if (file.is_open()) {
        file.seekg(10, ios::beg); // Move to 10th character
        char ch;
        file.get(ch);
        cout << "Character at position 10: " << ch << endl;
        file.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}