#include<bits/stdc++.h>
using namespace std;
#define ll long long
int kt(int n){
    int sqr=sqrt(n);
    if(sqr*sqr==n)
    return 1;
    return 0;
}
int maxcp(ll arr[100], ll n){
    ll max = 1e9+1;
    for(int i=0 ; i< n ; i++){
        if(kt(arr[i])==1 && arr[i] < max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    ll n,arr[100]; cin>>n;
    if(n<1 || n > 100){
        return 0;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<maxcp(arr,n);
}