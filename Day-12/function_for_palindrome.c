#include<stdio.h>
int palindrome(int num){
    int rem,sum=0,n=num;

    while(n>0){
        rem=n%10;
        n/=10;
        sum= sum*10+rem;
    }
    return (num==sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(palindrome(num))
        printf("It's a palindrome");

    else
        printf("Not palindrome");

    return 0;
}