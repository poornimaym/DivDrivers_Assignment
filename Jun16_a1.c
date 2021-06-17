//Program for printing Nto1 using recursion.
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

