#include<bits/stdc++.h>
using namespace std;

int findOdd(vector<int>& arr, int n){
    // for(int i=0; i<n; i++){
    //      int count = 0;
    //      for(int j=0; j<n; j++){
    //         if(arr[j] == arr[i]){
    //             count++;
    //         }
    //         if(count%2 != 0) return arr[i];
    //      }
    // }
    int res = arr[0];
    for(int i=1; i<n; i++){
        res = res^arr[i];
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << findOdd(arr, n);
    return 0;
}