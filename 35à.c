//program in c to swap two numbers

#include<stdio.h>

#include<math.h>

int main()
{
int a,b;

printf ("Enter two numbers \n");

scanf("%d%d", &a, &b);

printf("the numbers before swapping %d and %d \n", a, b);

a=a+b;

b=a-b;

a=a-b;

printf("the numbers after swapping %d and %d \n", a, b);

return 0;
}