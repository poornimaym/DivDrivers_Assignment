/*4. Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro*/

#include <stdio.h>

#define Set_Bit(val, pos)  (val |= (1 << (pos)))

#define Clear_Bit(val, pos)  (val &= (~(1 << (pos))))

#define Toggle_Bit(val, pos) (val = val^(1 << pos))

void dectobin(int dec)
{
	int i,k=0;
	for(i=15; i>=0; i--)
	{
		k = dec >> i;
		if(k & 1)
			printf("1");
		else 
			printf("0");
	}
	printf("\n");

return;
}

int main()
{
    unsigned int Value,pos;
    printf("Enter the number:");
    scanf("%d",&Value);
    printf("Enter the position of the bit:");
    scanf("%d",&pos);
    printf("Value is %d \t",Value);
    dectobin(Value);
    printf("Set Bit:%d\t", Set_Bit(Value,pos));
    dectobin(Set_Bit(Value,pos));
    printf("Clear Bit:%d\t", Clear_Bit(Value,pos));
    dectobin(Clear_Bit(Value,pos));
    printf("Toggle Bit:%d\t", Toggle_Bit(Value,pos));
   // printf ( "%d", Toggle_Bit(Value,pos));
    dectobin(Toggle_Bit(Value,pos));
    
    return 0;
}
/*
#if(0)

output

Enter the number:0
Enter the position of the bit:3
Value is 0 	0000000000000000
Set Bit:8	0000000000001000
Clear Bit:0	0000000000000000
Toggle Bit:8	0000000000001000
#endif

*/
