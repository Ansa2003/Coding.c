//input Matrix from user then find sum of diagonal elements 


#include <stdio.h>

int main() {
    int a[10][10],m,n,j,i,sum = 0;

    printf("Enter no of rows and columns:\n");
    scanf("%d%d", &m,&n);
       printf("Enter the elements of matrix row by row:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
        {
        for(j=0;j<m;j++)
            {
                if(i==j)
                sum =sum+ a[i][j];
                    }
    }

printf("sum of diagonal elements = %d\n", sum);
return 0;
}
