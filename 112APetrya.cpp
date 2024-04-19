#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,t;
    cin>>s>>t;
    int res;
    for(ll i=0; i< s.length();i++){
        s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
    }
    if(s < t){
        res = -1;
        cout << res << '\n';
    }
    else if(s == t){
        res = 0;
        cout << res << '\n';
    }
    else{
        res = 1;
        cout << res << '\n';
    }

    return 0;
}

// abcdefg 
// AbCdEfF Si es menor la primera imprimis. 1
// aaaa
// aaaA Si son iguales = 0

// else, -1



// https://codeforces.com/contest/112/problem/A