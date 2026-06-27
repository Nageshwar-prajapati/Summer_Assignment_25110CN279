#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float basicSalary;
};

int main()
{
    struct employee e[50];
    int n=0, choice, id, found;
    float hra, da, totalSalary;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Salary Details\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice==1){
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", e[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &e[n].basicSalary);

            n++;

            printf("Employee added successfully.\n");
        }
        
        else if (choice == 2){
            if (n == 0){
                printf("No employee records found.\n");
            }
            else{
                printf("\nSalary Details\n");

                for (int i=0; i<n; i++){
                    hra = e[i].basicSalary*0.20;
                    da = e[i].basicSalary*0.10;
                    totalSalary = e[i].basicSalary+hra+da;

                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nBasic Salary: %.2f", e[i].basicSalary);
                    printf("\nHRA         : %.2f", hra);
                    printf("\nDA          : %.2f", da);
                    printf("\nTotal Salary: %.2f\n", totalSalary);
                }
            }
        }
        else if (choice==3){
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (int i=0; i<n; i++){
                if (e[i].id == id){
                    hra = e[i].basicSalary*0.20;
                    da = e[i].basicSalary*0.10;
                    totalSalary = e[i].basicSalary+hra+da;

                    printf("\nEmployee Found\n");
                    printf("Employee ID : %d\n", e[i].id);
                    printf("Name        : %s\n", e[i].name);
                    printf("Basic Salary: %.2f\n", e[i].basicSalary);
                    printf("HRA         : %.2f\n", hra);
                    printf("DA          : %.2f\n", da);
                    printf("Total Salary: %.2f\n", totalSalary);

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