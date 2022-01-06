
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int armstrongnumb(int n)
{
	int count=0;
	for(int i = 1; i <= INT_MAX; i++)
	{
		int num=i, sotach, digit=0, sum=0;
		num = i;
		digit = (int) log10(num) + 1;
		while(num > 0)
		{
			sotach = num % 10;
			sum = sum + pow(sotach,digit);
			num = num / 10;
		}
		if(i == sum)
			count++;
		if(count==n)
			return i;
	}
}
int main()
{
	int n; cin>>n;
    cout<<"0"<<" ";
    for(int i=1;i<n;i++){
        cout<<armstrongnumber(i)<<" ";
    }
	
	return 0;
}