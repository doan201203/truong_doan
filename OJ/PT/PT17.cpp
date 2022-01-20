#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int i){
    int tach,sum1=0;
    while(i!=0){
        tach=i%10;
        i/=10;
        sum1+=tach;
    }
    return sum1;
}
int main(){
    int n;
    cin>>n;
    int a,b,sum=0;
    cin>>a>>b;
   for(int i=1;i<=n;i++){
       if(sumofdigit(i)>=a && sumofdigit(i)<=b){
           sum+=i;
       }
   }cout<<sum;
}