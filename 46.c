//Sort an integer array using Bubble Sort
#include<stdio.h>
int main()
{
    int arr[100],n,i,j,change;
    printf("enter length of integer array\n");
    scanf("%d",&n);
    printf("Enter the contents of integer array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                change=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=change;
            }
        }
    }
    printf("the sorted array is:\n"); 
     for(i=0;i<n;i++)
     {
        printf("%d",arr[i]);
     }
     printf("\n");
     return 0;

}