/*2. Write a program to count set bits.*/

#include<stdio.h>

int dectobin(int dec)
{
	int i,k,count=0;
	for(i=15; i>=0; i--)
	{
		k = dec >> i;
		if(k & 1)
		   count++;
	}	
return count;
}

void main()
{
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
  printf("No of Ones in the number is %d\n ", dectobin(num));

 return;
} 

#if(0)

Test 1
output:
Enter the number:15
No of Ones in the number is 4

Test 2
output:
Enter the number:5
No of Ones in the number is 2
#endif
