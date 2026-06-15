#include<stdio.h>
int main()
{
    int n, arr[20],temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the element of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n/2; i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
        
    }
    
    printf("Reversed array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}