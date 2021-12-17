#include <iostream>
#define ll long long
using namespace std;
const int M=1e9+7;
ll pM(ll b, ll p , ll m){
   ll r=1;
   while(p){
      if(p % 2 != 0){
         r=r*b%m;
      }
      b=b*b%m;
      p/=2;
   }
   return r;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      ll a,b,c;
      cin>>a>>b>>c;
      cout<<pM(a,pM(b,c,M-1),M)<<"\n";
   }
}