//Program for finding square root

#include<stdio.h>

#include <math.h>

int main() {

double n, ans; //DOUBLE-FLOAT VALUE

printf("Enter the number whose square root is to be found \n");

scanf("%lf", &n); ans = sqrt(n);

printf("The square root of %lf is %lf", n, ans);
 return 0; }