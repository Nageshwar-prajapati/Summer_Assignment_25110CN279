#include<stdio.h>
int main()
{
    int num, flag=1;

    printf("Enter number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d",flag);
        }
        printf("\n");
        flag ++ ;
    }
    return 0;
}