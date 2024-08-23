#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void segregate(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
        if(arr[i] == 0)
            count++;
    
    for (int i = 0; i < count; i++)
       arr[i] = 0;

    for (int i = count; i < n; i++)
        arr[i] = 1;
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

