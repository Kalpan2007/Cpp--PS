// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.


#include<iostream>

using namespace std;

bool endsWith(string str, char ch) {
    int n = str.length();
    for(int i = 0; i < n; i++)
{
    if(str[i] == ch)
        return true;
        }
        return false;
}

int main() {
    string str = "codinggita";
    char ch = 'a';
    cout << endsWith(str, ch) << endl;
    return 0;
}