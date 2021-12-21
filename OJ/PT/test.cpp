#include <iostream>
#include <math.h>
using namespace std;
void insont(int n) {
   while (n%2 == 0){
      cout<<"2\t";
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout<<i<<"\t";
         n = n/i;
      }
   }
   if (n > 2)
   cout<<n<<"\t";
}
int main() {
   int n = 2632;
   cout<<"Prime factors of "<<n<<" are :\t";
   insont(n);
   return 0;
}