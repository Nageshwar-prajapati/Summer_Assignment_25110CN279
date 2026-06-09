#include<stdio.h>
int main()
{
    int num,flag;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=num; i>0 ; i--){
        flag=1;
        for(int j=i; j>0; j--){
            printf("%d",flag);
            flag++;
        }
        printf("\n");
    }

    return 0;
}