#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(int i , int j){
    return i>j;
}
int main(){
    ll arr[700001],k;
    cin>>k;
    for(int i = 0 ; i< k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k,check);
    for(int i = 0 ; i<3;i++){
        cout<<arr[i]<<" ";
    }
    
}