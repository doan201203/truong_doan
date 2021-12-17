#include <bits/stdc++.h>
using namespace std;

int chinnut(int n){
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    if(sum%10==9) return 1;
    return 0;
}

int main(){
    int n;
    cin >> n;
    int count=0;
    for(int i=1; i<=n; i++)
        if(chinnut(i)) count++;
    cout << count;
    return 0;
}