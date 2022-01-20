#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.ignore();
    string s;;
    getline(cin,s);
    int cnt[26]={0};
    set<char>st;
    for(char x:s){
        tolower(x);
        if(x >= 97 && x<=122)
        st.insert(x);
    }
    cout<<st.size();
}