#include<stdio.h>
int main()
{
    int n, arr[20], pos=-1, found=0, targ;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array in sorted order: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d",&targ);

    int beg=0, end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        
        if(arr[mid]==targ){
            found=1;
            pos=mid+1;
            printf("%d found at %d position.",targ,pos);
            break;
        }
        else if(arr[mid]<targ){
            beg=beg+1;
        }
        else{
            end=end-1;
        }
    }
    if(found==0){
        printf("Element not found.");
    }
    

    return 0;
}