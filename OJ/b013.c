#include<stdio.h>
int main(){
    int T[100], n;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i ++){
        scanf("%d", &T[i]);
        }
    for(int i = 1 ; i < T[i+1] ; i++){
        for(int j = 0 ; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }
     for(int i = T[i + 1] - 1 ; i >= 0 ; i --){
        for(int j = 0 ; j < i ; j ++){
            printf("*");
        }
        printf("\n");
    }
}