#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[19];
	gets(s);
	int len = strlen(s);
	for (int i = 0; i < len; i++){
		if (s[i] == ','){
			s[i] = ' ';
		}
	}
	printf("%s", s);
	return 0;
}