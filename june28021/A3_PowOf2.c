/*4. Write a program to find the given number is 2 power or not.*/

#include<stdio.h>

int PowOf2(int dec)
{
	int i,count=0;
	for(i=0; i<15; i++)
	{
	  if((dec & (1<<i)))	  
	      {count++;}
	}	
return count;
}

void main()
{
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
  
  if((num == 1) || (PowOf2(num)!=1))
  printf("its not the power of 2\n");
  else 
  printf("Its Power of 2\n");
      
 return;
} 

#if(0)

Test 1
output:
Enter the number:10
its not the power of 2

Test 2
output:
Enter the number:32
Its Power of 2

#endif

