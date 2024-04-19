#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> array;
    int n,numero;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> numero;
        array.push_back(numero);
    }
    
    for(int j=0; j<n; j++){
        cout<<array[j]<<" ";
    }
    cout<<"\n";
}

// Compilación: g++ -Wall -std=c++17 archivo.cpp -o exe.exe