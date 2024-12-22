// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].



#include<iostream>
using namespace std;

void addToBegining(int arr[],int l){

    int arr2[l+1];
    arr2[0] = 0;
    for(int i =1 ; i<l+1 ; i++){
        arr2[i] = arr[i-1];
    }
    for(int j =0 ; j < l+1 ; j++){
        cout << arr2[j] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4};
    int l = sizeof(arr)/sizeof(arr[0]);
    addToBegining(arr,l);
    return 0;
 
}