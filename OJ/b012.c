int gt(int n){
    unsigned int S = 1;
    if(n == 0 && n == 1 ){
        return 1;
    }while (n > 0)
    {
        S = S * n;
        n-=2;
    }return S;
    
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n >= -1 && n <=30)
    printf("%d", gt(n));   
}