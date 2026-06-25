#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int found, alreadyfound;

    printf("Enter the string: ");
    scanf("%s",&str);

    printf("Common character in string: ");
    for(int i=0; str[i]!='\0'; i++){
        alreadyfound=0;
        for(int k=0; k<i; k++){
            if(str[i]==str[k]){
                alreadyfound=1;
                break;
            }
        }
        if(alreadyfound)
            continue;

        found=0;
        for(int j=i+1; str[j]!='\0'; j++){
            if(str[i]==str[j]){
                found=1;
                break;
            }
        }
        if(found)
            printf("%c ",str[i]);
    }

    return 0;
}