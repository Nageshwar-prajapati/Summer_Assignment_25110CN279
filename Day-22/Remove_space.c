#include<stdio.h>
#include<string.h>

int main()
{
    int j=0;
    char str[100];

    printf("Enter the string: ");
    fgets(str,100,stdin);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';

    printf("String after removing spaces: %s", str);

    return 0;
}