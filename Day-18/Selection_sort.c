#include<stdio.h>
int main()
{
    int n, arr[20], min, temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}