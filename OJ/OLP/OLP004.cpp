#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>hoanvi;
    do{
    hoanvi.push_back(s); 
    }
    while(next_permutation(s.begin(),s.end()));
        cout<<hoanvi.size()<<"\n";
        for(string a : hoanvi){
            cout<<a<<"\n";
        }
}
