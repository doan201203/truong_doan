#include<stdio.h>
#include<math.h>
const float pi = 3.14159;
int main(){
    float a, b, d;
    scanf("%f%f%f", &a, &b ,&d);
    printf("%.4f",0.5*a*b*sin((d*pi)/180));
}