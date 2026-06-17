#include<stdio.h>
int main()
{
    int n,m, a[20], b[20], c[40];
    printf("Enter the size of first array: ");
    scanf("%d",&n);

    printf("Enter the elemets of first array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d",&m);

    printf("Enter the elemets of second array: ");
    for(int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }

    
    int i=0;
    for(int j=0; j<n; j++){
        c[i++]=a[j];
    }
    for(int k=0; k<m; k++){
        c[i++]=b[k];
    }
    

    printf("Merged array: ");
    for(int i=0; i<m+n; i++){
        printf("%d ",c[i]);
    }

    return 0;
}