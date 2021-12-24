#include<bits/stdc++.h>
using namespace std;
int pangram(char c[1005]){
    strlwr(c);
    int cnt[26]={0};
    for(int i=0;strlen(c);i++){
        cnt[c[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]==0)
        return 0;
    }
    return 1;
}
int main(){
    char c1[1005],c2[1005];
    gets(c1);
    if(pangram(c1))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
}