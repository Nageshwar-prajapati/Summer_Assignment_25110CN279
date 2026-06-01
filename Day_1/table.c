#include<stdio.h>
int main()
{
    int n,m;

    printf("enter the number: ");
    scanf("%d",&n);

    printf("enter the range: ");
    scanf("%d",&m);

    for(int i=1; i<=m; i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}