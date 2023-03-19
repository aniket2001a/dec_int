#include <bits/stdc++.h>

using namespace std;
#define int long long

string decToBin(int n){
    int k = 0;
    while(n){
        k = k*10 + n%2;
        n /= 2;
    }
    string s = to_string(k);
    reverse(s.begin(), s.end());
    return s;
}

int binToDec(string s){
    int num = 0;
    for(int i=0; i<s.size(); i++){
        num = num*2 + s[i]-'0';
    }
    return num;
}


signed main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}