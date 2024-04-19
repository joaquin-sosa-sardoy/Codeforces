// https://codeforces.com/group/gmV7IkT2pN/contest/516385/problem/0

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ai;
    cin>>n;
    for(int i=0; i < n; i++){
        cin>>ai;

        if(ai >= 1900){
            cout<<"Division 1"<<'\n';
        }
        else if(1600 <= ai && ai <= 1899){
            cout<<"Division 2"<<'\n';
        }
        else if(1599>= ai && ai>= 1400){
            cout<<"Division 3"<<'\n';
        }
        else if(1399 >= ai){
            cout<<"Division 4"<<'\n';
        }
    }
    
    return 0;
}