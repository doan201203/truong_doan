#include<bits/stdc++.h>
using namespace std;
bool fun(int i, int j){
    return i>j;
}
int main(){
    int n;cin>>n;
    int pt=n/10;
    int arr[1000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,fun);
    // int pt=arr[0]/10;
    for(int i=0;i<pt;i++)
        cout<<arr[i]<<" ";
}