// Write a program in C to display contents of an integer array using pointer
#include<stdio.h>
int main()
{
int a[100], n, i;
int *p;
printf("Enter the size of the integer array ");
scanf("%d", &n);

printf("Enter the elements of the integer array \n");

//Scanning using pointer
p=&a;

for(i=0; i<n; i++)
{

scanf("%d", p);
p++;
}
//Printing using pointer
p=&a;

printf("\n\n");
printf("Values of the array are \n");

for(i=0; i<n; i++)
{
printf("%d ", *p);
p++;
}
}