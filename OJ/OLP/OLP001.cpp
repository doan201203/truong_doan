
   
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
int gt(ll n){
	ll s = 1;
    if(n>=2){
    	for(int i = 2; i <=n; i++){
    		s*=i;
		}return s;
	}else{
		return 1;
	}
}
int main(){
    ll t;
    ll s;
    cin>>t;
    while(t--){
        ll k,n;
        cin>>k>>n;
        cout<<(ll)(gt(k)/(gt(n)*(gt(k-n)))%(m))<<"\n";
    }
    
}