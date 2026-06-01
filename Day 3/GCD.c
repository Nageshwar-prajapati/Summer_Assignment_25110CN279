#include<stdio.h>
int main()
{
    int num1, num2, flag;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    for(int i=1; i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            flag=i;
        }
    }

    printf("GCD of %d and %d is  %d",num1, num2, flag);

    return 0;
}