#include<string.h>
#include<stdio.h>

int main(){
    char s[10];
    char *ptr;
    // scanf("%s",s);
    gets(s);
    ptr=s;
    int n=strlen(s);
    printf("%d",n);
    for(int i=0;i<n;i++){
        printf("%c\n",*(ptr+i));
    }
    
    
}