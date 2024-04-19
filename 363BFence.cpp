#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin>> n>>k;

    vector<int>original(n);
    vector<int> arr(n+1);

    arr.push_back(0);

    for(int i=0; i<n; i++){
        cin >> original[i];
    }

    for(int i=0; i<n; i++){
        arr[i+1] = arr[i] + original[i];
    }
    //Aca tengo mi array para las sumas
    //Tenemos nuestros casos bases:
    int res=0; //Indice inicial.
    int min = arr[k]; // Minimo inicial.
    for(int i = k+1; i < n+1; i++){
        if(arr[i] - arr[i-k] < min){ // Vamos comparando "de 3 en 3 digamos"
            min = arr[i] - arr[i-k]; // Cambiamos si encontramos un minimo.
            res = i-k; // Indice es i - k pues el que encontre está en i-k, pero como el output devuelve un indice NORMAL, no de array. Sumamos 1.
        }
    }
    
    cout<<++res<<"\n";
}

//https://codeforces.com/problemset/problem/363/B