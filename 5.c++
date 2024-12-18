// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to vote.";
    }
    else
    {
        cout << "You are not eligible to vote.";
    }
    return 0;
}