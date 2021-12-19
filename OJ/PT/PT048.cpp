#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool kt(ll arr[100001],ll n){
    for(int i = 0 ; i< n-1; i++){
        if(arr[i+1]<arr[i]){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    ll arr[100001],n;
    cin>>n;
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    
    if(kt(arr,n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}