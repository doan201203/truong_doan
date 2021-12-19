#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100001],n;
    cin>>n;
    if(n<1){
        return 0;
    }
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
    }
    int max=arr[0];
    int dem=0;
    for(int i = 0 ; i< n; i++){
        if(arr[i]>=max){
            max=arr[i];
            dem++;
        }
    }
    cout<<max<<" "<<dem;
}