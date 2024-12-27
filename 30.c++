// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: n = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9


#include <iostream>
#include<vector>
using namespace std;
int ans (int n){
    int sum1 = 0, sum2 = 0;
    while(n > 0){
        int r = n % 10;
        if(r % 2 == 0)
        sum1 += r;
        else
        sum2 += r;
        n = n / 10;
        }
        cout << sum1 << " " << sum2 << endl;
}

int main(){
    int n = 123123;
    ans(n);
}