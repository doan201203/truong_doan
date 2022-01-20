#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
 
    int ans=0;
    int a=-1,z=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='Z'){
            z=i;
            break;
        }
    }
 
    ans=z-a+1;
 
    cout << ans << endl;
}
