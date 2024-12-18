// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3

#include<iostream>
using namespace std;



int avg(int arr[],int l){
    int sum = 0;
    int ans;
    
    for(int i=0;i<l;i++){
        sum += arr[i];
        ans = sum/l;
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    cout << avg(arr,l) ;
}