#include<stdio.h>
int main()
{
    int num, flag=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            flag=1;
            break;
        }
        
    }

    if(flag==1){
        printf("the number is not prime number");
    }
    else{
        printf("the number is prime number");
    }

    return 0;
}