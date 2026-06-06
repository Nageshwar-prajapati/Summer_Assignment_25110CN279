#include<stdio.h>
int main()
{
    int num,num1=1,pow;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter the power: ");
    scanf("%d",&pow);

    for(int i=1; i<=pow; i++){
        num1=num1*num;
    }

    printf("%d to the power %d: %d",num,pow,num1);

    return 0;
}