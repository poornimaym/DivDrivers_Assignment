/*1. Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields) */

#include <stdio.h>

typedef struct
{
	unsigned char b_0 :	1;
	unsigned char b_1 :	1;
        unsigned char b_2 :	1;
	unsigned char b_3 :	1;
	unsigned char b_4 :	1;
	unsigned char b_5 :	1;
	unsigned char b_6 :	1;
	unsigned char b_7 :	1;
}bit_feild;

typedef union
{
	int input;
	bit_feild n;
}bit;

int main()
{
	bit p;
        int input;
	printf("Enter the input:");
	scanf("%d",&p.input);
	
	
	printf("bit0 = %d\n",( p.n.b_0));	
	printf("bit1 = %d\n",( p.n.b_1));
	printf("bit2 = %d\n",( p.n.b_2));
	printf("bit3 = %d\n",( p.n.b_3));
	printf("bit4 = %d\n",( p.n.b_4));
	printf("bit5 = %d\n",( p.n.b_5));
	printf("bit6 = %d\n",( p.n.b_6));
	printf("bit7 = %d\n",( p.n.b_7));
	
	
	return 0;
}
#if 0
/*output */
Test case :

input = 7

bit0 = 1
bit1 = 1
bit2 = 1
bit3 = 0
bit4 = 0
bit5 = 0
bit6 = 0
bit7 = 0

#endif
