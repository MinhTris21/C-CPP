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
/*
int main(){
        int x;
        int temp;
        for (int i = 0; i< nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++){
                if (nums[i]>nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return x;
    }
*/
int main(){
    char ch=176;
    printf("Today's temperature was 23%cC",ch);
}