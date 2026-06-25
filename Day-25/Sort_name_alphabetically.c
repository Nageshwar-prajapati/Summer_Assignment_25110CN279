#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[100][100], temp[100];

    printf("Enter the number of names: ");
    scanf("%d",&n);

    printf("Enter the names: \n");
    for(int i=0; i<n; i++){
        scanf("%s",&str[i]);
    }

    for(int i=0; i<n; i++){
        for( int j=i+1; j<n; j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("Alphabetical order of names\n");
    for(int i=0; i<n; i++){
        printf("%s\n",str[i]);
    }

    return 0;
}