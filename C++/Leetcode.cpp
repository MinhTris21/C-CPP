#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
/*          PROBLEM 1. TWO SUM, NON-VECTOR SOLUTION 
int main(){
    int n;
    int sum=0;
    int target;
    printf ("n = ");
    scanf ("%d",&n);
    scanf ("%d",&target);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        printf ("A[%d] = ",i);
        scanf ("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                printf ("[%d,%d]",i,j);
            }
        }
    }
}
*/