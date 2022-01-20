#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   string a,b;
   cin>>a>>b;
   int dem1=0,dem2=0;
   vector<char>mk1;
   vector<char>mk2;
   for(char x:a){
       mk1.push_back(x);
       dem1++;
   }
   for(char x:b){
       mk2.push_back(x);
       dem2++;
   }
   for(int i=0;i<max(dem1,dem2);i++){
       cout<<mk1[i]<<mk2[i];
   }
}