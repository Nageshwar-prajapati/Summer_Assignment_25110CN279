#include<stdio.h>
int main()
{
    int n, arr[20], sum=0, mis;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array:  ");
    for(int i=0; i<n-1; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        sum+=arr[i];
    }

    int total=n*(n+1)/2;
    mis=total-sum;

    printf("Missing number: %d",mis);

    return 0;
}