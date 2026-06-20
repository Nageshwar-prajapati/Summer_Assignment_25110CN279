#include<stdio.h>
int main()
{
    int n, m, u, v, a[20][20], b[20][20], c[20][20], w;
    printf("Enter the order of first matrix(n x m): ");
    scanf("%d%d",&n,&m);

    printf("Enter the order of second matrix(u x v): ");
    scanf("%d%d",&u,&v);

    if(m!=u){
        printf("Operation Incompatible!");
        return 0;
    }
    
    printf("Enter %d elements of first matrix: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter %d elements of second matrix: ",n*m);
    for(int i=0; i<u; i++){
        for(int j=0; j<v; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("First matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix: \n");
    for(int i=0; i<u; i++){
        for(int j=0; j<v; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<v; j++){
            int sum=0;
            for(int k=0; k<m; k++){
                sum=sum+ a[i][k]*b[k][j];
                c[i][j]= sum;
            }
        }
    }

    printf("Product of both matrices: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<v; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}