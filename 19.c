//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include <stdio.h>

int main()
{

        float i,n;
        float sum;

        printf("Enter n \n");
        scanf("%f",&n);

        sum=1;

        for (i=2; i<=n; i=i+2)
                sum=sum+(1/i);

        printf("%f", sum);

        return 0;
}