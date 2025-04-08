#include<iostream>
#include<string>    // Include the string library

using namespace std;

string repeatString(string str, int n) {
    string result = "";
    for(int i = 0; i < n; i++) {
        result += str;
    }
    return result;
}

//method-2
string repeatString2(string str, int n) {
    string result = "";
    while(n--) {
        result += str;
    }
    return result;
}

//method-3

int main() {
    string str = "hello";
    int n = 3;
    cout << repeatString(str, n) << endl;
    cout << repeatString2(str, n) << endl;
    return 0;
}
