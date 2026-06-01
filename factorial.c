#include<stdio.h>
int main()
{
    int num,fac=1;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num==0){
        fac=1;
    }
    else{
        for(int i=1; i<=num; i++){
            fac=fac*i;
        }
    }

    printf("Factorial of %d : %d",num,fac);

    return 0;
}