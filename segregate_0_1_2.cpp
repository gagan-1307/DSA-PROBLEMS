#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// Approach 1: count 0's, 1's and 2's
void segregate(int arr[], int n){
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    while (mid <= hi) {
        switch (arr[mid]) {

        case 0:
            swap(arr[lo++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    int arr[n];
    inputArray(arr, n);
    cout << "Segregated array: ";
    segregate(arr, n);
    printArray(arr, n);
}

