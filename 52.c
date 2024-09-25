//Add and subtract two intergers using call back function(a+b,a-b,b-a)
#include<stdio.h>
#include<math.h>
int add(int,int);
int sub(int,int);
int main()
{
int a,b,c;
printf("enter the two intergers\n");
scanf("%d %d", &a, &b);

c=add(a,b);
printf("Sum is %d \n", c);

c=sub(a,b);
printf("Sub is %d\n", c);

c=sub(b,a);
printf("Sub is %d", c);

}
int add(int a, int b)
{
return a+b;
}
int sub(int a, int b)
{
return a-b;
}