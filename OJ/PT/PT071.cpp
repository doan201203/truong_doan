#include<bits/stdc++.h>
using namespace std;
int main()
{
 char s[500]; 
 gets(s);
 int cnt[256]={0};
 for(int i=0;i<strlen(s);i++)
 {
     cnt[s[i]]++;
 }
 for(int i=48;i<=57;i++){
     if(cnt[i]!=0){
         printf("%c    %d\n",i,cnt[i]);
     }
 }
 for(int i=65;i<=90;i++){
     if(cnt[i]!=0){
         printf("%c    %d\n",i,cnt[i]);
     }
 }
 for(int i=97;i<=122;i++){
     if(cnt[i]!=0){
         printf("%c    %d\n",i,cnt[i]);
     }
 }
 return 0;
}