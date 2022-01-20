#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    int ans =0;
    while(n!=0){
    	ll so; 
    	so=n%10;
    	n/=10;
    	if(so % 2 != 0){
    		++ans;
		}
	}
	cout<<ans;
}