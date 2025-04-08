// 35. Print an inverted right-angled triangle pattern with n rows.


#include <iostream>
using namespace std;

string invertedRightAngleTriangle(int n) {
    string a = "";
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            a += "*";
        }
        a += "\n";
    }
    return a;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << invertedRightAngleTriangle(n);
    return 0;
}