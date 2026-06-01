#include<stdio.h>
int main()
{
    int n,m,r=0,rem;

    printf("Enter the number: ");
    scanf("%d",&n);

    m=n;
    while(m!=0){
        rem=m%10;
        m=m/10;
        r=r*10+rem;
    }

    if(n==r){
        printf("The number is palindrom");
    }
    else{
        printf("Not palindrom");
    }

    return 0;
}