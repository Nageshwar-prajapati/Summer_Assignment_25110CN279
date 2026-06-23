#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100], ch;
    int count, c=0;

    printf("Enter the string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0; str[i]!='\0'; i++){
        count=0;
        for(int j=0; str[j]!='\0'; j++){
            if(tolower(str[i])==tolower(str[j])){
                count++;
            }
            if(count>c){
                c=count;
                ch=str[i];
            }
        }
    }

    printf("Maximum occuring character '%c': %d",ch,c);

    return 0;
}