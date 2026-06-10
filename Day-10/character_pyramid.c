#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        int flag=64;
        for(int j=1; j<=num-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            flag++;
            printf("%c",flag);
        }
        for(int k=i-1; k>=1; k--){
            flag--;
            printf("%c",flag);
        }
        printf("\n");
    }

    return 0;
}