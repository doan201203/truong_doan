#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ne 1001
ll min(ll a[1001], ll n){
{
    if (n == 1)
        return a[0];
    return min(a[n-1], min(a, n-1));
}
}
int main(){
    ll a[1001],n;
    cin>>n;
    for(int i=0; i< n; i++){
        cin>>a[i];
    }
    cout<<min(a,n);
}
