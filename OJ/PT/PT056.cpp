#include<bits/stdc++.h>
using namespace std;
int dienso(int n){
    if(n==1){
        return 1;
    }
    if(n % 2 == 0){
        return n+dienso(n-1);
    }
        return 2*n+dienso(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<dienso(n);
}