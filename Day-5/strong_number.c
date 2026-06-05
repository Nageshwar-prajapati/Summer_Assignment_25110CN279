#include<stdio.h>
int main()
{
    int num, sum=0, rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;

    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        int fac=1;
        for(int i=1; i<=rem; i++){
            fac=fac*i;
        }
        sum=sum+fac;
    }

    if(num==sum){
        printf("It's a strong number.");
    }
    else{
        printf("It is not a strong number");
    }

    return 0;
}