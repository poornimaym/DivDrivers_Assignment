/*3) Write a program as a Macro will take two arguments. It should return the position 1 or 0 */

#include<stdio.h>
#define BIT_VALUE(bit,bit_Pos) ((bit & (1 << bit_Pos))!= 0)
void main()
{
printf("Enter the number : ");
int num;
scanf("%x",&num);

printf("Enter the bit position : ");
int pos;
scanf("%x",&pos);

printf("Bit value of position %d is %d\n",pos,BIT_VALUE(num,pos)); 
    
return;
}

#if 0

/output/

Test 1:

Enter the number : 7
Enter the bit position : 2
Bit value of position 2 is 1

Test 2:

Enter the number : 7
Enter the bit position : 3
Bit value of position 3 is 0


#endif
