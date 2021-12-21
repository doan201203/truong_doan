#include<bits/stdc++.h>
using namespace std;
int fun(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if(result == num){
        return num;
    }

    return 0;
}
int main(){
    int n; cin>>n;
    for(int i = 0 ; i <=n;i++){
        iffun(i)
    }
}
