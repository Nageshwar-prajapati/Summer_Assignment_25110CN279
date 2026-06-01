#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        int m=65;
        for(int j=1; j<=i; j++){
            printf("%c ",m);
            m++;
        }
        printf("\n");
        
    }
    

    return 0;
}