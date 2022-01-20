#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int chan=0,le=0;
        for(char x:s){
            if(x>=97 && x<=122){
                chan++;
            }else{
                le++;
            }
        }
        if(chan>=le){
            std::transform(s.begin(),s.end(),s.begin(),::tolower);
            cout<<s<<"\n";
        }else{
            std::transform(s.begin(),s.end(),s.begin(),::toupper);
            cout<<s<<"\n";
        }
    }
}