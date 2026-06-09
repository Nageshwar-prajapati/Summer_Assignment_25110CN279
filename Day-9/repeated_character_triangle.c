#include<stdio.h>
int main()
{
    int num,flag=64;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num ; i++){
        flag++;
        for(int j=1; j<=i; j++){
            printf("%c",flag);
        }
        printf("\n");
    }

    return 0;
}