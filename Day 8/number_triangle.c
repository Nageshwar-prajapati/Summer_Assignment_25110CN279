#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        int flag=1;
        for(int j=1; j<=i; j++){
            printf("%d",flag);
            flag ++;
        }
        printf("\n");
    }
    return 0;
}