#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    string s1,s2;
    ll equis1=0;
    ll equis2=0;
    char letra1;
    char letra2;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin>>s1>>s2;

        for(ll j=0; j<s1.size(); j++){
            if(s1[j] == 'X'){
                equis1 = equis1 + 1;
            }
        }
        for(ll k=0; k < s2.size(); k++){
            if(s2[k] == 'X'){
                equis2 = equis2 + 1;
            }
        }

        letra1 = s1[s1.size()-1];
        letra2 = s2[s2.size()-1];

        if(equis1 > equis2 && letra1 == 'S' && letra1 == letra2){
            cout<<'<'<<'\n';
        }else if(equis1 < equis2 && letra1 == 'S' && letra1 == letra2){
            cout<<'>'<<'\n';
        }

        else if(equis1 > equis2 && letra1 == 'L' && letra2 == 'L'){
            cout<<"hola0";
            cout<<'>'<<'\n';
        }
        else if(equis1 < equis2 && letra1 == 'L' && letra2 != 'L'){
            cout<<"hola1";
            cout<<'<'<<'\n';
        }
        else if(letra1 == 'M' && letra2 == 'S'){
            cout<<"hola2";
            cout<<'>'<<'\n';
        }
        else if(letra1 == 'M' && letra2 == 'L'){
            cout<<"hola3";
            cout<<'<'<<'\n';
        }
        else if(equis1 > equis2 && letra1 == 'L'){
            cout<<"hola4";
            cout<<'>'<<'\n';
        }
        else if(equis1 < equis2 && letra1 == 'L' && letra2 == 'M'){
            cout<<"hola5";
            cout<<'<'<<'\n';
        }
        else if(equis1 == equis2 && letra1==letra2){
            cout<<'='<<'\n';
        }

    }
    
    return 0;
}