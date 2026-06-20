#include<stdio.h>
int main()
{
    int n, m, arr[20][20], r[20];
    printf("Enter the order of matrix(n x m): ");
    scanf("%d%d",&n,&m);

    printf("Enter %d elements: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrix :\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<m; i++){
        r[i]=0;
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            r[j]+=arr[i][j];
        }
    }
    for(int k=0; k<m; k++){
        printf("Column %d sum: %d\n",k+1,r[k]);
    }

    return 0;
}