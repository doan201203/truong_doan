#include<stdio.h>
#include<math.h>
int main(){
    float a = 3, b = 4, c = 5, p ,S;
    p = (a+b+c)/2;
    if(a > 0 && b > 0 && c > 0){
         S= sqrt(p*(p-a)*(p-b)*(p-c));
         printf("%.6f", S);
     }else
     printf("No Solution");
}
