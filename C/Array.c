#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

void CreatArray(int a[100], int n)
{
    for (int i=0;i<n;i++)
    {
        printf ("A[%d] = ",i);
        scanf ("%d",&a[i]);
    }
}
void PrintArray(int a[100], int n)
{
    for (int i=0;i<n;i++)                   //Simple constructor to creat array.
    {
        printf ("%d\t",a[i]);
    }
}
void SumArray(int a[100], int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf ("\nSum of the Array: %d",sum);
}
void SortArrayMinToMax(int a[100], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf ("\nThe Min to Max Sorted Array: ");
    PrintArray(a,n);
}void SortArrayMaxToMin(int a[100], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf ("\nThe Max to Min Sorted Array: ");
    PrintArray(a,n);
}
int main(){
    int a[100],n;
    printf ("Enter the numbers of the Array: ");
    scanf ("%d",&n);
    CreatArray(a,n);
    PrintArray(a,n); 
    SumArray(a,n);
    SortArrayMaxToMin(a,n);
    SortArrayMinToMax(a,n);
}
