#include<stdio.h>
int main()
{
    int num,m[20],count=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The factor of %d are ",num);
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            m[count]=i;
            count++;
        }
    }

    for(int i=0; i<count; i++){
        printf("%d ",m[i]);
    }

    return 0;
}