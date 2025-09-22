#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int n, int sum){
    if(sum == 0) return true;
    if(n == 0) return false;

    if(arr[n-1] > sum){
        return isSubsetSum(arr, n-1, sum);
    }
    return isSubsetSum(arr, n-1, sum) || isSubsetSum(arr, n-1, sum - arr[n-1]);
}

int main () {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int sum;
    cin >> sum;
    bool result = isSubsetSum(arr, n, sum);
    if(result) cout << "YES";
    else cout << "NO";
    return 0;
}