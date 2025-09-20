#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << fibo(i)<< " ";
    }
    return 0;
}