#include<bits/stdc++.h>
using namespace std;

void isKbitSet(int n, int k){
    int x = (1 << (k-1));
    if((n&x) != 0) cout << "YES";
    else cout << "NO";
    /*int x = (n >> (k-1));
      if((1&x) != 0) cout << "YES";
      else cout << "NO";*/
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    isKbitSet(n, k);
    return 0;
}