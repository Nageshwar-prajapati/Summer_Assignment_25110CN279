#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len, count;

    printf("Enter the string: ");
    scanf("%s",&str);

    printf("Compressed string: ");
    len=strlen(str);
    for(int i=0; i<len; i++){
        count=1;
        while(i<len-1 && str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }

    return 0;
}