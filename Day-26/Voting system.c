#include<stdio.h>
int main()
{
    int age;

    printf("===== Voting Eligibility System =====\n");
    
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age<0){
        printf("Invalid age.");
    }

    else if(age<18){
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d years",18-age);
    }
    
    else{
        printf("You are eligible to vote.\n");
    }

    return 0;
}