#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    int arr[10000];
    for(int i=0;i<n;++i) cin>>arr[i];
    int k=2;
    bool ok=false;
    while (k<n)
    {   ll sum=0;
        
        for(int i=0;i<k;++i){
            sum+=arr[i];
        }
        for(int i=k;i<n;i++){
            sum=sum-arr[i-k]+arr[i];
            if(sum==0){
                ok=true;
                break;
            }
        }
        k++;
    }
    if(ok==true){
        cout<<"YES";
    }    else cout<<"NO";
}