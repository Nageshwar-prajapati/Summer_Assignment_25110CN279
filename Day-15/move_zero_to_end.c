#include<stdio.h>
int main()
{
    int n, arr[20], m;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}