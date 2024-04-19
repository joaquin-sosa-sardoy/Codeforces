// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,ai,res,min;
    cin>>n;
    min = 0;
    while(n){
        cin>>ai;
        res = res + ai;
        n--;
    }
    while(res>0){
            min = min + 1;
            res = res - ai;
        }
    cout<<min<<' ';
    return 0;
}