/* Display contents of an integer array in reverse order.   */
#include <stdio.h>

int main(){
        int i,x[5]={1,2,3,4,5};
        for (i=4; i>=0; i--)
        printf("%d ",x[i]);
        return 0;
}