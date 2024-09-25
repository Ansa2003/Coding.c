//To find power of numbers

#include<stdio.h>
#include<math.h>
int main() {
double x, y, ans;

printf("Enter the number and the power");

scanf("%lf %lf", &x, &y);

ans = pow(x,y);

printf("%lf raised to power %lf is %lf", x, y, ans);

return 0;
}