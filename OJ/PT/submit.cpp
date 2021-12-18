#include <stdio.h>
#include <math.h>

float tinha(float p,float r,int n){
    return p * pow((1+r),n);
}
int main(){
    float p,r;
    float n;
    scanf("%f%f%f",&p,&r,&n);
    for(int i=1;i<=n;i++){
        printf("%d\t%g\n",i,tinha(p,r,i));
    }
    return 0;
}