#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct student s[50];
    int n = 0, choice, roll, i, found;

    while (1)
    {
        printf("\n===== Student Record Management =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student record added.\n");
        }

        else if (choice == 2){
            if (n == 0){
                printf("No records found.\n");
            }

            else{
                printf("\nStudent Records\n");
                for (i = 0; i < n; i++){
                    printf("Roll: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    printf("\n");
                }
            }
        }
        else if (choice == 3){
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++){
                if (s[i].roll == roll){
                    printf("Student Found\n");
                    printf("Name : %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0){
                printf("Student not found.\n");
            }
        }

        else if (choice == 4){
            printf("Thank You!\n");
            break;
        }
        
        else{
            printf("Invalid choice.\n");
        }
    }

    return 0;
}