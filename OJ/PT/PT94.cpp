#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    
    string s;
    while(getline(cin,s)){
       for(int i=0;i<s.length();i++){
           s[i]=tolower(s[i]);
       }
       stringstream ss(s);
       string tmp;
       vector<string>v;
       while(ss>>tmp){
           v.push_back(tmp);
       }
       for(int i=0;i<v.size()-1;i++){
           cout<<v[i][0];
       }
       cout<<v[v.size()-1]<<"@huscmail.edu.vn"<<endl;
    }
}