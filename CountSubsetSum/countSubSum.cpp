#include<bits/stdc++.h>
using namespace std;

int countSubSum(vector<int> &arr, int n, int sum){
    if(n == 0){
        return (sum == 0)?1:0;
    }
    if(arr[n-1] > sum){
        return countSubSum(arr, n-1, sum);
    }
    return countSubSum(arr, n-1, sum) + countSubSum(arr, n-1, sum - arr[n-1]);
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
    cout << countSubSum(arr, n, sum);
    return 0;
}