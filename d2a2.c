#include<stdio.h>
int main()
{
	int a,b,x;
	a=2;
	b=1;
//	printf("%d",a++);

	x=(a++&&(!b)&& b ||++a); //&& higher precedence than ||

	printf("X is %d", x);

	return 0;
}
