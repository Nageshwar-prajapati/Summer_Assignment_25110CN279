#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    float m1, m2, m3;
    float total, percentage;
    char grade;
};

int main()
{
    struct student s[20];
    int n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks of Subject 1: ");
        scanf("%f", &s[i].m1);

        printf("Enter Marks of Subject 2: ");
        scanf("%f", &s[i].m2);

        printf("Enter Marks of Subject 3: ");
        scanf("%f", &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3;

        if(s[i].percentage >= 90){
            s[i].grade = 'A';
        }
        else if(s[i].percentage >= 75){
            s[i].grade = 'B';
        }
        else if(s[i].percentage >= 60){
            s[i].grade = 'C';
        }
        else if(s[i].percentage >= 40){
            s[i].grade = 'D';
        }
        else{
            s[i].grade = 'F';
        }
    }

    printf("\n===== MARKSHEET =====\n");

    for(int i=0; i<n; i++)
    {
        printf("\nRoll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Total Marks : %.2f\n", s[i].total);
        printf("Percentage  : %.2f%%\n", s[i].percentage);
        printf("Grade       : %c\n", s[i].grade);
    }

    return 0;
}