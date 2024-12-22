#include<iostream>
using namespace std;

void check(int arr[], int l) {
    for(int i = 0; i < l; i++) {
        if(arr[i] < 0) {
            cout << "False" << endl;
            return;
        }
    }
    cout << "True" << endl;
}

int main() {
    int arr[] = {3, 5, -9, 1, 7};
    int l = sizeof(arr) / sizeof(arr[0]);
    check(arr, l);
}