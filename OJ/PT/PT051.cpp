#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int arr[102], k;
    cin>>k;
    for(int i = 0 ; i< k;i++){
        cin>>arr[i];
    }
  sort(arr,arr+k);
    cout<<max(arr,arr+k);
}