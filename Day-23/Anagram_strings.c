#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100], str2[100];
    int freq[256]={0};

    printf("Enter the first string: ");
    fgets(str1,100,stdin);

    printf("Enter the second string: ");
    fgets(str2,100,stdin);

    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';

    for(int i=0; str1[i]!='\0'; i++){
        freq[(unsigned char)tolower(str1[i])]++;
    }

    for(int i=0; str2[i]!='\0'; i++){
        freq[(unsigned char)tolower(str2[i])]--;
    }
    
    int anagram=1;
    for(int i=0; i<256; i++){
        if(freq[i]!=0){
            anagram=0;
            break;
        }
    }

    if(anagram)
        printf("Strings are anagrams.\n");

    else
        printf("Strings are not anagrams.\n");

    return 0;
}