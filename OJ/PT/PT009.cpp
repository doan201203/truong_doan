#include <bits/stdc++.h>
using namespace std;
float findArea(float a, float b, float c) 
{ 
    if (a + b <= c && a + c <= b && b + c <= a) 
    { 
        cout << "No Solution"; 
        exit(0); 
    } 
    float s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c)); 
} 
int main() 
{ 
   float a,b,c;
   cin>>a>>b>>c;
    cout <<setprecision(6)<<fixed<< findArea(a, b, c); 
    return 0; 
} 