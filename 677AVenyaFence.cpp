#include <bits/stdc++.h>

#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;
using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k,ai,resm;
    resm=0;
    cin >> n >> k;
    while(n){
        cin >> ai;
        if(ai <= k){
            resm = resm+1;
        } else {
            resm = resm+2;
        }
        n--;
    }
    cout<<resm<<' ';
    return 0;
}


// https://codeforces.com/problemset/problem/677/A