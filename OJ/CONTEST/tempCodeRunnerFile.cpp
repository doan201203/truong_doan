#include<stdio.h>
int nhap(int a[],int n,int x){
	scanf("%d",&n);
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int vitrichen(int a[],int n,int x){
    int i;
	for(i=0;i<n;i++){
		if(a[i]>=x){
			return i;
            break;
		}
	}
    return i;
}

int main(){
	int a[100000];
	int n,x; 
	nhap(a,n,x);
	printf("%d",vitrichen(a,n,x));	
}
