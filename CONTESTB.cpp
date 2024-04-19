#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
#define yesif(a) cout<<(a ? "YES" : "NO")<<endl;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,c;
    cin>>n;
    int resA = 0;
    int resB = 0;
    int resC = 0;
    int mayor;
    for(int i=0; i < n; i++){
        cin>>a>>b>>c;
        if(a > b && a > c){
            mayor = a;
        } else if(b > a && b>c){
            mayor = b;
        }
        else{
            mayor = c;
        }

        resA = (mayor - a) + 1;
        resB = (mayor - b) + 1;
        resC = (mayor - c) + 1;

        if(mayor == b && mayor != 0){
            resB = 0;
        }
        if(mayor == c && mayor != 0){
            resC = 0;
        }
        if(mayor == a && mayor != 0){
            resA = 0;
        }
        
        cout<<resA<<' '<<resB<<' '<<resC<<' '<<'\n';
    }
    return 0;
}