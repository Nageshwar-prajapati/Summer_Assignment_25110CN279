#include<stdio.h>
int digitsum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+ digitsum(n/10);
    }
    
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The sum of digits is: %d",digitsum(num));

    return 0;
}