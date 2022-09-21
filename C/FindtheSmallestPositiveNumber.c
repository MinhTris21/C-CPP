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
int ThePositionOfTheFirstPositiveNumber(int a[100],int n)
{
    for (int i = 0; i <n; i++)
    {
        if (a[i]>0)
        {
            return i;           //find the position of first positive number (i).
        }
    }
    return -1;
}
int FindTheSmallestPositiveNumber(int a[100], int n)
{
    int check = ThePositionOfTheFirstPositiveNumber(a,n);
    int min = a[check];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0 && a[i] < min)
        {
            min =a[i];
        }
    }
    return min;
}
int main(){
    int a[100], b[100],n;
    printf ("Enter the Numbers Of Array: "); 
    scanf ("%d",&n);
    CreateArray(a,n);
    PrintArray(a,n);
    int number=FindTheSmallestPositiveNumber(a,n);
    printf ("\nThe Smallest Positive number in Array a: %d",number);   
}