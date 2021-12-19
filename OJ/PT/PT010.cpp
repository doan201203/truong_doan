#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    if(t< 1 || t>10){
        return 0;
    }
    while(t--){
        double a,b,c,a1,b1,c1,D,Dx,Dy,x,y;
        // a+b=c
        // a1+b1=c1
        cin>>a>>b>>c>>a1>>b1>>c1;
        D=a*b1-a1*b;
        Dx=c*b1-c1*b;
        Dy=a*c1-a1*c;
        x= Dx/D; y= Dy/D;
        if(D==0){
            if(Dx+Dy==0){
            cout<<"Many Solution"<<"\n";
            }else{
                cout<<"No Solution"<<"\n";
            }
        }else
        cout<<setprecision(6)<<fixed<<x<<" "<<y<<"\n";
        
    }
}