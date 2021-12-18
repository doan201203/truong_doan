#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(long long int a, long long int b)
{
    if (a > 0 && b > 0) {
        cout << "Positive";
    }
    else if (a <= 0 && b >= 0) {
        cout << "Zero" << endl;
    }
    else {
        long long int n = abs(a - b) + 1;
        if (n % 2 == 0) {
            cout << "Positive" << endl;
        }
        else {
            cout << "Negative" << endl;
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    solve(a, b);
    return 0;
}
