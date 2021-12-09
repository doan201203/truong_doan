#include<stdio.h>
int main(){
    int N[100000], n, count = 0, kt;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++ ){
        scanf("%d", &N[i]);
    }
    for(int i = 1 ; i <= n ; i++){
        kt = N[i] % 19;
        if(kt == 0 || kt == 3 || kt == 6 || kt == 9 || kt == 11 || kt == 14 || kt == 17){
            count++;
        }
    }
    printf("%d", count);
}