#include<bits/stdc++.h>
using namespace std;
int main() 
{
    double a,b,c;
    cin>> a>> b>> c;
    double p=(a+b+c)/2;
    if(a >= b + c || b >= a + c || c >= a + b || a<=0 || b<=0 || c<=0)
    cout<<"No Solution";
    else
    cout<<setprecision(6)<<fixed<<sqrt(p*(p-a)*(p-b)*(p-c));
}