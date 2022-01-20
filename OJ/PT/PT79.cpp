#include<bits/stdc++.h>
using namespace std;
char* kituhoa(char *a)
{
    int n = strlen(a);
    int i;
    if (a[0] != 32)
    {
        if (a[0] >96 && a[0]< 123)
            {
                a[0] -= 32;
            }
    }
    for (i = 1; i < n; i++)
        {
            if (a[i] == 32)
                {
                 if (a[i + 1]> 96 && a[i + 1] < 123)
        {
             a[i + 1] -= 32;
        }
 
 
         }
        }
    return a;
}
int main()
{
            char chuoi[100];
            while (gets(chuoi))
            {
                char *a = kituhoa(chuoi);
                cout<<chuoi<<"\n";
            }
            
            
           
            return 0;
}