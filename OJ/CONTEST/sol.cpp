#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = (int) 1e9+7;
const ll mL = (ll) 1e18;
int main(){
   ios_base::sync_with_stdio(false);
   string s;
   getline(cin,s);
   map<char,int>ans;
   for(char x : s){
      if((x >='0' && x<='9')|| (x>='A'&&x<='Z')||(x>='a'&&x<='z')){
         ans[x]++;
      }
   }
   for(auto &x : ans){
      cout<<x.first<<"   "<<x.second<<endl;
   }

}