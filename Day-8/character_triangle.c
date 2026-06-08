#include<stdio.h>
int main()
{
    int num, flag=65;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        flag=65;
        for(int j=1; j<=i; j++){
            printf("%c",flag);
            flag++ ;
        }
        printf("\n");
    }

    return 0;
}