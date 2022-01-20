#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(char x: s){
        arr[x-'a']++;
    }
    int min=999;
    bool ok=false;
    for(int i=0;i<26;i++){
        if(arr[i]==0){
                min=i; 
                ok=true;
                break;
        }
    }
    if(ok){
        cout<<(char)(min+97);
    }
    else{
        cout<<"None";
    }
}