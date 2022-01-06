#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int m,n;
    cin>>m>>n;
    int arr[1000][1000];
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		cin>>arr[i][j];
		}
	}
    for(int i=0;i<m;i++){
        ll sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<"\n";
    }
}