/*Program in C to store details of all the students of your class in an array of structure
and then find the topper of the class*/
#include <stdio.h>

struct student {
    int rollno;
    float marksobt;
    float totalmarks;
    float perc;
};

int main() {
    int n, i;
    struct student s[100];

    printf("Enter the number of students in your class:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter roll number of student %d:\n", i + 1);
        scanf("%d", &s[i].rollno);

        printf("Enter the marks obtained by student %d:\n", i + 1);
        scanf("%f", &s[i].marksobt);

        printf("Enter the total marks:\n");
        scanf("%f", &s[i].totalmarks);

        s[i].perc=(s[i].marksobt/s[i].totalmarks)*100;
        printf("Roll no. %d has %f percent.\n",i+1,s[i].perc);
    }

    // Display in tabular format
    printf("ROLL NUMBER\tMARKS OBTAINED\tTOTAL MARKS\tPERCENTAGE\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t\t %.1f\t\t %.0f\t\t %f\n", s[i].rollno, s[i].marksobt, s[i].totalmarks, s[i].perc);
    }

    // Find topper as per given data
    struct student topper = s[0];
    for(i = 1; i < n; i++) {  // Start from 1 since topper is initialized with s[0]
        if(s[i].perc > topper.perc)
        {
           topper = s[i];
        }
    }

    printf("The topper of the class is roll number %d with %f percent.\n", topper.rollno,topper.perc);

    return 0;
}