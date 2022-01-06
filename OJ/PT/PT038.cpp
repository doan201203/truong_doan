#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    ll n,sb,sc; cin>>n;
    if(n==1){
        cout<<"YES";
        return 0;
    }
    sc=n;
    n=n*n;
    ll dem=0;
    sb=n;
    while(n){
        n/=10;
        dem++;
    }
    if(dem % 2 !=0){
        dem=dem+1;
    }
    dem=dem/2;
    ll mu = pow(10,dem);
    ll sum=0,sotach;
    while(sb){
        sotach=sb%mu;
        sum+=sotach;
        sb/=mu;
    }
    if(sum==sc){
        cout<<"YES";
    }else
    cout<<"NO";
    return 0;
}