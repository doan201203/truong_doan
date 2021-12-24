#include<bits/stdc++.h>
using namespace std;
int sotach(int n){
    int sum,cuoi;
    sum=0;
    while(n){
        cuoi=n%10;
        n/=10;
        sum+=cuoi;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int i=1,cuoi,sum=0;
    while(n){
      cuoi=i%10;
      i/=10;
      sum+=i;
      i++;
    }
}