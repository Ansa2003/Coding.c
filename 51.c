//Swap two numbers using functions(call-by-value) method
#include<stdio.h>
#include<math.h>

void swap(int,int);  //declaration 
int main()
{
int x,y;
printf("enter the two numbers \n");
scanf("%d %d", &x ,&y);
printf("the numbers before swapping %d %d \n", x,y);
swap(x,y); //call
}
void swap(int a,int b)
{int temp=a;
a=b;
b=temp;
printf("the nos after swapping are %d %d",a,b);
}