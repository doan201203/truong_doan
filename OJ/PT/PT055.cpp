#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX_N 100
ll dp[100000000];
ll lc(int n){
    if(n==0){
        return dp[n]=2;
    }
    if(n==1){
        return dp[n]=1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=lc(n-1)+lc(n-2);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    for(int i=0;i<=n;i++){
        cout<<lc(i)<<" ";
    }
}