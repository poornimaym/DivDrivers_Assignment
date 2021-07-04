//Program for printing 1toN using recursion.
#include<stdio.h>

void onetoN_display(int x)
{
        static int i;
	
	printf("%d\n",++i);
        if(x==1)
        {
		return;
        }
        else
        {
		onetoN_display(--x);
        }
}


int main()
{
        int max;
	printf("Enter the Max Number: ");
        scanf("%d",&max);
        onetoN_display(max);
        return 0;
}

#if(0)

Output

Test 1
Enter the Max Number: 7
1
2
3
4
5
6
9

#endif
