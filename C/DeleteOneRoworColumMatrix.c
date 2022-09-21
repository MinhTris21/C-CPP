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

void DeleteRowAndColumn (int a[100][100], int r, int c, int d1, int d2)
{
    if (d1 < r && d2 < c) //condition 
    {
        for(d1; d1 < r - 1; d1++) //start from row which you want to delete, replace from that row to the penultimate row by the next row of them, then we have two same last row, simply delete one, done
        {
            for(int j = 0; j < c; j++)
            {
                a[d1][j] = a[d1+1][j];
            }
        }
        r--; //reduce the rows of matrix by 1       
        for (d2; d2 < c - 1; d2++) //same with row.
        {
            for (int i = 0; i < r; i++)
            {
                a[i][d2] = a[i][d2+1];
            }
        } 
        c--;  //reduce the colums of matrix by 1
    }
    printf ("\n"); 
    PrintMatrix(a,r,c);                                
}

int main(){
    int a[100][100],r,c,d1,d2;
    printf ("Enter The Rows of matrix: "); 
    scanf ("%d",&r);
    printf ("Enter The Colums of matrix: "); 
    scanf ("%d",&c);
    CreateMatrix(a,r,c);
    PrintMatrix(a,r,c);
    printf ("Enter the number of row and column you want to delete: "); 
    scanf ("%d %d",&d1,&d2);
    DeleteRowAndColumn(a,r,c,d1,d2);
}