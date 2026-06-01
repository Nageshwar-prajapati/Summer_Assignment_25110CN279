#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=num; i>0; i--){
        int m=1;
        for(int j=i; j>0; j--){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }

    return 0;
}