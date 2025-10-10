#include<bits/stdc++.h>
using namespace std;

bool isPowof2(int n){
    if(n==0) {
        return false;
    }
    while(n != 1){
        if(n%2 != 0) {
            return false;
        }
        n = n/2;
    }
    // return ((n&(n-1)) == 0);
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPowof2(n);
    return 0;
}