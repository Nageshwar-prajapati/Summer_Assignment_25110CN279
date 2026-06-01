#include<stdio.h>
int main()
{
    int num,num1,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    num1=num;

    while(num!=0){
        rem=num%10;
        num=num/10;
        int pro=1;

        for(int i=1; i<=rem; i++){
            pro=pro*i;
        }
        sum=sum+pro;
    }

    if(sum==num1){
        printf("it's a strong number.");
    }
    else{
        printf("it is not a strong number.");
    }

    return 0;
}