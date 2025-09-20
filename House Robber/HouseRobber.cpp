#include<bits/stdc++.h>
using namespace std;

int houseRob(vector<int> &arr, int size, int index){
    if(index >= size) return 0;

    int opt1 = arr[index] + houseRob(arr, size, index+2);
    int opt2 = 0 + houseRob(arr, size, index+1);
    int ans = max(opt1, opt2);
    return ans;
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
    cout << houseRob(arr, n, 0);
    return 0;
}