// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include<iostream>

using namespace std;

bool exist(int arr[],int l){
    for(int i =0 ; i<l;i++){
        if(arr[i] == 3){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {1, 2, 3,4, 5};
    int l = sizeof(arr)/sizeof(arr[0]);
    cout << exist(arr,l) << endl; 
    return 0;
 
}
