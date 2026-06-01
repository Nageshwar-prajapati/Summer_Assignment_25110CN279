#include<stdio.h>
int main()
{
    int num,m[20],count=0,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            m[count]=i;
            count++;
        }
    }

    for(int i=0; i<count; i++){
        sum +=m[i];
    }
    if(sum==num){
        printf("it's a perfect number");
    }
    else{
        printf("it's not a perfect number");
    }

    return 0;
}