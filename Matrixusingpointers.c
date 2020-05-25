#include<stdio.h>
#define ROWS 3
#define COLS 3
void inputmatrix(int matrix[ROWS][COLS], int rows, int cols);
void printmatrix(int matrix[ROWS][COLS], int rows, int cols);
int main()
{
    int matrix[ROWS][COLS];
    inputmatrix(matrix, ROWS, COLS);
    printf("elements of %d x %d matrix. \n",ROWS,COLS);
    printmatrix(matrix,ROWS,COLS);
    return 0;
}
void inputmatrix(int matrix[ROWS][COLS], int rows, int cols)
{
    int i, j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("enter value for matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void printmatrix(int(*matrix)[COLS], int rows, int cols)
{
    int i, j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}
