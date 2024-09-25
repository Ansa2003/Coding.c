/* Input a string from the user and find its length (without using the string library)  */

#include <stdio.h>

int main(){

        char str[100];
        int i;

        printf("Enter String \n");
        scanf("%s",str);
        i=0;
        while (str[i]!='\0')
        {
                i++;
        }

        printf("%d",i);
}