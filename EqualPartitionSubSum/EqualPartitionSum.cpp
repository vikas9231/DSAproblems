#include<bits/stdc++.h>
using namespace std;

bool equalPartitionSum(vector<int> &arr, int n, int sum){
    if(sum == 0) return true;
    if(n == 0) return false;
    if(arr[n-1] > sum){
        return equalPartitionSum(arr, n-1, sum);
    }

    return equalPartitionSum(arr, n-1, sum) || equalPartitionSum(arr, n-1, sum - arr[n-1]);
}

bool canPartition(vector<int> &arr, int n){
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
    }

    if(totalSum % 2 != 0) return false;

    return equalPartitionSum(arr, n, totalSum/2);
}

int main () {
    int n;
    cin >>n;
    vector<int> arr;
    for(int i=0; i<n;i++){
        int temp ;
        cin >> temp;
        arr.push_back(temp);
    }
    int sum;
    cin >> sum;
    bool result = equalPartitionSum(arr, n, sum);
    if(result){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}