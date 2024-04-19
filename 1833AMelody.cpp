#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k;
    string s;
    cin>>n;
    int res = 0;
    for(ll i = 0; i < n; i++){
        cin>>k;
        cin>>s;
        set<string> mel;
        for(ll j = 0 ; j < k-1; j++){
            mel.insert(s.substr(j, 2));
        }
        res = mel.size();
        cout<<res<<' ';
    }
    
    
    return 0;
}


// https://codeforces.com/contest/1833/problem/A