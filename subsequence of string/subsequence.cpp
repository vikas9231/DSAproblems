#include<bits/stdc++.h>
using namespace std;

void subSequence(string str, int index, string curr){
    int n = str.length();
    if(index == n){
        cout << curr << endl;
        return;
    }
    subSequence(str, index+1, curr);
    subSequence(str, index+1, curr + str[index]);
}

int main () {
    string str;
    cin >> str;
    subSequence(str, 0, " ");
    return 0;
}