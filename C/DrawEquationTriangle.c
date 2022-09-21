#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    int h;
    printf ("Enter the heigh of the triangle: ");
    scanf ("%d",&h);
    printf ("The Equation Triangle\n");
    for (int i=0;i<h;i++)
    {
        for (int j=i;j<h-1;j++)
        {
            printf (" ");
        }
        for (int j=1;j<=2*i+1;j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    printf ("\nThe upside down Equation Triangle\n");
    for (int i=h-1;i>=0;i--)
    {
        for (int j=i;j<h-1;j++)
        {
            printf (" ");                   //use your neuron, use your brain.
        }
        for (int j=1;j<=2*i+1;j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}


