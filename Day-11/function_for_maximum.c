#include<stdio.h>
int max(int a,int b){
    return a>b? a:b ;
}
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("Maximum of both number: %d",max(num1,num2));

    return 0;
}