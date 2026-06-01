#include<stdio.h>
#include<math.h>
int main()
{
    int ran, num,num1,num2;
    printf("Enter the range: ");
    scanf("%d",&ran);

    for(int i=0; i<=ran; i++){
        int n=i,num=i,count=0, sum=0, rem;
        
        while(n>0){
            n=n/10;
            count++;
        }
        while(num>0){
            rem=num%10;
            num=num/10;
            sum=sum+pow(rem,count);
        }

        if(i==sum)
            printf("%d is Armstrong number\n",i);

    }

    return 0;
}