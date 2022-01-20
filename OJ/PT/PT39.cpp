#include<bits/stdc++.h>
using namespace std;

bool isNguyenTo(int n);

int main()
{
    int arr[100],n;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max_=0;

    for(int i=0; i<n; i++)
    {
        if(isNguyenTo(arr[i]))
        {
            if(arr[i] > max_)
                max_ = arr[i];
        }
    }
    cout<<max_<<endl;
}

bool isNguyenTo(int n)
{
    if(n < 2)
        return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
