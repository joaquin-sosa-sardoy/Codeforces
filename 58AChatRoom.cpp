// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    string cmp = "hello";
    ll res = 0;
    for(ll i=0; i<s.size(); i++){
        if(s[i] == cmp[res]){
            res = res + 1;
        }
    }
    if(res>=5){
        cout<<"YES"<<' ';
    }else{
        cout<<"NO"<<' ';
    }
    return 0;
}