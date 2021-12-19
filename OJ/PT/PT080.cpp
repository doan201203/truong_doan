#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    vector<string> v;
 
    stringstream ss(str);
 
    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        substr +=' ';
        v.push_back(substr);
    }
 
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i];
}