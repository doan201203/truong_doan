#include<stdio.h>

int tong(int n){
    int s=0;
    int k;
    while(n!=0){
        k=n%10;
        s+=k;
        n=n/10;
    }
    return s;
}


int main(){
    long long n;
    scanf("%lld",&n); 
    int dem =0,a;
for(int i=1;i<=n;i++){
        a=tong(i)%10;
        if(a==9)dem++;
    }   
    printf("%d",dem);
}