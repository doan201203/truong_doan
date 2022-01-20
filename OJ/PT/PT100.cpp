#include<bits/stdc++.h>
//PT100
using namespace std;
int a[10];
vector<int>l;
int main(){
    int n; cin>>n;
    for(int i =9 ;i>=2;i--){
        while(n%i==0){
            n/=i;
            l.push_back(i);
        }
    }
    if(n!=1){
        cout<<-1;
    }else{
		reverse(l.begin(),l.end());
       for(int x : l){
		   cout<<x;
	   }
    }
}