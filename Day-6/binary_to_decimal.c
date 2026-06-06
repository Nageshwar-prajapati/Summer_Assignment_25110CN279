#include<stdio.h>
#include<math.h>
int main()
{
    int num, rem, count=0, sum=0;
    printf("Enter the binary number: ");
    scanf("%d",&num);

    int temp=num;
    while(temp!=0){
        rem=temp%10;
        temp/=10;
        sum=sum+rem*pow(2,count);
        count++;
    }

    printf("Decimal number: %d",sum);

    return 0;
}