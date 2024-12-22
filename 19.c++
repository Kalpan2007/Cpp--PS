// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include <iostream>
using namespace std;

bool check(int  arr[], int l){
    for(int i = 0; i < l;i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

 int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    cout << check(arr, l) << endl;
    return 0;
 }
