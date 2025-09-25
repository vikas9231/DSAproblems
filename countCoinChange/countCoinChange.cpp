#include<bits/stdc++.h>
using namespace std;

int countWays(vector<int> &arr, int n, int sum){
    if(sum == 0) return 1;
    if(sum <0){
        return 0;
    }
    if(n == 0 && sum >0){
        return 0;
    }

    return countWays(arr, n-1, sum) + countWays(arr, n-1, sum - arr[n-1]);
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
    cout << countWays(arr, n, sum);
    return 0;
}