#include<stdio.h>
int main()
{
    int num, arr[20], even=0, odd=0;

    printf("Enter the size of array: ");
    scanf("%d",&num);

    printf("Enter the elements: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    for(int k=0; k<num; k++){
        if(arr[k]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

   printf("Odd elements: %d\n",odd);
   printf("Even elements: %d",even);

    return 0;
}


