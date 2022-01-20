#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    ll s= 1;
    while(n>0){
    	s = s * n;
    	n-=2;
	}
	cout<<s;
}