#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(int i,int j)
{
   return abs(i)>abs(j);
}
int main(){
    int n,k;
    cin>>n;
    for(int i = 0; i <n ;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,fun);
    for(int i = 0 ; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
 