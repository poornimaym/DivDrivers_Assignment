/*3. Write a program with Macro to find even or odd using bitwise operator.*/

#include<stdio.h>

#define Odd_or_Even(num) (num & 1) 

void main()
{
int num;
printf("Enter the number: ");
scanf("%d",&num);

if(Odd_or_Even(num))
printf("dude its an ODD Number\n");
else
printf("dude its an EVEN Number\n");

return;
}

#if(0)

Test 1
output:
Enter the number: 5
dude its an ODD Number

Test 2
output:
Enter the number: 2
dude its an EVEN Number
#endif
