#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    if( (x*y) % 2 != 0 ){
        printf("Odd");
    }else{
        printf("Even");
    }
}