#include<stdio.h>
int main()
{
    int num, primefac=-1;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(num%2==0){
        primefac=2;
        num=num/2;
    }
    for(int i=3; i*i<=num; i++){
        while(num%i==0){
            primefac=i;
            num=num/i;
        }
    }   
    if(num>2){
        primefac=num;
    }

    printf("Largest Prime factor: %d",primefac);

    return 0;
}