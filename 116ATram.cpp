// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,ai,bi;
    ll res = 0;
    ll minp = 0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>ai>>bi;
        res = res - ai;
        res = res + bi;
        //res = (bi - ai) + res; 
        if(res > minp){
            minp = res;
        }
    }

    cout<<minp<<' ';
    
    return 0;
}