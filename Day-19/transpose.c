#include<stdio.h>
int main()
{
    int n, m, arr[20][20], tarr[20][20];
    printf("Enter the order of matrix(n x m): ");
    scanf("%d%d",&n,&m);
    
    printf("Enter %d elements: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your inputed matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tarr[j][i]=arr[i][j];
        }
    }
    
    printf("Transpose of matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",tarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}