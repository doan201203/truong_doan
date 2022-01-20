#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
int degree(int n, int p){
    int ans=0;
    for(int i = p ; i<=n ;i*=p){
        ans=ans + n/i;
    }
    return ans;
}
int nt(int n){
    for(int i = 2 ; i<= sqrt(n); i++){
        if(n%i == 0){
            return 0;
        }
    }
    return n>1;
}
ll souoc(int n){
    ll res=1;
    for(int i = 1; i<=n;i++){
        if(nt(i)){
            res = (ll)(res * (degree(n,i)+1)%m);
        }
    }
    return res%m;
}
int main(){
   ll a;
   cin>>a;
   cout<<(ll)(souoc(a)%m);
}