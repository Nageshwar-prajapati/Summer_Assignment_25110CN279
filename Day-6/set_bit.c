#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(num>0){
        count+= num%2;
        num/=2;
    }
    printf("Set bits in the number : %d",count);

    return 0;
}