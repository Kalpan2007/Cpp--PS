#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int l, int &even, int &odd) {
    even = 0;
    odd = 0;
    for (int i = 0; i < l; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
}

int main() {
    int arr[] = {4, 6, 7, 8, 9}; 
    int l = sizeof(arr) / sizeof(arr[0]); 

    int even = 0, odd = 0;
    countEvenOdd(arr, l, even, odd);
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;

    return 0;
}
