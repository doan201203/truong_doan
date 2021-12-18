#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b,n,conlai;
    cin>>a>>b>>n;
    conlai=n;
    while(conlai>a){
        conlai=n-a;
        n-=a;
    }
    cout<<conlai;
}
