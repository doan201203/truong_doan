#include<bits/stdc++.h>
using namespace std;
#define ll long long
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
const ll MOD = (int) 1e9+7;
const ll mL = (ll) 1e18;
ll gt(ll n){
    if(n==1)
    return 1;
    ll res=1;
    for(ll i=2;i<=n;i++){
        res*=i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--)
    {
        string s;
        cin.ignore();
        cin>>s;
        ll n= s.size();
        ll ans=0;
        for (int i = 5 ; i <=n ; i*=5){
               ans=ans+n/i;
        }
        cout<<ans<<"\n";
    }
}
