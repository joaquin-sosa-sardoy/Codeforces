// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k;
    cin >> n >> k;
    for(ll i=0; i<k; i++){
        if(n % 10 == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }
    cout<<n<<' ';
    return 0;
}