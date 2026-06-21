#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0, i=0;
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);

    while(str[i]!= '\0'){
        i++;
        len=i;
    }
    printf("Length of the string: %d",len);

    return 0;
}