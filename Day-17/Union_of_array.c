#include<stdio.h>
int main()
{
    int n, m, a[20], b[20], c[40],flag;
    printf("Enter the size of first array: ");
    scanf("%d",&n);

    printf("Enter the elements of first array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d",&m);

    printf("Enter the elements of second array: ");
    for(int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }

    for(int k=0; k<n; k++){
        c[k]=a[k];
    }
    flag=n;

    for(int i=0; i<m; i++){
        int found=0;
        for(int k=0; k<flag; k++){
            if(c[k]==b[i]){
                found=1;
                break;
            }
        }
        if(found==0){
            c[flag]=b[i];
            flag++;
        }
    }
    
    printf("Union of array: ");
    for(int i=0; i<flag; i++){
        printf("%d ",c[i]);
    }

    return 0;
}