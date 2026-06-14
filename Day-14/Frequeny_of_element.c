#include<stdio.h>
int main()
{
    int num, temp , arr[100], count=0;
    printf("Enter the size of array: ");
    scanf("%d",&num);

    printf("Enter  the elements of array: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the target element: ");
    scanf("%d",&temp);

    for(int k=0; k<num; k++){
        if(arr[k]==temp)
            count++ ;
    }

    printf("Frequency of %d: %d",temp,count);

    return 0;
}