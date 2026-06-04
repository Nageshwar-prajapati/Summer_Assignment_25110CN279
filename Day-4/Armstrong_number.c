#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0,num1,num2,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    num1=num;
    num2=num;

    while(num1!=0){
        num1=num1/10;
        count ++ ;
    }

    while(num2!=0){
        rem=num2%10;
        num2=num2/10;

        sum=sum+ pow(rem,count);
    }
    if(num==sum){
        printf("It's a Armstrong number.");
    }
    else{
        printf("It is not a Armstrong number.");
    }

    return 0;
}