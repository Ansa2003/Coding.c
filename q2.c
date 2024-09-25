/*Use if-else with relational and logical operators (grading according to percentage of a student)*/

#include <stdio.h>

int main() {
    float x, max, perc;

    printf("Enter the number of marks obtained: ");
    scanf("%f", &x);

    printf("Enter the maximum marks: ");
    scanf("%f", &max);

    perc = (x / max) * 100;

    if (perc >= 90) {
        printf("The grade obtained is O\n");
    } else if (perc < 90 && perc >= 80) {
        printf("The grade obtained is A\n");
    } else if (perc < 80 && perc >= 70) {
        printf("The grade obtained is B\n");
    } else if (perc < 70 && perc >= 60) {
        printf("The grade obtained is C\n");
    } else if (perc < 60 && perc >= 50) {
        printf("The grade obtained is D\n");
    } else if (perc < 50 && perc >= 40) {
        printf("The grade obtained is E\n");
    } else {
        printf("The student has failed\n");
    }

    return 0;
}