#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

void CreateArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("A[%d] = ",i);      //
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
int FindtheFirstNegativeNumber(int a[], int n)
{
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if (a[i]<0)
        {
            return a[i];            //found the first negative number, return it and stop the program
        }
    }
    return -1;                      //Didn't found, return -1 and stop.
}
int main(){
    int a[100],n;
    printf ("Enter the numbers of Array: ");
    scanf ("%d",&n);
    CreateArray(a,n);
    PrintArray(a,n);
    int number=FindtheFirstNegativeNumber(a,n);
    if (number != -1)
    {
        printf ("\nThe First negative number of Array is: %d",number);
    }else {
        printf ("\nThere is no negative number in array");    
    }
}