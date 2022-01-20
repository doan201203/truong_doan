#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>ans;
ll dem=0;
ll lknb(ll i){
    ll digit,so4=0,so7=0;
    while(i){
        digit=i%10;
        if(digit==4){
            so4++;
        }else if(digit==7){
            so7++;
        }
        else{
            return 0;
        }
        i/=10;
    }
    if(so4>0 && so4==so7)
    return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(ll i=47;i<=77774444;i++){
        if(lknb(i)){
        ans.push_back(i);
        dem++;
        }
    }
    ll n; cin>>n;
    ll dd=sizeof(ans);
    ans[dem]=4444477777;
    while(n--){
        ll z;
        cin>>z;
        dem=0;
        while(1){
            if(ans[dem]>=z){
            cout<<ans[dem]<<"\n";
            break;
        }
        dem++;
    }
    }
        
}