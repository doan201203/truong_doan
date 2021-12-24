#include<bits/stdc++.h>
using namespace std;
int main() 
{
    float a,b,c;
    float p,s;
    cin>> a>> b>> c;
    if(a<=0||b<=0||c<=0) 
    cout<<"No Solutions";
    if(a + b > c){
        if(b+c>a){
            if(c+a>b){
                p=(a+b+c)/2;
                s=sqrt((p*(p-a)*(p-b)*(p-c)));
                cout<<setprecision(6)<<fixed<<s<<endl;
            }
        }
       
    }else{
        cout<<"No Solution"<<endl;
    } 
} 