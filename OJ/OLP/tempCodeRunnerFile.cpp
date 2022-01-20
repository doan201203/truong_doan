#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s)){
            int dem = 0;
        for(char x : s){
                x = tolower(x);
        }
        for(int i = 0; i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
                dem++;
            }
        }
        cout << dem << "\n";
    }
}