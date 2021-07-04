//1.Program for printing Nto1 using recursion.
#include<stdio.h>

void Nto1_display(int x)
{
        printf("%d\n",x);
        if(x!=1)
        {
                Nto1_display(x-1);
        }
        else
        {
                return;
        }
}


int main()
{
        int n;
        printf("Enter the Max Number: ");
        scanf("%d",&n);
        Nto1_display(n);

        return 0;
}

#if(0)

Output

Test 1
Enter the Max Number: 7
7
6
5
4
3
2
1

#endif
