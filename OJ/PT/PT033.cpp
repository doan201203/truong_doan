#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    double bandau,lai,mongmuon;
    cin>>bandau>>lai>>mongmuon;
    double tong;
    int x = 0;
    lai=lai/100;
    for (int i=0; tong<mongmuon; i++){
        tong=bandau*pow((1+lai),i);
        x++;
        
    }
    cout<<x-1;
    
}