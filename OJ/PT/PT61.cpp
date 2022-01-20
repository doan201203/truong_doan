#include<bits/stdc++.h>
using namespace std;
void slt(int arr[1000], int n){
	int tp;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j ++ ){
			if(arr[i]>arr[j]){
				tp=arr[i];
				arr[i]=arr[j];
				arr[j]=tp;
			}
		}
	}
}
int main(){
	int chan[1000],le[1000],n;
	cin>>n;
	int l,c;
	l = 0 ; c = 0;
	for(int i = 0 ; i < n ; i++){
		 int k; cin>>k;
		 if(k%2==0){
			 chan[c]=k;
			 c++;
		 }else{
			 le[l]=k;
			 l++;
		 }
	}
	slt(chan,c);
	slt(le,l);
    for(int i = 0 ; i < c; i++){
		cout<<chan[i]<<" ";
	}
	for(int i = 0 ; i < l; i ++){
		cout<<le[i]<<" ";
	}
}
