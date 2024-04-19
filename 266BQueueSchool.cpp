// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    ll n,t;
    cin>>n>>t;
    cin>>s;
    while(t>0){
        for(ll i = 0; i < s.size()-1 ; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }

        t--;
    }
    
    cout<<s<<' ';
    return 0;
}