#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lucas(int n){
    if(n < 0)
    return 0;
    if(n==0)
    return 2;
    if(n==1)
    return 1;
    return lucas(n-1)+lucas(n-2);
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        cout<<lucas(k)<<"\n";
    }
}