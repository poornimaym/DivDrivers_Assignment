/* 1. Write a simple c program to demonstrate inline function advantage over the macro. */

#include <stdio.h>
#define SQR(x) x*x

static inline int sqr(int a)
{
    return a*a;
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("square using inline function : %d\n",sqr(++n));
    printf("square using macro function : %d\n",SQR(++n));// In pre-processor stage SQR(++n) 
                                                            // will be expanded as ++n*++n
    return 0;
}


/*

Advantage:
Macro function will be blindly expanded in pre-processor stage.
Consider above  code in which ++n  will be replaced as it is.
*/






#if 0

/output/

test case:1
8
square using inline function : 81
square using macro function : 110

test case :2
0
square using inline function : 1
square using macro function : 6





#endif 0
