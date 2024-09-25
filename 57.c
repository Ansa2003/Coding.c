//Demonstrate use of macros
#include <stdio.h>

    #define AREA(x) PI* x* x
    #define PI 3.14
    int main()
    {
    float r;
    printf("enter radius");
    scanf("%f", &r);
    printf("area of circle =%f", AREA(r));
    }