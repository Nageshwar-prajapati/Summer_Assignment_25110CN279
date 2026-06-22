#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int count=0, i=0;
    char str[100];
    printf("Enter the sentence: ");
    fgets(str,100,stdin);

    while(str[i]!='\0'){
        if((i==0 && str[i]!=' ') || (str[i]==' ' && str[i-1]!=' ')){
            count++;
        }
        i++;
    }

    printf("Total words in the sentence : %d",count);

    return 0;
}