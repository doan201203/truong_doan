#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   cin.tie(0)->sync_with_stdio(false);
   cin.exceptions(cin.failbit);
   string s;
   getline(cin,s);
   int apb[26]={0};
   int dem=0;
   for(char x:s){
      apb[x-'a']++;
   }
   bool ok = true;
   for(int i=0;i<s.length();i++)
      {
         if(apb[i]>=2){
            ok=false;
            break;
         }
      }
      if(ok){
         cout<<"Yes";
      }else{
         cout<<"No";
      }
}