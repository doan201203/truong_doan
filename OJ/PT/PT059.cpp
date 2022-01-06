#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(int i, int j){
    return i>j;
}
int main(){
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    vector<int>ans;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k; cin>>k;
        ans.push_back(k);
    }
    sort(ans.begin(),ans.end(),fun);
    int pt=ans[0]*10/100;
    for(int j=0;j<pt;j++){
        if(ans[j]==0)

        return 0;
        cout<<ans[j]<<" ";
    }
}