#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"After iterative bubble sort: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {13,46,24,52,20,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);

     cout << "Before bubble sort: " << "\n";
     for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";

    bubbleSort(arr, n);
    // recursiveBubbleSort(arr,n,0);
    cout << "After recursive bubble sort: " << "\n";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
  }