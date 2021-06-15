/* single digit sum program*/

#include<stdio.h>

int one_digi_sum(int x);

int main()
{
	int n,sum;
	printf("Enter the number: ");
	scanf("%d", &n);
	sum = n;
	while (sum>9)
	{
		sum=one_digi_sum(sum);
	}
	printf("\n sum is : %d\n" , sum); 
	return 0;
}

int one_digi_sum(int x)
{
     int rem,sum=0;
	while(x>0)
	{
	rem = x%10;
       sum = sum + rem;
         x = x/10;
	}
return sum;
}
