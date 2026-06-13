#include<stdio.h>
int main()
{
    int num, arr[20];

    printf("Enter the size of array: ");
    scanf("%d",&num);

    printf("Enter the elements: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];

    for(int k=0; k<num; k++){
        if(max<arr[k]){
            max=arr[k];
        }
        if(min>arr[k]){
            min=arr[k];
        }
    }

    printf("Minimum of array elements: %d\n",min);
    printf("Maximum of array elements: %d",max);

    return 0;
}


