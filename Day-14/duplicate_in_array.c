#include<stdio.h>
int main()
{
    int n,arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d  elements of array: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements: ");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
    }

    return 0;
}