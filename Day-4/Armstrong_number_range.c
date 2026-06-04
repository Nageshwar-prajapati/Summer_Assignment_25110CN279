#include<stdio.h>
#include<math.h>
int main()
{
    int ran;
    printf("Enter the range: ");
    scanf("%d",&ran);

    printf("Armstrong number between 1 and %d: ",ran);
    for(int i=1; i<=ran; i++){
        int num=i, num1=i, sum=0, count=0, rem;
        while(num1!=0){
            num1/=10;
            count++ ;
        }
        while(num!=0){
            rem=num%10;
            num /=10;
            sum=sum+pow(rem,count);
        }
        if(i==sum){
            printf("%d ",i);
        }
    }

    return 0;
}