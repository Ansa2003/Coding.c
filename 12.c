//program to display 2 4 8 16 32 64
#include<stdio.h>
#include<math.h>
int main()
{ int i,n,x;
printf("enter the number of terms to be displayed");
scanf("%d", &n);
for (i=1;i<n;i++)
{ x=pow(2,i);
printf("%d ", x);
}
}