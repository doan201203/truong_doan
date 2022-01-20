#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100001],x,n;
    cin>>n>>x;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=x;
    sort(arr,arr+n+1);
    for(int i = 0 ; i<=n ;i++){
        if(arr[i]==x){
            cout<<i;
            return 0;
        }
    }
}
