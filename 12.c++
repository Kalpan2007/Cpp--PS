// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]




//1st 
#include <iostream>
using namespace std;

void add(int arr[], int l)
{
    int arr2[l + 1];
    for (int i = 0; i < l; i++){
        arr2[i] = arr[i];
    }
    arr2[l] = 6;

    for(int j =0 ; j < l+1 ; j++){
        cout << arr2[j] << " ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    add(arr,l);
}