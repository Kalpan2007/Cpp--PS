// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]

#include <iostream>
using namespace std;

void printEvenIndexes(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printEvenIndexes(arr, n);

    return 0;
}