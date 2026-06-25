#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100], temp[100];
    int n;

    printf("Enter the number of words: ");
    scanf("%d",&n);

    printf("Enter the words: \n");
    for(int i=0; i<n; i++){
        scanf("%s",&str[i]);
    }

    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(strlen(str[i])>strlen(str[j])){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("Sorted by length: \n");
    for(int i=0; i<n; i++){
        printf("%s\n",str[i]);
    }

    return 0;
}