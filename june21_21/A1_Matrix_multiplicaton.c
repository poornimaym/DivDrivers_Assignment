/*1. Write a C Program to show matrix multiplication on 2-D Array. */

#include <stdio.h>

#define ROW 2
#define COL 2


void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);



int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    printf("Enter elements in first matrix of size %d %d\n", ROW, COL);
    matrixInput(mat1);

    printf("Enter elements in second matrix of size %d %d\n", ROW, COL);
    matrixInput(mat2);

    matrixMultiply(mat1, mat2, product);


    printf("Product of both matrices is:\n");
    matrixPrint(product);

    return 0;
}



// Function to input elements in matrix 
 
void matrixInput(int mat[][COL])
{
    int row,col;

    for (row=0; row<ROW; row++)
    {
        for (col=0; col<COL; col++)
        {
            scanf("%d",(*(mat+row)+col));
        }
    }
}


//Function to print elements in Matrix

void matrixPrint(int mat[][COL])
{
    int row,col;

    for (row=0; row<ROW; row++)
    {
        for (col=0; col<COL; col++)
        {
            printf("%d ",*(*(mat+row)+col));
        }
        printf("\n");
    }
}




/*Function to multiply two matrices*/

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row,col,i;
    int sum;


    for (row=0; row<ROW; row++)
    {
        for (col=0; col<COL; col++)
        {
            sum = 0;
            for (i=0; i<COL; i++)
            {
               sum = sum + ((*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col)));
            }
            *(*(res+row)+col) = sum;
        }
    }
}



#if(0)

Output:

Test 1

Enter elements in first matrix of size 2 2
2
1
3
2
Enter elements in second matrix of size 2 2
1
2
1 
1
Product of both matrices is:
3 5 
5 8

Test 2

Enter elements in first matrix of size 2 2
5
4
3
1
Enter elements in second matrix of size 2 2
1
2
7
0
Product of both matrices is:
33 10 
10 6 

#endif
