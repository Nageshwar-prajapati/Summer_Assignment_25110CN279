#include<stdio.h>
int main()
{
    int num, first=0, second=1, next;

    printf("Enter term number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num-1; i++){
        next=first+second;
        first=second;
        second=next;
    }

    printf("Fibonacci term %d is %d", num, first);

    return 0;
}