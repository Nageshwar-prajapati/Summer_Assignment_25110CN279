#include<stdio.h>
int main()
{
    int count=0, i=0;
    char str[100], ch;

    printf("Enter the string: ");
    fgets(str,100,stdin);

    printf("Enter the character to check: ");
    scanf("%c",&ch);

    while(str[i]!='\0'){
        if(str[i]==ch)
            count++;

        i++;
    }

    printf("Frequency of %c: %d",ch,count);

    return 0;
}