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
int ThePositionOfFirstEvenNumber(int a[100],int n)
{
    for (int i = 0; i <n; i++)
    {
        if (a[i]%2==0)
        {                                               
            return i;                       //Got the position of first even number in array.
        }
    }
    return -1;
}
int CompareEvenNumberswithFirstPos(int a[100], int n)
{
    int check = ThePositionOfFirstEvenNumber(a,n);
    int min =a[check];
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]<min)
        {
            min = a[i];                    //Filter the even numbers in array and compare to the first one number.
        }
    }
    return min;
}
int main()
{
    int a[100],n;
    printf ("Enter the numbers of Array: "); 
    scanf ("%d",&n);
    CreateArray(a,n);
    PrintArray(a,n);
    int number = CompareEvenNumberswithFirstPos(a,n);
    printf ("\nThe Smallest Even Number in Array is: %d",number); 
}