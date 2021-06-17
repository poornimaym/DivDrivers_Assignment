//program: Decimal to binary convertor using recursion

#include<stdio.h>


void dec_bin(int x)
{
   if(x==0)
    {
        return;
    }
   dec_bin(x/2);
   printf("%d",x%2);
}


int main()
{
	int Dec;
	printf("enter the Dec number: ");
	scanf("%d",&Dec);
	dec_bin(Dec);

	return 0;
}
