#include<bits/stdc++.h>
using namespace std;

int knapsackBounded(int wei, vector<int> & weight, vector<int> & value, int n){
    if(wei == 0 || n == 0) return 0;
    if(weight[n-1] > wei){
        return knapsackBounded(wei, weight, value, n-1);
    } else {
        return max(knapsackBounded(wei, weight, value, n-1),value[n-1] + knapsackBounded(wei - weight[n-1], weight, value, n-1));
    }

}

int main () {
    int n;
    cin >> n;
    vector<int> weight;
    for(int i=0; i<n; i++){
        int temp1;
        cin >> temp1;
        weight.push_back(temp1);
    }
    vector<int> value;
    for(int i = 0; i<n; i++){
        int temp2;
        cin >> temp2;
        value.push_back(temp2);
    }
    int wei;
    cin >> wei;
    cout << knapsackBounded(wei, weight, value, n);
    return 0;
}