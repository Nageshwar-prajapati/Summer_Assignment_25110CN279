#include<stdio.h>
int main()
{
    int num, arr[100];
    printf("Enter the size  of array: ");
    scanf("%d",&num);

    printf("Enter the elements of array: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    int smax=arr[0];
    int max=arr[0];

    for(int k=0; k<num; k++){
        if(arr[k]>max){
            max=arr[k];
        }
        if(smax< arr[k] && arr[k] < max){
            smax=arr[k];
        }
    }

    printf("Second maximum: %d",smax);

    return 0;
}