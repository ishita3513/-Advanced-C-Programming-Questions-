#include<stdio.h>

int main(){
    int n;
    printf("Enter the lenth of string:");
    scanf("%d",&n);
    char str[n];
    printf("Enter the string");
    scanf("%s",str);
    for(int i=0;i<5;i++){
        printf("%d\n",str[i]);
    }
}