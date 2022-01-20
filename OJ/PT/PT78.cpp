#include<bits/stdc++.h>
using namespace std;
// int snt(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
int main() {
    vector<int>n;
   string s; cin.ignore(0); getline(cin,s);
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
   int min=1001;
   for(int i=0;i<n.size();i++){
       if(n[i]<min){
           min=n[i];
       }
   }
   cout<<min;
}