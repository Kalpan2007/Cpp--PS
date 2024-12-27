// 28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;


#include<iostream>

using namespace std;

int largestNumber(int number1, int number2) {
    if(number1 > number2) {
        return number1;
    } else {
        return number2;
    }
}

int large2(int number1, int number2){
    return max(number1, number2);
}

int main(){
    int number1 = 10;
    int number2 = 20;
    cout << largestNumber(number1, number2) << endl;
    cout << large2(number1, number2) << endl;
    return 0;
}