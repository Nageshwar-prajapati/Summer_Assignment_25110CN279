#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int count=0;
    
    printf("Enter the string: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0; str[i]!='\0'; i++){
        count=0;
        for(int j=0; str[j]!=0; j++){
            if(str[i]==str[j])
                count++;
        }
        if(count>1){
            printf("First non-repeating character: %c",str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}