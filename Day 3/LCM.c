#include<stdio.h>
int main()
{
    int num1, num2, flag,LCD;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    for(int i=2; i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            flag=i;
            break;
        }
        else{
            flag=1;
        }
    }
    printf("LCM of %d and %d is  %d",num1, num2, flag);

    return 0;
}