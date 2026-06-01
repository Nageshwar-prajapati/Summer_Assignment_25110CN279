#include<stdio.h>
int main()
{
    int num, first=0, second=1, next;

    printf("Enter number of terms: ");
    scanf("%d",&num);

    printf("Fibonacci series: ");
    
    for(int i=1; i<=num; i++){
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}