// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).


#include <iostream>
using namespace std;

bool isCentury(int year) {
    return (year % 100 == 0 );
}

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
}




