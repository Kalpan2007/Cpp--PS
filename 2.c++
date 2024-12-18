// 2. Write a function to determine whether a given number is positive, negative, or zero.
#include <iostream>
#include <string>
using namespace std;

string fn(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
}

int main() {
    fn();
    return 0;
}