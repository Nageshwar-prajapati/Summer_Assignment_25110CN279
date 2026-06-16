#include<stdio.h>
int main()
{
    int n, arr[20], freq=0, num;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(freq<count){
            freq=count;
            num=arr[i];
            
        }
    }

    printf("Maximum frequency element: %d\nMaximum frequency: %d",num,freq);

    return 0;
}