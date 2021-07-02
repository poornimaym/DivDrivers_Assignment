/*2. Write a program to Swap the nibble in a byte without using bitwise operator. */

#include <stdio.h>

typedef struct
{
	unsigned char lower_nib : 4 ;
	unsigned char upper_nib : 4 ;
}nibble;

typedef union
{
	unsigned char i;
	nibble inp;
}swap;


int main()
{
	swap nib1,nib2;
	printf("Enter the 2 digit Number:");
	scanf("%d", &nib1.i);
		
	nib2.inp.lower_nib = nib1.inp.upper_nib;
	nib2.inp.upper_nib = nib1.inp.lower_nib;
	
	printf("0x%x\n",nib2.i);
	
	return 0;
}


#if 0

/output/

0x45

#endif
