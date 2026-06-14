#include<stdio.h>
int main()
{
    int n, arr[20], pos=-1, targ;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d",&targ);

    for(int i=0; i<n; i++){
        if(arr[i]==targ){
            printf("Element found at %d position.",i);
            return 0;
        }
    }
    printf("Element not found.");

    return 0;
}