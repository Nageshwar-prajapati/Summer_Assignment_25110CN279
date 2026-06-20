#include<stdio.h>
int main()
{
    int n,m,  arr[20][20], flag=0;
    printf("Enter the order of matrix(n x m): ");
    scanf("%d%d",&n,&m);

    if(n!=m){
        printf("Only operationable on square matrix.");
        return 0;
    }

    printf("Enter %d elements: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your inputed array:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=arr[j][i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }

    if(flag)
        printf("Not a symmetric matrix.");

    else
        printf("Symmetric matrix.");

    
    return 0;
}