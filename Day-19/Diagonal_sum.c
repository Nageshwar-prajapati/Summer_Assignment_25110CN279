#include<stdio.h>
int main()
{
    int n, m, arr[20][20], lsum=0, rsum=0, sum=0;
    printf("Enter the order of first matrix(n x m): ");
    scanf("%d%d",&n,&m);

    if(n!=m){
        printf("Operation Incompatible.");
        return 0;
    }
    
    printf("Enter %d elements of first matrix: ",n*m);
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

    for(int k=0; k<n; k++){
        for(int j=0; j<m; j++){
            if(k==j)
                lsum=lsum+arr[k][j];

            if(k+j==n-1)
                rsum=rsum+arr[k][j];

            if(k==j || k+j==n-1)
                sum=sum+arr[k][j];
        }
    }

    printf("Left diagonal sum: %d\n",lsum);
    printf("Right diagonal sum: %d\n",rsum);
    printf("Diagonal sum: %d",sum);

    return 0;
}