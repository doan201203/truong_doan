#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500
vector<ll> ok;
ll fact(ll n){
    ll sum =1;
    if(n==0 || n==1)
    return 1;
    for(ll i=2;i<=n;i++){
        sum*=i;
    }
    return sum;
}

int main(){
    ll sum1=0;
	cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    for(ll i=1;i<n;i++){
        ll tmp=i;
        ll sum=0;
        while (tmp)
        {   ll c=i;
            ll j=tmp%10;
            sum+=fact(j);
            if(sum%(n-1)==0){
                sum1+=c;
            }
            tmp/=10;

        }
        
    }
    cout<<sum1;
}
