#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
int main(){
  float phanso = (8.194-sqrt(pow(8.194,2)+4*0.00262*(1324-1309))) / (2*-0.00262);
  float tpara = phanso + 30;
  printf ("%0.2f",tpara);
}