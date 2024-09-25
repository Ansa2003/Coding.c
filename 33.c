//Display contents of a character array

#include <stdio.h>

int main(){

        int i;
        char arr[5]={'A','B','C','D','E'};

        for (i=0; i<=4; i++)
        printf("%c ",arr[i]);

        return 0;
}