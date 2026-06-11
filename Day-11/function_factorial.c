#include<stdio.h>
int factorial(int n){
    int fac=1;
    if(n==0)
        return 1;

    while(n>0){
        fac=fac*n;
        n--;
    }
    return fac;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Factorial of %d: %d",num,factorial(num));

    return 0;
}