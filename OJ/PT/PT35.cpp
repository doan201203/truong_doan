#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,sum = 0; cin>>n;
    if(n <= 0){
        return 0;
    }
    for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int j = n/i;
			if (i == j) {
				sum = sum + i;
			} else {
				sum = sum + i + j;
			}
		}
	}
    sum = sum -n;
    if(sum > n){
        cout<<"YES";
    }else
    
    cout<<"NO";
}
