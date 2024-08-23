#include <bits/stdc++.h> 
using namespace std; 

void rotateArray(int arr[],int k,int n){
    for(int i=0;i<k;i++){
        int last = arr[n-1];
        int j = n-2;
        while (j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = last;
    }
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int lowerBound = 1;
    int upperBound = 100;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n] = {1,2,3,4,5,6,7};

    // srand(static_cast<unsigned int>(time(0)));

    // cout << "Randomly generated elements of array: ";
    // for (int i = 0; i < n; i++) {
    //     arr[i] = lowerBound + (rand() % (upperBound - lowerBound + 1)); // Random number between 1 and 100
    //     cout << arr[i] << " "; // Display the randomly generated elements
    // }
    // cout << endl;

    rotateArray(arr, 3,n);
    cout << "Rotated array: ";
    printArray(arr, n);
 
	return 0; 
}
