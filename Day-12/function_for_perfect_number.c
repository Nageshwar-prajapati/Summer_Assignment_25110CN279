#include<stdio.h>
int perfectnum(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){
        if(num%i==0)
            sum=sum+i;
    }
    return(num==sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(perfectnum(num))
        printf("It's a perfect number.");

    else
        printf("Not perfect number.");

    return 0;
}