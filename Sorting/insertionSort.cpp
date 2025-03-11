#include<bits/stdc++.h>
using namespace std;

void recursiveInsetionSort(int arr[],int n,int i){

    if(i==n)
        return;

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }

    recursiveInsetionSort(arr,n,i+1);
}


void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

    cout << "After iterative insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

}
int main() {
    int arr[] = {13,46,24,52,20,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);

     cout << "Before insertion sort: " << "\n";
     for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";

    // insertionSort(arr, n);
    recursiveInsetionSort(arr,n,0);
    cout << "After recursive insertion sort: " << "\n";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
  }