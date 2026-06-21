#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int vowel=0, cons=0, i=0;
    char str[100];

    printf("Enter the string: ");
    fgets(str,100,stdin);

    while(str[i]!='\0'){
        char ch=tolower(str[i]);
        if(isalpha(ch)){
            if(str[i]=='a'|| str[i]=='i'|| str[i]=='e'|| str[i]=='o'||str[i]=='u'){
                vowel++;
            }
            else{
                cons++;
            }
        }
        i++;
    }

    printf("Vowels: %d\nConsonents: %d",vowel,cons);

    return 0;
}