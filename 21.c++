// 21. Write a program to convert a given string to uppercase.


#include<iostream>
#include<string>

using namespace std;

string convertToUpperCase(string str) {
    string result = "";

    for (char ch : str) {
        if (islower(ch)) {
            result += toupper(ch);
        } else {
            result += ch;
        }
    }

    return result;
}


int main() {    
    string input = "kalpan";
    string output = convertToUpperCase(input);
    cout << "Uppercase version of '" << input << "': " << output << endl;
    return 0;
}