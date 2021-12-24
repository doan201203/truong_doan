#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1000000007;
map<ll, ll> Fibo;

ll f(ll n) {
    ll k=n/2;
	if (Fibo.count(n))
    return Fibo[n];
	if (n%2==0)
    {
		return Fibo[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else {

		return Fibo[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}

main(){
	ll n;
	Fibo[0]=Fibo[1]=1;
	cin >> n;
	cout << (n==0 ? 0 : f(n-1));
}