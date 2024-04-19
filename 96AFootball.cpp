//https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,s2;
    cin>>s;
    ll res = 0;
    s2="NO";
    for(ll i=0; i < s.size()-1; i++){
        if(s[i] == s[i+1]){
            res = res + 1;
            if(res == 6){
                s2 = "YES";
            }
        }
        else {
            res = 0;
        }
    }
    cout<<s2<<' ';

    return 0;
}