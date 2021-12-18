#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<next_permutation(s.begin(),s.end());

}