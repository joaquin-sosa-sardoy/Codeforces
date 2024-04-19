#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll k,n,w;
    cin>>k>>n>>w;
    int dolares=0;
    for(ll i = 1; i <= w; i++){
        dolares = dolares + (i*k);
    }
    dolares = dolares - n;

    if(dolares < 0){
        dolares = 0;
    }

    cout<<dolares<<' ';

    return 0;
}

// https://codeforces.com/problemset/problem/546/A