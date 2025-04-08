// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior


#include <iostream>
using namespace std;

string age1(int age) {
    if(age < 13) {
        return "Child";
    } else if(age >= 13 && age <= 19) {
        return "Teenager";
    } else if(age >= 20 && age <= 59) {
        return "Adult";
    } else {
        return "Senior";
    }
}

//methode-2
string age2(int age) {
    switch(age) {
        case 0 ... 12:
            return "Child";
        case 13 ... 19:
            return "Teenager";
        case 20 ... 59:
            return "Adult";
        default:
            return "Senior";
    }
}
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << age1(age) << endl;
    cout << age2(age) << endl;
    return 0;
}