#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    int n;  cin>>n;
    int sb;
    sb=n;
    ll sotach,k=0;
    vector<int> ans;
    while(n){
        sotach=n%10;
        n/=10;
        ans.push_back(sotach);
        k++;
    }
    int sum=0,j=0;
    for(int i=k;i>=1;i--){
        sum=sum+ pow(ans[j],i);
        j++;
    }
    if(sb==sum){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}