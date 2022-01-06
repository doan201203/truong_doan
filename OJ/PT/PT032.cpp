#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    int a,b,n,count=0;
    cin>>a>>b>>n;
    while(n){
        n=(n-a)+b;
        count++;
    }
    cout<<count;
}