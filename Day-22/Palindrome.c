#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100], str2[100], temp;
    int i=0, j=0;

    printf("Enter the string: ");
    fgets(str,100,stdin);

    str[strcspn(str,"\n")]='\0';
    strcpy(str2,str);

    j=strlen(str)-1;
    i=0;
    while(i<j){
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }

    if(strcmp(str2,str)==0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }


    return 0;
}