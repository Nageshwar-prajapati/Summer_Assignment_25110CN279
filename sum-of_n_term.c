#include<stdio.h>
int main()
{
    int num, sum=0;

    printf("Enter the no. of terms: ");
    scanf("%d",&num);

    for(int i=0; i<=num; i++){
        sum=sum+i;
    }

    printf("sum upto %d term : %d",num,sum);

    return 0;
}