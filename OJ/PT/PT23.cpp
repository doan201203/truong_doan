#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    for(int i =1 ; i<= n ; i++){
    	int le = 1 , chan = 0;
    	for(int j = i-1 ; j >= 0 ; j--){
    	if(j%2 ==0){
    		cout<<le;
		}else{
			cout<<chan;
		}
	}cout<<"\n";
	}
}