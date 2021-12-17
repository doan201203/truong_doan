#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN=1e6;
int n,arr[mxN+1];
int main(){
    cin>>n;
    for(int i = 1; i<=n;i++){
        arr[i]=1e9;
        int i2=i;
     while(i2){
        arr[i]=min(arr[i],arr[i-i2%10]+1);
        i2/=10;
    }
    }
        cout<<arr[n];

}