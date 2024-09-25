/*  Input a string from the user and display it in reverse order  */

#include <stdio.h>

int main(){

        char str[100];
        int i,j;

        printf("Enter String \n");
        scanf("%s",str);
        i=0;
        while (str[i]!='\0')
        {
                i++;
        }
        for (j=i; j>=0; j--)
        {
                printf("%c",str[j]);
        }

        return 0;
}