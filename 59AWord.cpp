// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    string s2;
    cin >> s;
    char c;
    int res=0;
    int res2=0;
    
    for(ll i = 0; i < s.size(); i++){
        c = toupper(s[i]);
        if(c == s[i]){
            res = res + 1;
        } else {
            res2 = res2 + 1;
        }
    }
    if(res > res2){
        for(ll j=0; j<s.size(); j++){
            s2.push_back(toupper(s[j]));
        }
    } else {
        for(ll j=0; j<s.size(); j++){
            s2.push_back(tolower(s[j]));
        }
    }
    cout<<s2<<' ';

    return 0;
}