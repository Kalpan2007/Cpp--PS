#include<iostream>
#include<string>
using namespace std;

string removeWhitespace(string str) {
    string result = "";
    bool foundNonSpace = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
            foundNonSpace = true;
        }
    }

    return result;
}

int main() {
    string str = " hello ";
    cout << "Original String: '" << str << "'" << endl;

    string trimmedStr = removeWhitespace(str);
    cout << "Trimmed String: '" << trimmedStr << "'" << endl;

    return 0;
}
