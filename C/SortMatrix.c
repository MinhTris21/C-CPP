#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>


void CreateMatrix(int a[100][100], int r, int c)
{
    for (int i = 0;i <r;i ++)
    {
        for (int j = 0;j <c;j ++)
        {
            printf ("A[%d][%d] = ",i,j); 
            scanf ("%d",&a[i][j]);
        }
    }
}


void PrintMatrix(int a[100][100], int r, int c)
{
    for (int i = 0;i <r;i++ )
    {
        for (int j = 0;j<c ;j++ )
        {
            printf ("%d\t",a[i][j]); 
        }
        printf ("\n"); 
    }
}


int SumOfMatrix(int a[100][100], int r, int c)
{
    int sum=0;
    for (int i = 0;i <r;i++ )
    {
        for (int j = 0;j<c ;j++ )
        {
            sum+=a[i][j];
        }
    }
    return sum;
}


void MatrixtoArray(int a[100][100],int b[100], int r, int c)
{
    int temp=0;
    for (int i = 0;i <r;i++ )
    {
        for (int j = 0;j<c ;j++ )
        {
            b[temp]=a[i][j];        //Matrix A to array b.
            temp++;
        }
    }
    for (int i = 0; i < temp; i++)
    {
        printf ("%d\t",b[i]); 
    }
}



void SortMatrixByRowAndColum(int a[100][100], int r, int c)
{
    for (int l = 0; l < r; l++)     //Sort matrix by row first.
    {
        for (int i = 0; i < c; i++)     //The same with sort in array
        {
            for (int j = i+1; j<c; j++)
            {
                if (a[l][i]>a[l][j])   //left to right, min to max
                {
                    int temp = a[l][i];
                    a[l][i] = a[l][j];
                    a[l][j]= temp;
                }
            }
        }
    }
    for (int l = 0; l < c; l++)     //Variable for each column
    {
            for (int i = 0; i < r; i++)     //Sort funtion for array, can use for matrix within a outside loop.
            {
                for (int j = i+1; j < r; j++)
                {
                    if (a[i][l]<a[j][l])  //up to down, max to min
                    {
                        int temp = a[i][l];
                        a[i][l] = a[j][l];
                        a[j][l] = temp;
                    }
                }
            }
    }
    PrintMatrix(a,r,c);
}

int main(){
    int a[100][100],b[100],r,c;
    printf ("Enter The Rows of matrix: "); 
    scanf ("%d",&r);
    printf ("Enter The Colums of matrix: "); 
    scanf ("%d",&c);
    CreateMatrix(a,r,c);
    PrintMatrix(a,r,c);
    printf ("\nMatrix to Array: "); 
    MatrixtoArray(a,b,r,c);
    printf ("\nSum of all numbers in Matrix: %d",SumOfMatrix(a,r,c)); 
    printf ("\nMatrix Sorted by colums \n"); 
    SortMatrixByRowAndColum(a,r,c);
}
//perfect