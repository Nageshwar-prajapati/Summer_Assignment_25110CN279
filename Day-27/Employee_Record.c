#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct employee e[50];
    int n = 0, choice, id, found;

    while (1)
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", e[n].name);

            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);

            n++;
            printf("Employee added successfully.\n");
        }
        
        else if (choice == 2){
            if (n == 0){
                printf("No employee records found.\n");
            }
            else{
                printf("\nEmployee Records\n");

                for (int i=0; i<n; i++){
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nSalary      : %.2f\n", e[i].salary);
                }
            }
        }
        
        else if (choice == 3){
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (int i=0; i<n; i++){
                if (e[i].id == id){
                    printf("\nEmployee Found\n");
                    printf("Employee ID : %d\n", e[i].id);
                    printf("Name        : %s\n", e[i].name);
                    printf("Salary      : %.2f\n", e[i].salary);

                    found = 1;
                }
            }

            if (found == 0){
                printf("Employee record not found.\n");
            }
        }
        else{
            if (choice == 4){
                printf("Thank You!\n");
                break;
            }
            else{
                printf("Invalid Choice.\n");
            }
        }
    }
    
    return 0;
}