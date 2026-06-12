#include<stdio.h>
int fibonacci(int n){
    int  first=0, sec=1, next;
    for(int i=0; i<n; i++){
        printf("%d ",first);
        next=first+sec;
        first=sec;
        sec=next;
    }
}
int main()
{
    int n;
    printf("Enter the number of term: ");
    scanf("%d",&n);

    printf("Fibonacci series: ");
    fibonacci(n);
    
    return 0;
}