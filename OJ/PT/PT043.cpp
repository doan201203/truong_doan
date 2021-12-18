#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tong(int arr[10001],int n){
    int sum=0;
        for(int i = 0 ; i< n; i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i< n; i++){
            sum+=arr[i];
        }
        return sum;
}
int main(){
    int n,arr[10001]; cin>>n;
    cout<<tong(arr,n);

}