#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                   cout<<"* ";
            }
            cout<<"* ";
            cout<<"\n";
        }
            for(int k=n-1;k>0;k--){
                for(int l=k;l>0;l--){
                    cout<<"* ";
                }
                 cout<<"\n";
            }
        }
    }