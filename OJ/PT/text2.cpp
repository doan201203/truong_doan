#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int somu;
	if(n<0){
		cout<<"-";
		n=n*-1;
	}
		for(int i = 2; i <= n ; i++){
		somu=0;
		while(n%i == 0){
			++somu;
			n=n/i;
		}
		if(somu){
			if(somu>1){
				cout<<i<<"^"<<somu;
			}else{
				cout<<i;
			}
			if(n>i) cout<<"*";
		}
	}
}
