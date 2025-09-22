#include<bits/stdc++.h>
using namespace std;

void powerSet(string str, int index, string curr){
    int n= str.length();
    if(index == n){
        cout << curr << endl;
        return;
    } 
    powerSet(str, index+1, curr);
    powerSet(str, index+1, curr + str[index]);
}

int main () {
    string str;
    cin >> str;
    powerSet(str, 0, " ");
    return 0;
}