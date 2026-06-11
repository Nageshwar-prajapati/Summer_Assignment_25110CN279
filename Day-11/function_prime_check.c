#include<stdio.h>
int prime(int num){
    static int i=2;
    if(num<=1)
        return 0;

    if(i>num/2)
        return 1;

    if(num%i==0)
        return 0;

    i++;
    return prime(num);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(prime(num))
        printf("It's a prime number.");

    else
        printf("It is not a prime number.");

    return 0;
}