#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll kt(ll n){
    if(n<2){
        return 0;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    ll n;
    cin>>n;
    for(int i = 2 ; i <= n; i++){
        if(kt(i) == 1){
            cout<<i<<" ";
        }
    }
    return 0;
}