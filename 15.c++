#include <iostream>
using namespace std;

int removeElement(int arr[], int size, int elementToRemove) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != elementToRemove) {
            arr[j] = arr[i];
            j++;
        }
    }
    return j; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elementToRemove = 5;

    
    size =  removeElement(arr, size, elementToRemove);
    printArray(arr, size);

    return 0;
}