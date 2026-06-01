#include<stdio.h>
#include<string.h>
int main()
{
    char num[20],rev[20];
    int i, len;

    printf("Enter the nuber: ");
    scanf("%s",&num);

    len=strlen(num);

    for(int i=0; i<=len; i++){
        rev[i]=num[len-1-i];

    }
    rev[len] ='\0';

    printf("reverse of %s is %s",num,rev);
    return 0;

}