#include<bits/stdc++.h>
using namespace std;
int mina(int arr[100], int n){
    int i,vtmin=0,min=99999;
    for(i = 0 ; i < n ; i++){
        if(arr[i]<min){
            min=arr[i];
            vtmin=i;
        }
    }
    return vtmin;
}
int maxa(int arr[100], int n){
    int i,vtmax=0,max=arr[0];
    for(i = 0 ; i < n ; i++){
        if(arr[i]>max){
            max=arr[i];
            vtmax=i;
        }
    }
    return vtmax;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    cout<<abs(maxa(arr,n)-mina(arr,n));

}