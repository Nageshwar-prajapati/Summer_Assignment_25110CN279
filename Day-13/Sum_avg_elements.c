#include<stdio.h>
int main()
{
    int num, arr[20], sum=0;
    float avg;

    printf("Enter the size of array: ");
    scanf("%d",&num);

    printf("Enter the elements: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    for(int k=0; k<num; k++){
        sum=sum+arr[k];
    }

    avg=(float)sum/num;

    printf("Sum of array elements: %d\n",sum);
    printf("Average of array elements: %.2f", avg);

    return 0;
}


