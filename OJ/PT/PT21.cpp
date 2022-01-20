#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tong(ll n){
    ll sotach,sum=0;
    while(n){
        sotach=n%10;
        if(sotach % 2== 0){
            sum+=sotach;
        }
        n=n/10;
    }
    return sum;
}
int main() {
  ll t,sum=0,tach,n;
  cin>>t;
  t=abs(t);
  while(t--){
      cin>>n;
      n=abs(n);
      cout<<tong(n)<<"\n";
  }
}