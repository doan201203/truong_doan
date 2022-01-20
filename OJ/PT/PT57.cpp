#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(int i,int j)

{  if(abs(i)==abs(j) ){
    swap(i,j);
    return j>i;
    }
   return abs(i)>=abs(j);
}
int main(){
    int n,k,arr[100];
    cin>>n;
    for(int i = 0; i <n ;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,fun);
    
    for(int i = 0 ; i < n;i++){
        cout<<arr[i]<<" ";
    }
}