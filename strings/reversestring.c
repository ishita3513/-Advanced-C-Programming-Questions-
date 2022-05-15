#include<stdio.h>
#include<string.h>

int main(){
    // int n;
    // printf("Enter the length of string:");
    // scanf("%d",&n);
    // char str[n]; by taking n gets() is not working in my compiler.
    char str[90];
    gets(str);
    // scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        char c=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=c;
    }
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
}