#include<stdio.h>
int main()
{
    int n,digit=0,m;

    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;

    while(m!=0){
        m=m/10;
        digit++ ;
    }
    printf("Total number of digit in %d is %d", n,digit);
    return 0;
}