#include<stdio.h>
int main()
{
    int num,m=65;

    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%c ",m);
        }
        printf("\n");
        m++;
    }
    

    return 0;
}