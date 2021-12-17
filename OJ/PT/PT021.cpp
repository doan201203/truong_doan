#include<iostream>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
   while(t--){
       ll a, sum = 0, r;
       cin>>a;
    while (a > 0) {
        r = a % 10;
        if (r % 2 == 0) {
            sum = sum + r;
        }
        a = a / 10;
    }
    cout <<sum<<"\n";
   }
}