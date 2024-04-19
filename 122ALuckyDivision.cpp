#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    bool lucky = false;
    cin >> n;
    ll arr[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(ll i = 0; i < 14; i++){
        if(n % arr[i] == 0){
            lucky = true;
        }
    }
    yesif(lucky);
    return 0;
}

// https://codeforces.com/problemset/problem/122/A