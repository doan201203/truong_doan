#include<stdio.h>
int main(){
    float a , b , c ;
    scanf("%f %f %f", &a , &b , &c );
    if( a<b+c && b<a+c && c<a+b ){
    if( a > 0 && b > 0 && c > 0 ){
    if(a == b || a == c  || b == c){
    printf("Tam giac can");
    }
    else if(a == b &&  b == c){
    printf("Tam giac deu");
    }
    else
    printf("Tam giac thuong");
}
}
}