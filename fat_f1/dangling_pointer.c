#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=10,*b;
    b=&a;
    printf("%d",*b);
    free(b);
    printf("%d",*b);
}