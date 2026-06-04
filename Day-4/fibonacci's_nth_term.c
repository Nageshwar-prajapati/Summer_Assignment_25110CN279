#include<stdio.h>
int main()
{
    int n, first=0, sec=1,next;
    printf("Enter the nth term: ");
    scanf("%d",&n);

    if(n==1){
        printf("Fibonacci's 1st term: %d",first);
        return 0;
    }

    else if(n==2){
        printf("Fibonacci's 2nd term: %d",sec);
        return 0;
    }
    
    else{
        for(int i=3; i<=n; i++){
            next=first+sec;
            first=sec;
            sec=next;
        }
        printf("Fibonacci's %dth term: %d",n,sec);
    }
    

    return 0;
}