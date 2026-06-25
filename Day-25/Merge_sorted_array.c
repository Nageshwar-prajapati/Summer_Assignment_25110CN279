#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[100], arr2[100], arr3[100];
    int a,b,c,i,j,k;

    printf("Enter the size of first sorted array: ");
    scanf("%d",&a);

    printf("Enter the element of first sorted array: ");
    for(int i=0; i<a; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of second sorted array: ");
    scanf("%d",&b);

    printf("Enter the element of second sorted array: ");
    for(int i=0; i<b; i++){
        scanf("%d",&arr2[i]);
    }

    i=0,j=0,k=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }

        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    while(i<a){
        arr3[k]=arr1[i];
        i++;
        k++;
    }

    while(j<b){
        arr3[k]=arr2[j];
        j++;
        k++;
    }


    printf("Merged array: ");
    for(int i=0; i<a+b; i++){
        printf("%d ",arr3[i]);
    }


    return 0;
}