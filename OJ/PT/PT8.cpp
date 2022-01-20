#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, delta;
    scanf("%f%f%f", &a, &b, &c);
    if(a != 0){
    delta = b*b-4*a*c;
    if(delta > 0){
        printf("%.4f %.4f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
    }else if(delta == 0){
        printf("%.4f",-b/(2*a));
    }else
    printf("No solution");
}
}