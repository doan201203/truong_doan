#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         checkYear(n)?cout << "leap year"<<"\n":cout << "none"<<"\n";
    }
}