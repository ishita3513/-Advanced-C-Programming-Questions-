#include<stdio.h>

int main(){
    int a=91,b=6;
    int c=a*2?++a:--a;
    int d=a*2?++a:--a?--a:++b;
    printf("%d\n",c);
    printf("%d",d);
}

