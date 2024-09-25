//program to display series 2 4 16 256 65536
#include<stdio.h>
#include<math.h>
int main()
{ int x=2,i,n;
printf("enter the number of terms: ");
scanf("%d", &n);
printf("2   ");
for(i=1;i<=n;i++)
{x=pow(x,2);
printf("%d ", x);
}
}