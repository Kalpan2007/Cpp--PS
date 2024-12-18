#include <iostream>
using namespace std;

void checkCharacter(char ch) {
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a Vowel" << endl;
    }
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a Consonant" << endl;
    }
    else {
        cout << ch << " is not a valid alphabet character" << endl;
    }
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    checkCharacter(ch);

    return 0;
}
