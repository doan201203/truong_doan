#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	if (a==b && b==c) printf("Tam giac deu");
	else if(a==b || a==c || c==b) printf("Tam giac can");
	else printf("Tam giac thuong");

return 0;
}
