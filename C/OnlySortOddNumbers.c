#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

void CreateArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("A[%d] = ",i);
        scanf ("%d",&a[i]);
    }
}
void PrintArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d\t",a[i]); 
    }
}
void SortTheOddNumbers(int a[100],int n)
{
    for (int  i = 0; i < n; i++)
    {
        if (a[i]%2!=0) //Only odd number can go on
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[j]%2!=0 && a[i]>a[j])  //if the next position is odd number, count in the Array and compare with the a[i].
                {                            //Sort from min to max
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    PrintArray(a,n); 
}
int main(){
    int a[100],n;
    printf ("Enter the Numbers Of Array: "); 
    scanf ("%d",&n);
    CreateArray(a,n);
    PrintArray(a,n);
    printf ("\nArray A after only sorted odd numbers: "); 
    SortTheOddNumbers(a,n);
}