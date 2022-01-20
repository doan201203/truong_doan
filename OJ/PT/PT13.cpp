#include<stdio.h>
int main(){
unsigned int A[100000],n,count = 0;
scanf("%d", &n);
for (int i = 0 ; i < n ; i ++){
    scanf("%d", &A[i]);
}
for (int  i = 0; i < n; i++)
{
    if(A[i] % 3 == 0 || A[i] % 7 == 0){
        count++;
    }
}
printf("%d", count);
}
