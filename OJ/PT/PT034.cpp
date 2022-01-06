#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans[11];
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    ll sum=0, x,p;
    for(int i=0;i<n;i++){
        int rem=ans[i];
        while(ans[i]){
            p=rem%10;
            x=rem/10;
            sum+=pow(x,p);
            break;
        }
    }
    cout<<sum;
}