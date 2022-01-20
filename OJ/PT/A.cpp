#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100][100];
int brr[100][100];
int main(){
   int m,n; cin>>m>>n;
   for(int i=0;i<m;i++){
	   for(int j=0;j<n;j++){
		   cin>>arr[i][j];
		   brr[i][j]=arr[i][j];
	   }
   }
   for(int i=0;i<m;i++){
	   for(int j=0;j<n;j++){
		   if(arr[i][j]==1){
			   for(int rp=0;rp<n;rp++){
				    brr[i][rp]=1;
			   }  
			   for(int rp=0;rp<m;rp++){
				   brr[rp][j]=1;
			   }
		   }
	   }
   }
   for(int i=0;i<m;i++){
	   for(int j=0;j<n;j++){
		   cout<<brr[i][j]<<" ";
	   }
	   cout<<"\n";
   }
	return 0;
}
// 1 0 0 1
// 0 0 1 0
// 0 0 0 0 

// 1 1 1 1
// 1 0 1 0
// 1 0 0 0