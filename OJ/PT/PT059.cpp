#include<bits/stdc++.h>
using namespace std;
bool fun(int i , int j){
    return i>j;
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,fun);
    float phantu=n*0.1;
    for(int i=phantu;i>0;i--){
        cout<<arr[i];
    }
}