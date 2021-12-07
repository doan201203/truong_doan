#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    unsigned int S =1;
    while ( n > 0)
    {
        S = S * n;
        n = n - 2;
    }
    printf("%d", S);   
}
