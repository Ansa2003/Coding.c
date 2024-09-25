//demonstrate use of pointers in programming
#include<stdio.h>
int main()
{

int x;
int *p;     //Declare an integer pointer

x=10;
p= &x;    //store address of x in pointer p
printf("value %d is stored at location %d in the memory \n\n", x,p );//disp no
printf("%d", *p);

}