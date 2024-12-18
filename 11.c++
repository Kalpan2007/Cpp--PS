// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.

#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    int newLength = i + 1;
    for (int k = newLength; k < n; k++)
    {
        arr[k] = 0;
    }
    cout << "Updated array: ";
    for (int l = 0; l < newLength; l++)
    {
        cout << arr[l] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {
        1,
        2,
        2,
        3,
        4,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}




// {1 2 5 2 7 5 }