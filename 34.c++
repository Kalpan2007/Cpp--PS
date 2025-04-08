// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50]. Output:[10,50]


#include <iostream>
using namespace std;

int mxmn(int arr[],int size){
    cout<<"["<<arr[0]<<","<<arr[size-1]<<"]";
    return 0;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    mxmn(arr,size);
    return 0;
}