#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0, sum=0, num2, num3, rem;

    printf("Enter the number: ");
    scanf("%d",&num);
    num2=num;
    num3=num;

    while(num2>0){
        num2= num2/10;
        count++;
    }
    while(num3>0){
        rem=num3%10;
        num3=num3/10;
        sum=sum+pow(rem,count);
    }
    printf("%d\n",count);

    if(num==sum){
        printf("%d is Armstrong number",num);
    }
    else{
        printf("%d is not Armstrong number", num);
    }


    return 0;
}