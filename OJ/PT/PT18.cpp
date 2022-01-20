#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    if(n == 0){
    	cout<<"1";
    	return 0;
	}
    int ans =0;
    while(n){
    	ll so; 
    	so=n%10;
    	n/=10;
    	if(so % 2 == 0){
    		++ans;
		}
	}
	cout<<ans;
}