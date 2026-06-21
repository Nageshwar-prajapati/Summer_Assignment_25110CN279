#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char  str[100], temp;
    int i=0, j=0;

    printf("Enter the string: ");
    fgets(str,100,stdin);

    j=strlen(str)-1;
    while(i<j){
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }

    printf("Reverse of the string: ");
    puts(str);

    return 0;
}