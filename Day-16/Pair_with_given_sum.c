#include<stdio.h>
int main()
{
    int n, arr[20], targ, found=0;
    printf("Enter the  size of array: ");
    scanf("%d",&n);

    printf("Enter the %d element of array: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d",&targ);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==targ){
                printf("(%d,%d)\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found==0){
        printf("NO PAIR FOUND.");
    }

    return 0;
}