#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int res = 0;
    while(n > 0){
        res = res + 1;
        n = n - 5;
    }
    cout << res << ' ';

    return 0;   
}

// https://codeforces.com/problemset/problem/617/A