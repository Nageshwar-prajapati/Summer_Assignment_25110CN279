#include<stdio.h>
int main()
{
    int n, size, arr[20], found=0, flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elemsnts of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the largest element of array: ");
    scanf("%d",&n);

    printf("Missing number: ");
    for(int i=1; i<=n; i++){
        found=0;
        for(int j=0; j<size; j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("%d ",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("NONE");
    }

    return 0;
}