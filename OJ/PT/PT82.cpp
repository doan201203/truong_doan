#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    vector<int>n;
   string s; cin.ignore(0); getline(cin,s);
   for (int i = 0; i < s.length(); i++)
        if (s[i] == ',' || s[i] == '-'||s[i]=='_'||s[i]=='|'||s[i]=='/'||s[i]=='.'||s[i]==';')
            s[i] = ' ';
   stringstream str_strm;
   str_strm << s;
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; 
      if(stringstream(temp_str) >> temp_int) {
         n.push_back(temp_int);
      }
      temp_str = "";
   }
   ll sum= abs(n[1]-n[0]);
   cout<<sum*1200;
}