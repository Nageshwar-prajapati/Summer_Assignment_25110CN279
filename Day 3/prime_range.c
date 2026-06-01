#include<stdio.h>
int main()
{
    int num, flag=0;

    printf("Enter the last number: ");
    scanf("%d",&num);

    for(int i=2; i<=num; i++){
        flag=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\t",i);
        }
    }

    return 0;
}