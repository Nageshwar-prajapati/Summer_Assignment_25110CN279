#include<stdio.h>
int main()
{
    int num, arr[20], rem, i=0;
    printf("Enter the decimal number: ");
    scanf("%d",&num);

    while(num!=0){
        rem=num%2;
        num=num/2;
        arr[i]=rem;
        i++;
    }

    printf("Binary number: ");
    for(int k=i-1; k>=0; k--){
        printf("%d",arr[k]);
    }

    return 0;
}