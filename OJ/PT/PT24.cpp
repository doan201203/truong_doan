#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,tmp,sum=0,i=1; cin>>n;
    while(n>0){
        tmp= n%2;
        sum+=(i*tmp);
        n=n/2;
        i=i*10;
    }
        cout<<sum;
}