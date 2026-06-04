#include<stdio.h>
int main()
{
    long long n, first=0, sec=1,next;
    printf("Enter the number of term: ");
    scanf("%lld",&n);

    printf("Fibonacci series: ");
    for(int i=1; i<=n; i++){
        printf("%lld ",first);
        next=first+sec;
        first=sec;
        sec=next;
    }

    return 0;
}