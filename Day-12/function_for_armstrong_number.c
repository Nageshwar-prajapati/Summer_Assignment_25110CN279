#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int count=0, n=num, m=num, sum=0, rem;

    while(n>0){
        n/=10;
        count++;
    }
    while(m>0){
        rem=m%10;
        m/=10;
        sum=sum+pow(rem,count);
    }
    return(num==sum);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(armstrong(num))
        printf("It's a armstrong number.");

    else
        printf("Not armstrong number.");

    return 0; 
}