// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].



#include <iostream>
using namespace std;

int findDifference(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
        max = arr[i];
        
        if (arr[i] < min)
        min = arr[i];
        }
        
    return max - min;
    }
    
int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int difference = findDifference(arr, n);
    cout  << difference << endl;
    
    return 0;
}