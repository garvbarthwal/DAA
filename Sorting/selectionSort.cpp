#include<bits/stdc++.h>
using namespace std;

//RECURSIVE APPROACH
int minIndex(int arr[],int start,int n){
    if(start==n-1)
      return start;
    
    int minI=minIndex(arr,start+1,n);

    return (arr[start]<arr[minI])? start : minI;
}

void recursiveSelectionSort(int arr[],int n,int index=0){

  if(index==n-1){
      cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    return;
  }

  int minI=minIndex(arr,index,n);

  if(minI!=index) {
    swap(arr[minI],arr[index]);
  }

  recursiveSelectionSort(arr,n,index+1);
}

//ITERATIVE APPROACH
void selection_sort(int arr[], int n) {
  
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }       
    }
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
  }
  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);//calling 
  recursiveSelectionSort(arr,n);//calling
  return 0;
}