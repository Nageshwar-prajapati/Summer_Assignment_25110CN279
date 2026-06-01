#include<stdio.h>
int main()
{
    int n,sum=0,m,rem;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    m=n;
    while(m!=0){
        rem=m%10;
        m=m/10;
        sum=sum+rem;
    }
    printf("Sum of digits of %d is %d", n,sum);
    return 0;
}