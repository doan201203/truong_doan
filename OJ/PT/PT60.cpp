#include<bits/stdc++.h>
using namespace std;
bool fun(float i, float j){
    return i>j;
}
int main(){
    int n,t;
    cin>>n>>t;
    float arr[1000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,fun);
    float sum=0;
    for(int i = 0 ; i<t;i++ )
        sum+=arr[i];
    cout<<setprecision(1)<<fixed<<sum;
}