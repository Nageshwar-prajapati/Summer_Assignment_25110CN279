#include<stdio.h>
int main()
{
    int num,arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&num);

    printf("Enter the array: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array: ");
    for(int k=0; k<num; k++){
        printf("%d ",arr[k]);
    }

    return 0;
}