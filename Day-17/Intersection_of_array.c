#include<stdio.h>
int main()
{
    int n, m, a[20], b[20], c[40], found=0;
    printf("Enter the size of first array: ");
    scanf("%d",&n);

    printf("Enter the elements of first array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d",&m);

    printf("Enter the elements of second array: ");
    for(int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }

    int k=0;
    for(int i=0; i<n; i++){
        found=0;
        for(int j=0; j<m; j++){
           if(a[i]==b[j]){
            found=1;
            break;
           } 
        }
        if(found==1){
            c[k]=a[i];
            k++;
        }
    }

    printf("Intersection of arrays: ");
    for(int i=0; i<k; i++){
        printf("%d ",c[i]);
    }

    return 0;
}