#include<stdio.h>
int main()
{
    int n, arr[20], m;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the times of left rotation: ");
    scanf("%d",&m);

    for(int i=1; i<=m; i++){
        for(int j=0; j<n-1; j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    printf("Rotated array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}