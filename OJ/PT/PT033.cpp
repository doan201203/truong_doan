#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    float bandau,lai,mongmuon;
    cin>>bandau>>lai>>mongmuon;
    if(lai == 0 || (mongmuon<bandau)){
        return 0;
    }
    float tong;
    int x = 0;
    for (int i=1; tong < mongmuon; i++){
        tong=bandau*pow((1+(lai/100)),i);
        x++;
        
    }
    cout<<x;
    
}