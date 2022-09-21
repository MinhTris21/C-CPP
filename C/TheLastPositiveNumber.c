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
int FindLastPositiveNumber(int a[100], int n)
{
    int count=0;
    for (int i = n-1; i >=0; i--)
    {
        if (a[i]>0)
        {
            return a[i];              //The Same with find the first positive one, but we begin at the end of array.
        }
    }
    return -1;
}
int main(){
    int a[100],n;
    printf ("Enter the numbers of Array: "); 
    scanf ("%d",&n);
    CreateArray(a,n);
    PrintArray(a,n);
    int number=FindLastPositiveNumber(a,n);
    printf ("\n%d",number);
}