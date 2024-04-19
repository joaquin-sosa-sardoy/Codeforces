#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,elem;
    cin>> n >> k >> elem;

    vector<int>original;
    vector<int> arr;

    arr.push_back(0);

    for(int i=0; i<n; i++){
        original.push_back(elem);
    }
    for(int i=0; i<n; i++){
        arr.push_back(arr[i]+original[i]);
    }
    //Aca tengo mi array para las sumas
    
    int res = arr[0]; 
    int prevmin = 0;
    for(int i=k; i<n+1;i++){
        res = max(res, arr[i] + prevmin);
        prevmin = min(prevmin, arr[i]);
    } // [1,2,6,1,1,7,1] ---> [0,1,3,9,10,11,18,19]

    cout<<res-arr[k];
    cout<<"\n";

}

//https://codeforces.com/problemset/problem/363/B