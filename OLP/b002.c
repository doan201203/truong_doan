#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2, S;
    scanf("%f %f %f %f", &x1 ,&y1 ,&x2, &y2);
    S= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4f", S);
}