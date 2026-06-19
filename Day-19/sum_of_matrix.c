#include<stdio.h>
int main()
{
    int n, m, u, v, a[20][20], b[20][20], c[20][20];
    printf("Enter the order of first matrix(n x m): ");
    scanf("%d%d",&n,&m);

    printf("Enter the order of second matrix(n x m): ");
    scanf("%d%d",&u,&v);

    if(n!=u || m!=v){
        printf("Operation not compatible!");
        return 0;
    }
    
    printf("Enter %d elements of first matrix: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter %d elements of second matrix: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("Your inputed first matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Your inputed second matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i][j]= a[i][j]+b[i][j];   
        }
    }
    
    printf("Sum of both matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}