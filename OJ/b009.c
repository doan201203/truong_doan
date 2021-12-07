#include<stdio.h>
int main(){
    unsigned short T;
    scanf("%d", &T);
    float a1, b1, c1, a2, b2, c2;
    float D, Dx, Dy, x, y;
    if(T >= 1 && T <= 10){
        for(int i = 1; i <= T; i++){
            scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
                D = a1 * b2 - a2 * b1;
                Dx = c1 * b2 - c2 * b1;
                Dy = a1 * c2 - a2 * c1;
                if (D == 0) {
                   if (Dx + Dy == 0)
                    printf("Many Solution\n");
                 else
                    printf("No Solution\n");
                 }else {
                    x = Dx / D;
                    y = Dy / D;
                    printf("%.6f, %.6f\n", x, y);
                }
        }
    }
}