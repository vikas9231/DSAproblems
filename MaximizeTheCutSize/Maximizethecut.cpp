#include<bits/stdc++.h>
using namespace std;

int MTC(int N, int x, int y, int z){
    if(N == 0) return 0;
    if(N < 0) return INT_MIN;

    int opt1 = 1 + MTC(N-x, x, y,z);
    int opt2 = 1+ MTC(N-y, x, y,z);
    int opt3 = 1 + MTC(N-z, x, y, z);
    int finalans = max(opt1, max(opt2, opt3));
    return finalans;
}

int main() {
    int N;
    cin >> N;
    int x, y, z;
    cin >> x >> y >> z;
    cout << MTC(N, x, y, z);
    return 0;
}