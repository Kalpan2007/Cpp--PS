// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]



#include<iostream>
using namespace std;

void add(int arr[],int l){
    int nl = l+1;
    arr[nl] = 6;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int lenght = sizeof(arr)/sizeof(arr[0]);
    add(arr,lenght);

    for(int i =0;i<=lenght;i++){
        cout << arr[i] << " ";
    }
}