#include<stdio.h>
#include<string.h>
int main()
{
    int maxlen=0, len=0, start=0, n;
    char str1[100], temp[100];

    printf("Enter the string: ");
    fgets(str1,100,stdin);

    n=strlen(str1);

    for(int i=0; i<n; i++){
        if(str1[i]==' '|| str1[i]=='\n'|| str1[i]=='\0'){

            if(len>maxlen){
                maxlen=len;
                strncpy(temp,str1+start,len);
                temp[len]='\0';
            }

            len=0;
            start=i+1;

            if(str1[i]=='\0')
                break;
        }
        else{
            len++;
        }
    }

    printf("Longest word: %s\nLength: %d",temp,maxlen);

    return 0;
}