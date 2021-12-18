#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, count, sum, inputArray[100001];
    float average;
    cin >> count;
    if(count <= 0)
    return 0;
    for(i = 0; i < count; i++) {
        cin >> inputArray[i];
    }
    sum = 0;
    for(i = 0; i < count; i++) {
        sum += inputArray[i];
    }
    average = (float)sum / count;
    cout <<setprecision(4)<<fixed<<average;
 
    return 0;
}
