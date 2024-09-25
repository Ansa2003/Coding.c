//program in c to swap two numbers

#include<stdio.h>
#include<math.h>

int main()
{
int a, b, c;

printf("Enter two numbers \n");
scanf ("%d%d", &a, &b);

printf("the numbers before swapping %d and %d \n", a, b);

c=a;

a=b;

b=c;

printf("the numbers after swapping %d and %d", a, b);

return 0;
}