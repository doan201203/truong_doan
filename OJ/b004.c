#include <stdio.h>
int main() {
	unsigned long ndays, y, m, d;	
	scanf("%d", &ndays);
	y = ndays/365;
	ndays = ndays-(365*y);	
	m = ndays/30;
	d = ndays-(m*30);
	if(y > 0){
		printf("%d Years\n", y);
	}if(m > 0){
		printf("%d Months\n", m);
	}if(d > 0){
		printf("%d Days",d);
	}
}
