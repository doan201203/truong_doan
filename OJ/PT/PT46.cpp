#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100001],n;
    cin>>n;
    for(int i = 0 ; i< n;i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<n;i++){
        if(arr[i] >=5 && arr[i]<=7){
            cout<<arr[i]<<" ";
        }
    }
}