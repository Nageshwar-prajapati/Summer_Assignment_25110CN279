#include<stdio.h>
int main()
{
    int num;
    printf("Enter the length of square: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if(j==1 || j==num || i==1 || i==num){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}