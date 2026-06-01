#include<stdio.h>
int main()
{
    int num,product=1,rem;

    printf("Enter the number: ");
    scanf("%d",&num);
    int m=num;

    while(m>0){
        rem=m%10;
        m=m/10;
        product=product*rem;
    }

    printf("Product of digits of %d is %d", num, product);
    
    return 0;
}