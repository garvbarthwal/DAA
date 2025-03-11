#include <iostream>
using namespace std;
void linearSearch(int arr[], int n, int key) {
    int comparisons = 0;
    bool found = false;
    for(int i = 0; i < n; ++i) {
        comparisons++; //finds number of comparisons for each input case
        if(arr[i] == key) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << "Present " << comparisons << endl;
    } else {
        cout << "Not Present " << comparisons << endl;
    }
}
int main() {
    int T;
   cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        linearSearch(arr, n, key);
    }
    return 0;
}